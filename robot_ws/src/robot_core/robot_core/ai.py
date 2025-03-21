#!/usr/bin/env python3
import os
import rclpy
import cv_bridge
from ultralytics import YOLO
from rclpy.duration import Duration
from sensor_msgs.msg import CompressedImage, Image
from geometry_msgs.msg import Twist

import cv2
import numpy as np
import py_trees


class AIFollowing(py_trees.behaviour.Behaviour):
    def __init__(self, name, node, type_="R", img_timeout=10.0, visualize=False):
        super(AIFollowing, self).__init__(name)
        self.node = node
        self.type = type_
        self.img_timeout = Duration(nanoseconds=img_timeout * 1e9)
        self.viz_window_name = "Line Detection"
        self.visualize = visualize

    def initialise(self):
        self.bridge = cv_bridge.CvBridge()
        self.subscription = self.node.create_subscription(
            CompressedImage, "camera/ai/image/compressed", self.img_callback, 10
        )
        self.subscription
        self.cmd_vel_pub = self.node.create_publisher(Twist, "/cmd_vel", 10)

        self.model = YOLO(
            os.path.join(
                os.path.expanduser("~"),
                "3GP6-bot",
                "bestPlate.pt",
            )
        )
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

        np_arr = np.frombuffer(self.latest_img_msg.data, np.uint8)
        img = cv2.imdecode(np_arr, cv2.IMREAD_UNCHANGED)
        distance, diff_area = self.process(img)
        # self.logger.info(f"{distance}")

        if self.visualize:
            cv2.destroyAllWindows()
            cv2.imshow(self.viz_window_name, img)
            cv2.waitKey(100)

        twist = Twist()

        if self.type.upper() == "R":
            if abs(distance) >= 40:
                twist.angular.z = np.interp(distance, [-320, 320], [0.4, -0.4])
                if abs(twist.angular.z) < 0.2:
                    twist.angular.z = np.sign(twist.angular.z) * 0.2
                self.cmd_vel_pub.publish(twist)
                return py_trees.common.Status.RUNNING
            else:
                twist.linear.x = 0.0
                twist.angular.z = 0.0
                self.cmd_vel_pub.publish(twist)
                return py_trees.common.Status.SUCCESS
        elif self.type.upper() == "F":
            if abs(diff_area) >= 1000:
                twist.linear.x = np.interp(distance, [-320, 320], [0.1, -0.1])
                self.cmd_vel_pub.publish(twist)
                return py_trees.common.Status.RUNNING
            else:
                twist.linear.x = 0.0
                twist.angular.z = 0.0
                self.cmd_vel_pub.publish(twist)
                return py_trees.common.Status.SUCCESS

    def terminate(self, new_status):
        self.logger.info(f"Terminated with status {new_status}")
        self.img_sub = None
        self.latest_img_msg = None
        if self.visualize:
            cv2.destroyAllWindows()

    def img_callback(self, msg):
        # self.logger.info("Image received")
        self.latest_img_msg = msg

    def process(self, img):

        img_width = img.shape[1]  # Get image width
        mid_screen = img_width // 2  # Midpoint of the screen

        results = self.model(img)

        # Process detection results
        for result in results:
            for box in result.boxes:
                x_min, y_min, x_max, y_max = box.xyxy[0].cpu().numpy()

                # Compute centroid
                cx = int((x_min + x_max) / 2) - 20
                cy = int((y_min + y_max) / 2)

                # Compute distance from mid-screen
                distance = cx - mid_screen
                width = x_max - x_min
                height = y_max - y_min
                diff_area = 40000 - int(width * height)

                # Draw bounding box and centroid
                if self.visualize:
                    cv2.rectangle(
                        img,
                        (int(x_min), int(y_min)),
                        (int(x_max), int(y_max)),
                        (0, 255, 0),
                        2,
                    )
                    cv2.circle(img, (cx, cy), 5, (0, 0, 255), -1)
                    cv2.putText(
                        img,
                        f"({cx}, {cy}) Dist: {distance} Area: {diff_area}",
                        (cx + 5, cy - 5),
                        cv2.FONT_HERSHEY_SIMPLEX,
                        0.5,
                        (255, 255, 255),
                        2,
                    )
                return distance, diff_area
