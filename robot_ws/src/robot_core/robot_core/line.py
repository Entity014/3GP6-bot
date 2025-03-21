#!/usr/bin/env python3
import rclpy
import cv_bridge
from rclpy.duration import Duration
from sensor_msgs.msg import CompressedImage, Image
from geometry_msgs.msg import Twist

import cv2
import numpy as np
import py_trees

hsv_detect_dict = {
    "red": ((0, 150, 60), (180, 255, 255)),
    "green": ((40, 45, 83), (90, 255, 255)),
    "blue": ((90, 90, 0), (130, 255, 255)),
}


hsv_threshold_dict = {
    "red": ((0, 50, 0), (180, 255, 255)),
    "green": ((0, 50, 0), (180, 255, 255)),
    "blue": ((80, 80, 0), (180, 255, 255)),
}

gray_threshold_dict = {
    "red": 50,
    "green": 60,
    "blue": 50,
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
        self.subscription = self.node.create_subscription(
            CompressedImage, "camera/line/image/compressed", self.img_callback, 10
        )
        self.subscription
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

        np_arr = np.frombuffer(self.latest_img_msg.data, np.uint8)
        img = cv2.imdecode(np_arr, cv2.IMREAD_UNCHANGED)
        gray_image = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
        centroids, angle = self.process(img, gray_image)

        if self.visualize:
            cv2.destroyAllWindows()
            cv2.imshow(self.viz_window_name, img)
            cv2.waitKey(100)

        twist = Twist()

        if self.direction.upper() == "F":
            if centroids[-1]["area"] <= 1500:
                twist.linear.x = 0.35
                twist.angular.z = np.interp(
                    centroids[0]["distance"] - angle, [-250, 250], [2.5, -2.5]
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
        intital = 0.5
        slice_intervals = [
            intital,
            intital + 0.1,
            intital + 0.2,
            intital + 0.3,
            intital + 0.4,
        ]

        centroids = []

        for i in range(len(slice_intervals) - 1):
            y_start = int(height * slice_intervals[i])
            y_end = int(height * slice_intervals[i + 1])

            roi = gray_image[y_start:y_end, :]

            _, mask = cv2.threshold(roi, 110, 255, cv2.THRESH_BINARY_INV)
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
    def __init__(
        self, name, node, color="red", direction="F", img_timeout=10.0, visualize=False
    ):
        super(LineFollowingColor, self).__init__(name)
        self.node = node
        self.direction = direction
        self.color = color
        self.img_timeout = Duration(nanoseconds=img_timeout * 1e9)
        self.viz_window_name = "Line Detection"
        self.visualize = visualize

    def initialise(self):
        self.bridge = cv_bridge.CvBridge()
        self.subscription = self.node.create_subscription(
            CompressedImage, "camera/line/image/compressed", self.img_callback, 10
        )
        self.subscription
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

        np_arr = np.frombuffer(self.latest_img_msg.data, np.uint8)
        img = cv2.imdecode(np_arr, cv2.IMREAD_UNCHANGED)
        gray_image = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
        hsv_image = cv2.cvtColor(img, cv2.COLOR_BGR2HSV)
        centroids, angle = self.gray_process(img, gray_image)
        hsv_area = self.hsv_process(img, hsv_image)

        if self.visualize:
            cv2.destroyAllWindows()
            cv2.imshow(self.viz_window_name, img)
            cv2.waitKey(100)

        twist = Twist()

        if self.direction.upper() == "F":
            if hsv_area[-1] <= 50:
                self.last_angular_z = getattr(self, "last_angular_z", 0.0)
                try:
                    twist.linear.x = 0.25
                    twist.angular.z = np.interp(
                        centroids[0]["distance"] - angle, [-250, 250], [4.7, -4.7]
                    )
                    self.last_angular_z = twist.angular.z
                except IndexError:
                    twist.linear.x = 0.0
                    if self.last_angular_z > 0:
                        twist.angular.z = 1.0
                    elif self.last_angular_z < 0:
                        twist.angular.z = -1.0
                    else:
                        twist.angular.z = 0.0
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
        self.latest_img_msg = msg

    def gray_process(self, img, gray_image):

        height, width = gray_image.shape
        intital = 0.6
        slice_intervals = [
            intital,
            intital + 0.1,
            intital + 0.2,
            intital + 0.3,
            intital + 0.4,
        ]

        centroids = []

        for i in range(len(slice_intervals) - 1):
            y_start = int(height * slice_intervals[i])
            y_end = int(height * slice_intervals[i + 1])

            roi = gray_image[y_start:y_end, :]

            _, mask = cv2.threshold(roi, 70, 255, cv2.THRESH_BINARY_INV)
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

    def hsv_process(self, img, hsv_image):
        height, width = hsv_image.shape[:2]
        intital = 0.5
        slice_intervals = [
            intital,
            intital + 0.1,
            intital + 0.2,
            intital + 0.3,
            intital + 0.4,
        ]
        max_area_list = []

        for i in range(len(slice_intervals) - 1):
            y_start = int(height * slice_intervals[i])
            y_end = int(height * slice_intervals[i + 1])

            roi = hsv_image[y_start:y_end, :]

            mask = cv2.inRange(
                roi,
                hsv_detect_dict[self.color][0],
                hsv_detect_dict[self.color][1],
            )
            contours, _ = cv2.findContours(
                mask, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE
            )

            max_area = max(
                (cv2.contourArea(contour) for contour in contours), default=0
            )
            max_area_list.append(max_area)

        return max_area_list


class ColorFollowing(py_trees.behaviour.Behaviour):
    def __init__(
        self, name, node, color="red", direction="F", img_timeout=10.0, visualize=False
    ):
        super(ColorFollowing, self).__init__(name)
        self.node = node
        self.direction = direction
        self.color = color
        self.img_timeout = Duration(nanoseconds=img_timeout * 1e9)
        self.viz_window_name = "Line Detection"
        self.visualize = visualize

    def initialise(self):
        self.bridge = cv_bridge.CvBridge()
        self.subscription = self.node.create_subscription(
            CompressedImage, "camera/line/image/compressed", self.img_callback, 10
        )
        self.subscription
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

        np_arr = np.frombuffer(self.latest_img_msg.data, np.uint8)
        img = cv2.imdecode(np_arr, cv2.IMREAD_UNCHANGED)
        hsv_image = cv2.cvtColor(img, cv2.COLOR_BGR2HSV)
        centroids, angle = self.process(img, hsv_image)
        # try:
        #     x1, y1, w1, h1 = centroids[0]["bounding"]
        #     x2, y2, w2, h2 = centroids[1]["bounding"]
        #     delta_ratio1 = abs(6.3 - (w1 / h1))
        #     delta_ratio2 = abs(6.3 - (w2 / h2))
        # except IndexError:
        #     delta_ratio1 = 5.0
        #     delta_ratio2 = 5.0
        # self.logger.info(f"{delta_ratio1} {delta_ratio2}")

        if self.visualize:
            cv2.destroyAllWindows()
            cv2.imshow(self.viz_window_name, img)
            cv2.waitKey(100)

        twist = Twist()

        if self.direction.upper() == "F":
            if centroids[-1]["area"] <= 1000:
                try:
                    twist.linear.x = 0.2
                    twist.angular.z = np.interp(
                        centroids[0]["distance"] - angle, [-250, 250], [3.0, -3.0]
                    )
                except:
                    twist.linear.x = 0.0
                    twist.angular.z = 2.0
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
        self.latest_img_msg = msg

    def process(self, img, hsv_image):

        height, width = hsv_image.shape[:2]
        intital = 0.5
        slice_intervals = [
            intital,
            intital + 0.1,
            intital + 0.2,
            intital + 0.3,
            intital + 0.4,
        ]

        centroids = []

        for i in range(len(slice_intervals) - 1):
            y_start = int(height * slice_intervals[i])
            y_end = int(height * slice_intervals[i + 1])

            roi = hsv_image[y_start:y_end, :]

            mask = cv2.inRange(
                roi,
                hsv_threshold_dict[self.color][0],
                hsv_threshold_dict[self.color][1],
            )
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
                x, y, w, h = cv2.boundingRect(nearest_contour)

                M = cv2.moments(nearest_contour)
                if M["m00"] != 0:
                    cx = int(M["m10"] / M["m00"])
                    cy = int(M["m01"] / M["m00"])

                    centroids.append(
                        {
                            "coordinates": (cx, cy),
                            "bounding": (x, y, w, h),
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


class ColorFollowingLine(py_trees.behaviour.Behaviour):
    def __init__(
        self, name, node, color="red", direction="F", img_timeout=10.0, visualize=False
    ):
        super(ColorFollowingLine, self).__init__(name)
        self.node = node
        self.direction = direction
        self.color = color
        self.img_timeout = Duration(nanoseconds=img_timeout * 1e9)
        self.viz_window_name = "Line Detection"
        self.visualize = visualize

    def initialise(self):
        self.bridge = cv_bridge.CvBridge()
        self.subscription = self.node.create_subscription(
            CompressedImage, "camera/line/image/compressed", self.img_callback, 10
        )
        self.subscription
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

        np_arr = np.frombuffer(self.latest_img_msg.data, np.uint8)
        img = cv2.imdecode(np_arr, cv2.IMREAD_UNCHANGED)
        img = img[50:, :]
        gray_image = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
        hsv_image = cv2.cvtColor(img, cv2.COLOR_BGR2HSV)
        centroids, angle = self.hsv_process(img, hsv_image)
        gray_area = self.gray_process(img, gray_image)
        # self.logger.info(f"{gray_area}")

        if self.visualize:
            cv2.destroyAllWindows()
            cv2.imshow(self.viz_window_name, img)
            cv2.waitKey(100)

        twist = Twist()

        if self.direction.upper() == "F":
            if gray_area[0] <= 100:
                try:
                    twist.linear.x = 0.15
                    twist.angular.z = np.interp(
                        centroids[0]["distance"] - angle, [-250, 250], [2.5, -2.5]
                    )
                except:
                    twist.linear.x = 0.0
                    twist.angular.z = -1.0
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
        self.latest_img_msg = msg

    def hsv_process(self, img, hsv_image):

        height, width = hsv_image.shape[:2]
        intital = 0.6
        slice_intervals = [
            intital,
            intital + 0.1,
            intital + 0.2,
            intital + 0.3,
            intital + 0.4,
        ]

        centroids = []

        for i in range(len(slice_intervals) - 1):
            y_start = int(height * slice_intervals[i])
            y_end = int(height * slice_intervals[i + 1])

            roi = hsv_image[y_start:y_end, :]

            mask = cv2.inRange(
                roi,
                hsv_threshold_dict[self.color][0],
                hsv_threshold_dict[self.color][1],
            )
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

    def gray_process(self, img, gray_image):
        height, width = gray_image.shape
        slice_intervals = [0.6, 0.7, 0.8, 0.9, 1.0]
        max_area_list = []

        for i in range(len(slice_intervals) - 1):
            y_start = int(height * slice_intervals[i])
            y_end = int(height * slice_intervals[i + 1])

            roi = gray_image[y_start:y_end, :]

            _, mask = cv2.threshold(
                roi, gray_threshold_dict[self.color], 255, cv2.THRESH_BINARY_INV
            )
            contours, _ = cv2.findContours(
                mask, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE
            )

            max_area = max(
                (cv2.contourArea(contour) for contour in contours), default=0
            )
            max_area_list.append(max_area)

        return max_area_list
