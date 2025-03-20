import os
import rclpy
import cv_bridge
from ultralytics import YOLO
from rclpy.duration import Duration
from sensor_msgs.msg import CompressedImage
from geometry_msgs.msg import Twist
from rclpy.node import Node
import cv2
import numpy as np
import py_trees


class CircleFollowing(py_trees.behaviour.Behaviour):
    def __init__(self, name, node, direction="R", img_timeout=10.0, visualize=False):
        super(CircleFollowing, self).__init__(name)
        self.node = node
        self.img_timeout = Duration(nanoseconds=img_timeout * 1e9)
        self.visualize = visualize
        self.direction = direction
        self.bridge = cv_bridge.CvBridge()

        self.subscription = self.node.create_subscription(
            CompressedImage, "camera/ai/image/compressed", self.img_callback, 10
        )
        self.cmd_vel_pub = self.node.create_publisher(Twist, "/cmd_vel", 10)

        self.start_time = self.node.get_clock().now()
        self.latest_img_msg = None
        self.model = YOLO(
            os.path.join(
                os.path.expanduser("~"),
                "3GP6-bot",
                "best.pt",
            )
        )

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

        distance, distance2 = self.process(img)

        if self.visualize:
            cv2.imshow("Circle Detection", img)
            cv2.waitKey(100)

        twist = Twist()

        if distance is not None and distance2 is not None:
            self.logger.info(f"{distance} {distance2}")
            if self.direction.upper() == "R":
                if abs(distance) >= 30:
                    twist.angular.z = np.interp(distance, [-320, 320], [0.75, -0.75])
                    if abs(twist.angular.z) < 0.2:
                        twist.angular.z = np.sign(twist.angular.z) * 0.2
                    self.cmd_vel_pub.publish(twist)
                    return py_trees.common.Status.RUNNING
                else:
                    twist.linear.x = 0.0
                    twist.angular.z = 0.0
                    self.cmd_vel_pub.publish(twist)
                    return py_trees.common.Status.SUCCESS
            elif self.direction.upper() == "F":
                if abs(distance2) <= 315:
                    twist.linear.x = 0.05
                    self.cmd_vel_pub.publish(twist)
                    return py_trees.common.Status.RUNNING
                else:
                    twist.linear.x = 0.0
                    twist.angular.z = 0.0
                    self.cmd_vel_pub.publish(twist)
                    return py_trees.common.Status.SUCCESS
        else:
            return py_trees.common.Status.RUNNING

    def terminate(self, new_status):
        self.logger.info(f"Terminated with status {new_status}")
        self.subscription = None
        self.latest_img_msg = None
        cv2.destroyAllWindows()

    def img_callback(self, msg):
        self.latest_img_msg = msg

    def process(self, img):

        img_width = img.shape[1]  # Get image width
        img_hight = img.shape[0]  # Get image width
        mid_screen = img_width // 2  # Midpoint of the screen
        mid_screen2 = img_hight // 2  # Midpoint of the screen

        results = self.model(img)

        # Process detection results
        for result in results:
            for box in result.boxes:
                x_min, y_min, x_max, y_max = box.xyxy[0].cpu().numpy()

                # Compute centroid
                cx = int((x_min + x_max) / 2)
                cy = int((y_min + y_max) / 2)

                # Compute distance from mid-screen
                distance = (cx - mid_screen) - 20
                distance2 = cy
                width = x_max - x_min
                height = y_max - y_min

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
                        f"({cx}, {cy}) Dist: {distance} Area: {distance2}",
                        (cx + 5, cy - 5),
                        cv2.FONT_HERSHEY_SIMPLEX,
                        0.5,
                        (255, 255, 255),
                        2,
                    )
                return distance, distance2
        return None, None


def main(args=None):
    rclpy.init(args=args)
    node = Node("circle_follower")
    behaviour = CircleFollowing("CircleFollowing", node)
    tree = py_trees.trees.BehaviourTree(behaviour)

    try:
        while rclpy.ok():
            status = tree.tick()
            if (
                status == py_trees.common.Status.SUCCESS
                or status == py_trees.common.Status.FAILURE
            ):
                break
            rclpy.spin_once(node, timeout_sec=0.1)
    except KeyboardInterrupt:
        pass
    finally:
        behaviour.terminate(py_trees.common.Status.INVALID)
        node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()
