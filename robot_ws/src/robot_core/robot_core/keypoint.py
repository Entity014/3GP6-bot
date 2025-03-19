import os
import rclpy
import cv_bridge
from rclpy.duration import Duration
from sensor_msgs.msg import CompressedImage
from geometry_msgs.msg import Twist
from rclpy.node import Node
import cv2
import numpy as np
import py_trees


class CircleFollowing(py_trees.behaviour.Behaviour):
    def __init__(self, name, node, img_timeout=10.0, visualize=True):
        super(CircleFollowing, self).__init__(name)
        self.node = node
        self.img_timeout = Duration(nanoseconds=img_timeout * 1e9)
        self.visualize = visualize
        self.bridge = cv_bridge.CvBridge()

        self.subscription = self.node.create_subscription(
            CompressedImage, "camera/ai/image/compressed", self.img_callback, 10
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

        np_arr = np.frombuffer(self.latest_img_msg.data, np.uint8)
        img = cv2.imdecode(np_arr, cv2.IMREAD_UNCHANGED)
        img = img[240:, :]

        distance = self.detect_circle(img)

        if self.visualize:
            cv2.imshow("Circle Detection", img)
            cv2.waitKey(100)

        twist = Twist()

        if abs(distance) >= 15:
            twist.angular.z = np.interp(distance, [-320, 320], [0.8, -0.8])
            self.cmd_vel_pub.publish(twist)
            return py_trees.common.Status.RUNNING
        else:
            twist.linear.x = 0.0
            twist.angular.z = 0.0
            self.cmd_vel_pub.publish(twist)
            return py_trees.common.Status.SUCCESS

    def terminate(self, new_status):
        self.logger.info(f"Terminated with status {new_status}")
        self.subscription = None
        self.latest_img_msg = None
        cv2.destroyAllWindows()

    def img_callback(self, msg):
        self.latest_img_msg = msg

    def detect_circle(self, img):
        gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
        blurred = cv2.GaussianBlur(gray, (9, 9), 2)

        circles = cv2.HoughCircles(
            blurred,
            cv2.HOUGH_GRADIENT,
            dp=1.2,
            minDist=50,
            param1=100,
            param2=30,
            minRadius=10,
            maxRadius=100,
        )

        if circles is not None:
            circles = np.uint16(np.around(circles))
            for circle in circles[0, :]:
                x, y, radius = circle
                cv2.circle(img, (x, y), radius, (0, 255, 0), 3)
                cv2.circle(img, (x, y), 2, (0, 0, 255), 3)
                img_width = img.shape[1]
                mid_screen = img_width // 2
                return x - mid_screen
        return None


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
