#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import CompressedImage
import cv2
import numpy as np


class WebcamAIPublisher(Node):
    def __init__(self):
        super().__init__("webcam_ai_node")
        self.publisher_ = self.create_publisher(
            CompressedImage, "camera/ai/image/compressed", 10
        )
        self.cap = cv2.VideoCapture(2)
        self.cap.set(cv2.CAP_PROP_FRAME_WIDTH, 640)
        self.cap.set(cv2.CAP_PROP_FRAME_HEIGHT, 480)
        self.cap.set(cv2.CAP_PROP_FPS, 10)

        if not self.cap.isOpened():
            self.get_logger().error("Error: Could not open AI camera")
            return

        self.timer = self.create_timer(0.1, self.publish_frame)

    def publish_frame(self):
        ret, frame = self.cap.read()
        if not ret:
            self.get_logger().error("Error: Failed to capture AI frame")
            return

        encode_param = [int(cv2.IMWRITE_JPEG_QUALITY), 80]
        _, buffer = cv2.imencode(".jpg", frame, encode_param)

        msg = CompressedImage()
        msg.format = "jpeg"
        msg.data = np.array(buffer).tobytes()

        self.publisher_.publish(msg)

    def destroy_node(self):
        self.cap.release()
        super().destroy_node()


def main(args=None):
    rclpy.init(args=args)
    node = WebcamAIPublisher()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()
