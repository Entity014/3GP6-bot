#!/usr/bin/env python3
import rclpy
import cv_bridge
from rclpy.duration import Duration
from sensor_msgs.msg import Image
from geometry_msgs.msg import Twist
from nav_msgs.msg import Odometry

import cv2
import numpy as np
import py_trees
import transforms3d.euler as euler

hsv_threshold_dict = {
    "red": ((160, 40, 0), (180, 255, 255)),
    "green": ((40, 40, 0), (90, 255, 255)),
    "blue": ((100, 40, 0), (150, 255, 255)),
}


class LineFollowing(py_trees.behaviour.Behaviour):
    def __init__(self, name, node, direction="F", img_timeout=10.0, visualize=False):
        super(LineFollowing, self).__init__(name)
        self.node = node
        self.direction = direction
        self.img_timeout = Duration(nanoseconds=img_timeout * 1e9)
        self.viz_window_name = "Line Detection"
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
        centroids, angle = self.process(img, gray_image)

        if self.visualize:
            cv2.destroyAllWindows()
            cv2.imshow(self.viz_window_name, img)
            cv2.waitKey(100)

        twist = Twist()

        if self.direction.upper() == "F":
            if centroids[-1]["area"] <= 2500:
                twist.linear.x = 0.1
                twist.angular.z = np.interp(
                    centroids[0]["distance"] - angle, [-410, 410], [2, -2]
                )
                self.cmd_vel_pub.publish(twist)
                return py_trees.common.Status.RUNNING
            else:
                twist.linear.x = 0.0
                twist.angular.z = 0.0
                self.cmd_vel_pub.publish(twist)
                return py_trees.common.Status.SUCCESS
        else:
            self.logger.info(f"Invalid direction {self.direction.upper()}.")
            return py_trees.common.Status.FAILURE

    def terminate(self, new_status):
        self.logger.info(f"Terminated with status {new_status}")
        self.img_sub = None
        self.latest_img_msg = None
        if self.visualize:
            cv2.destroyAllWindows()

    def img_callback(self, msg):
        # self.logger.info("Image received")
        self.latest_img_msg = msg

    def process(self, img, gray_image):

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


class LineFollowingColor(py_trees.behaviour.Behaviour):
    def __init__(self, name, node, color, img_timeout=10.0, visualize=False):
        super(LineFollowingColor, self).__init__(name)
        self.node = node
        self.color = color
        self.img_timeout = Duration(nanoseconds=img_timeout * 1e9)
        self.viz_window_name = "Color Detection"
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
        hsv_image = cv2.cvtColor(img, cv2.COLOR_BGR2HSV)

        height, width = gray_image.shape
        slice_intervals = [0.6, 0.7, 0.8, 0.9, 1.0]

        centroids = []

        color_centroids = None

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
        mask = cv2.inRange(
            hsv_image,
            hsv_threshold_dict[self.color.lower()][0],
            hsv_threshold_dict[self.color.lower()][1],
        )

        contours, _ = cv2.findContours(mask, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)

        for contour in contours:
            M = cv2.moments(contour)
            if M["m00"] != 0:
                cx = int(M["m10"] / M["m00"])
                cy = int(M["m01"] / M["m00"])
                color_centroids = (cx, cy)

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

        if color_centroids is not None and color_centroids[1] >= int(height * 0.8):
            # twist.angular.z = 0.4
            twist.linear.x = 0.0
            self.cmd_vel_pub.publish(twist)
            return py_trees.common.Status.SUCCESS
        else:
            twist.linear.x = 0.1
            self.cmd_vel_pub.publish(twist)
            return py_trees.common.Status.RUNNING

    def terminate(self, new_status):
        self.logger.info(f"Terminated with status {new_status}")
        self.img_sub = None
        self.latest_img_msg = None
        if self.visualize:
            cv2.destroyAllWindows()

    def img_callback(self, msg):
        self.latest_img_msg = msg


class RobotMove(py_trees.behaviour.Behaviour):
    def __init__(self, name, node, direction="F", timeout=2.0):
        super(RobotMove, self).__init__(name)
        self.node = node
        self.direction = direction
        self.timeout = Duration(nanoseconds=timeout * 1e9)

    def initialise(self):
        self.start_time = self.node.get_clock().now()
        self.cmd_vel_pub = self.node.create_publisher(Twist, "/cmd_vel", 10)

    def update(self):
        twist = Twist()
        now = self.node.get_clock().now()
        if now - self.start_time < self.timeout:
            if self.direction.upper() == "F":
                twist.linear.x = 0.2
            elif self.direction.upper() == "R":
                twist.angular.z = -0.2
            elif self.direction.upper() == "L":
                twist.linear.y = 0.2
            self.cmd_vel_pub.publish(twist)
            return py_trees.common.Status.RUNNING
        else:
            twist.linear.y = 0.0
            self.cmd_vel_pub.publish(twist)
            return py_trees.common.Status.SUCCESS

    def terminate(self, new_status):
        self.logger.info(f"Terminated with status {new_status}")


class RobotRotate(py_trees.behaviour.Behaviour):
    def __init__(self, name, setpoint, node, direction="R", timeout=3.0):
        super(RobotRotate, self).__init__(name)
        self.node = node
        self.set_point = setpoint
        self.direction = direction
        self.timeout = Duration(nanoseconds=timeout * 1e9)

    def initialise(self):
        self.start_time = self.node.get_clock().now()
        self.odom_sub = self.node.create_subscription(
            Odometry, "/odom", self.odom_callback, 10
        )
        self.cmd_vel_pub = self.node.create_publisher(Twist, "/cmd_vel", 10)

        self.latest_odom_msg = None

    def update(self):
        now = self.node.get_clock().now()
        if self.latest_odom_msg is None:
            if now - self.start_time < self.timeout:
                return py_trees.common.Status.RUNNING
            else:
                self.logger.info("Node timeout exceeded")
                return py_trees.common.Status.FAILURE

        qx = self.latest_odom_msg.pose.pose.orientation.x
        qy = self.latest_odom_msg.pose.pose.orientation.y
        qz = self.latest_odom_msg.pose.pose.orientation.z
        qw = self.latest_odom_msg.pose.pose.orientation.w

        roll, pitch, yaw = euler.quat2euler([qw, qx, qy, qz])
        roll_deg, pitch_deg, yaw_deg = np.degrees([roll, pitch, yaw])

        self.logger.info(f"Set Point: {self.set_point}°, Yaw: {yaw_deg:.2f}°")
        twist = Twist()
        if not (self.set_point - 10 <= round(yaw_deg) <= self.set_point + 10):
            if self.direction.upper() == "R":
                twist.angular.z = -0.8
            elif self.direction.upper() == "L":
                twist.angular.z = 0.8
            else:
                self.logger.info(f"Invalid direction {self.direction.upper()}.")
                return py_trees.common.Status.FAILURE
            self.cmd_vel_pub.publish(twist)
            return py_trees.common.Status.RUNNING
        else:
            twist.angular.z = 0.0
            self.cmd_vel_pub.publish(twist)
            return py_trees.common.Status.SUCCESS

    def odom_callback(self, msg):
        self.latest_odom_msg = msg

    def terminate(self, new_status):
        self.logger.info(f"Terminated with status {new_status}")
        self.set_point = None
        self.odom_sub = None
        self.latest_odom_msg = None
