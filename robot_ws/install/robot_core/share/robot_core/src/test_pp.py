import rclpy
from rclpy.node import Node
from sensor_msgs.msg import CompressedImage
import cv2
import numpy as np


class FastCameraSubscriber(Node):
    def __init__(self):
        super().__init__("fast_camera_subscriber")
        self.subscription = self.create_subscription(
            CompressedImage, "camera/line/image/compressed", self.image_callback, 10
        )
        self.subscription  # ป้องกันการถูกลบโดย Garbage Collector

    def image_callback(self, msg):
        # แปลง ROS 2 CompressedImage เป็น OpenCV Image
        np_arr = np.frombuffer(msg.data, np.uint8)
        frame = cv2.imdecode(np_arr, cv2.IMREAD_UNCHANGED)

        cv2.imshow("Remote Camera Feed", frame)
        cv2.waitKey(1)  # ใช้ 1 แทน 0 เพื่อให้ภาพอัปเดตเร็ว


def main(args=None):
    rclpy.init(args=args)
    node = FastCameraSubscriber()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        node.get_logger().info("Shutting down camera subscriber...")
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()
