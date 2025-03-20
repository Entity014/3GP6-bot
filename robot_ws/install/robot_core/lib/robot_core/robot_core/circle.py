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


class LineFollowingCircle(py_trees.behaviour.Behaviour):
    def __init__(self, name, node, direction="F", img_timeout=10.0, visualize=True):
        super(LineFollowingCircle, self).__init__(name)
        self.node = node
        self.direction = direction
        self.img_timeout = Duration(nanoseconds=img_timeout * 1e9)
        self.viz_window_name = "Line Detection"
        self.visualize = visualize

    def initialise(self):
        self.bridge = cv_bridge.CvBridge()
        self.subscription = self.node.create_subscription(
            CompressedImage, "camera/line/image/compressed", self.img_callback, 10
        )
        self.subscription
        self.ai_sub = self.node.create_subscription(
            CompressedImage, "camera/ai/image/compressed", self.img_ai_callback, 10
        )
        self.ai_sub
        self.cmd_vel_pub = self.node.create_publisher(Twist, "/cmd_vel", 10)

        self.start_time = self.node.get_clock().now()
        self.latest_img_msg = None
        self.latest_ai_msg = None

    def update(self):
        now = self.node.get_clock().now()
        if self.latest_img_msg is None:
            if now - self.start_time < self.img_timeout:
                return py_trees.common.Status.RUNNING
            else:
                self.logger.info("Image timeout exceeded")
                return py_trees.common.Status.FAILURE

        np_arr = np.frombuffer(self.latest_img_msg.data, np.uint8)
        np_arr_ai = np.frombuffer(self.latest_ai_msg.data, np.uint8)
        img = cv2.imdecode(np_arr, cv2.IMREAD_UNCHANGED)
        img_ai = cv2.imdecode(np_arr_ai, cv2.IMREAD_UNCHANGED)
        img_ai = img_ai[200:360, 160:480]
        gray_image = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
        centroids, angle = self.process(img, gray_image)
        detected = self.circle_process(img_ai)

        if self.visualize:
            cv2.destroyAllWindows()
            cv2.imshow(self.viz_window_name, img)
            cv2.waitKey(100)

        twist = Twist()

        if self.direction.upper() == "F":
            try:
                if not detected:
                    twist.linear.x = 0.1
                    twist.angular.z = np.interp(
                        centroids[0]["distance"] - angle, [-250, 250], [2.5, -2.5]
                    )
                    self.last_angular_z = twist.angular.z
                    self.cmd_vel_pub.publish(twist)
                    return py_trees.common.Status.RUNNING
                else:
                    twist.linear.x = 0.0
                    twist.angular.z = 0.0
                    self.cmd_vel_pub.publish(twist)
                    return py_trees.common.Status.SUCCESS
            except IndexError:
                twist.angular.z = 2.0
                self.cmd_vel_pub.publish(twist)
                return py_trees.common.Status.RUNNING
        else:
            self.logger.info(f"Invalid direction {self.direction.upper()}.")
            return py_trees.common.Status.FAILURE

    def terminate(self, new_status):
        self.logger.info(f"Terminated with status {new_status}")
        self.img_sub = None
        self.latest_img_msg = None
        self.latest_ai_msg = None
        if self.visualize:
            cv2.destroyAllWindows()

    def img_callback(self, msg):
        # self.logger.info("Image received")
        self.latest_img_msg = msg

    def img_ai_callback(self, msg):
        # self.logger.info("Image received")
        self.latest_ai_msg = msg

    def process(self, img, gray_image):

        height, width = gray_image.shape
        slice_intervals = [0.6, 0.7, 0.8, 0.9, 1.0]

        centroids = []

        for i in range(len(slice_intervals) - 1):
            y_start = int(height * slice_intervals[i])
            y_end = int(height * slice_intervals[i + 1])

            roi = gray_image[y_start:y_end, :]

            _, mask = cv2.threshold(roi, 80, 255, cv2.THRESH_BINARY_INV)
            contours, _ = cv2.findContours(
                mask, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE
            )

            nearest_contour = None
            min_distance = float("inf")

            for contour in contours:
                M = cv2.moments(contour)
                if M["m00"] != 0:
                    cx = int(M["m10"] / M["m00"])
                    cy = int(M["m01"] / M["m00"])
                    distance = abs(cx - (img.shape[1] / 2))  # Distance to center

                    if distance < min_distance:
                        min_distance = distance
                        nearest_contour = contour

            if nearest_contour is not None:
                nearest_contour[:, 0, 1] += y_start  # Adjust y-coordinates
                area = cv2.contourArea(nearest_contour)

                M = cv2.moments(nearest_contour)
                if M["m00"] != 0:
                    cx = int(M["m10"] / M["m00"])
                    cy = int(M["m01"] / M["m00"])

                    centroids.append(
                        {
                            "coordinates": (cx, cy),
                            "area": area,
                            "distance": int(cx - (img.shape[1] / 2)),
                        }
                    )

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
                cv2.drawContours(img, nearest_contour, -1, (0, 255, 0), 2)

        angle_deg = 0
        if len(centroids) > 1:
            for j in range(1, len(centroids)):
                cv2.line(
                    img,
                    centroids[j - 1]["coordinates"],
                    centroids[j]["coordinates"],
                    (255, 0, 0),
                    2,
                )
            cx1, cy1 = centroids[0]["coordinates"]
            cx2, cy2 = centroids[-1]["coordinates"]

            angle_rad = (np.pi / 2) - np.arctan2(cy2 - cy1, cx2 - cx1)
            angle_deg = np.degrees(angle_rad)

            if self.visualize:
                cv2.line(img, (cx1, cy1), (cx2, cy2), (255, 0, 0), 2)
        return centroids, angle_deg

    def circle_process(self, img):
        gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
        blurred = cv2.GaussianBlur(gray, (9, 9), 2)  # Blur to reduce noise

        # Apply Hough Circle Transform
        circles = cv2.HoughCircles(
            blurred,
            cv2.HOUGH_GRADIENT,
            dp=1.2,
            minDist=1000,
            param1=100,
            param2=20,
            minRadius=10,
            maxRadius=18,
        )

        if circles is not None:
            circles = np.uint16(np.around(circles))

            for circle in circles[0, :]:
                x, y, radius = circle
                cv2.circle(img, (x, y), radius, (0, 255, 0), 3)  # Draw circle
                cv2.circle(img, (x, y), 2, (0, 0, 255), 3)  # Draw center

            return True  # Circle detected

        return False  # No circle detected
