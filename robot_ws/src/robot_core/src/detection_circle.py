#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import CompressedImage
import cv2
import numpy as np


class ImageSubscriber(Node):
    def __init__(self):
        super().__init__("image_subscriber")

        self.subscription = self.create_subscription(
            CompressedImage, "camera/ai/image/compressed", self.image_callback, 10
        )

    def image_callback(self, msg):
        try:
            np_arr = np.frombuffer(msg.data, np.uint8)
            img = cv2.imdecode(np_arr, cv2.IMREAD_UNCHANGED)
            img = img[200:360, 160:480]

            if img is None:
                self.get_logger().error("Failed to decode image.")
                return

            detected = self.detect_circle(img)

            # Show the result
            cv2.imshow("Circle Detection", img)
            cv2.waitKey(1)

            if detected:
                print("Circle detected!")
            else:
                print("No circle detected.")

        except Exception as e:
            self.get_logger().error(f"Error processing image: {e}")

    def detect_circle(self, img):
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

    def destroy_node(self):
        super().destroy_node()
        cv2.destroyAllWindows()


def main(args=None):
    rclpy.init(args=args)
    node = ImageSubscriber()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()
