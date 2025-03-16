#!/usr/bin/env python3
import rclpy
import cv_bridge
from rclpy.duration import Duration
from sensor_msgs.msg import Image
from geometry_msgs.msg import Twist

import cv2
import numpy as np
import py_trees


class LineFollowing(py_trees.behaviour.Behaviour):
    def __init__(self, name, node, img_timeout=10.0, visualize=False):
        super(LineFollowing, self).__init__(name)
        self.node = node
        self.img_timeout = Duration(nanoseconds=img_timeout * 1e9)
        self.viz_window_name = "Image with Detections"
        self.visualize = visualize

    def initialise(self):
        self.bridge = cv_bridge.CvBridge()
        self.img_sub = self.node.create_subscription(
            Image,
            "/camera/color/image_raw",
            self.img_callback,
            10,
        )
        self.cmd_vel_pub = self.node.create_publisher(Twist, "/cmd_vel", 10)

        self.start_time = self.node.get_clock().now()
        self.latest_img_msg = None

    def update(self):
        now = self.node.get_clock().now()
        if self.latest_img_msg is None:
            if now - self.start_time < self.img_timeout:
                return py_trees.common.Status.RUNNING
            else:
                self.logger.info("Image timeout exceeded")
                return py_trees.common.Status.FAILURE

        img = self.bridge.imgmsg_to_cv2(self.latest_img_msg, desired_encoding="bgr8")
        gray_image = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)

        height, width = gray_image.shape
        slice_intervals = [0.6, 0.7, 0.8, 0.9, 1.0]

        centroids = []

        for i in range(len(slice_intervals) - 1):
            y_start = int(height * slice_intervals[i])
            y_end = int(height * slice_intervals[i + 1])

            roi = gray_image[y_start:y_end, :]

            _, mask = cv2.threshold(roi, 50, 255, cv2.THRESH_BINARY_INV)
            contours, _ = cv2.findContours(
                mask, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE
            )

            for contour in contours:
                contour[:, 0, 1] += y_start  # Adjust y-coordinates

                M = cv2.moments(contour)
                if M["m00"] != 0:
                    cx = int(M["m10"] / M["m00"])
                    cy = int(M["m01"] / M["m00"])

                    centroids.append((cx, cy))

                    if self.visualize:
                        cv2.circle(img, (cx, cy), 5, (0, 0, 255), -1)  # Red dot
                        cv2.putText(
                            img,
                            f"{int(cx - (img.shape[1] / 2))}",
                            (cx, cy),
                            cv2.FONT_HERSHEY_SIMPLEX,
                            1,
                            (0, 0, 255),
                            2,
                        )

            if self.visualize:
                cv2.drawContours(img, contours, -1, (0, 255, 0), 2)

        distance = centroids[0][0] - (img.shape[1] / 2)
        angle_deg = 0
        if len(centroids) > 1:
            for j in range(1, len(centroids)):
                cv2.line(img, centroids[j - 1], centroids[j], (255, 0, 0), 2)
            cx1, cy1 = centroids[0]
            cx2, cy2 = centroids[-1]

            angle_rad = (np.pi / 2) - np.arctan2(cy2 - cy1, cx2 - cx1)
            angle_deg = np.degrees(angle_rad)

            if self.visualize:
                cv2.line(img, (cx1, cy1), (cx2, cy2), (255, 0, 0), 2)

        if self.visualize:
            cv2.destroyAllWindows()
            cv2.imshow(self.viz_window_name, img)
            cv2.waitKey(100)

        twist = Twist()

        if -100 <= centroids[-1][0] - (img.shape[1] / 2) <= 100:
            twist.linear.x = 0.1
            self.cmd_vel_pub.publish(twist)
            return py_trees.common.Status.RUNNING
        else:
            twist.linear.x = 0.0
            self.cmd_vel_pub.publish(twist)
            return py_trees.common.Status.SUCCESS

    def terminate(self, new_status):
        self.logger.info(f"Terminated with status {new_status}")
        self.img_sub = None
        self.latest_img_msg = None
        if self.visualize:
            cv2.destroyAllWindows()
        self.node.destroy_node()

    def img_callback(self, msg):
        # self.logger.info("Image received")
        self.latest_img_msg = msg
