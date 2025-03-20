import rclpy
from rclpy.node import Node
from sensor_msgs.msg import CompressedImage
import cv2
import numpy as np


def nothing(x):
    pass


# Create a window with trackbars for circle detection
cv2.namedWindow("Circle Detection")
cv2.createTrackbar("Min Radius", "Circle Detection", 0, 100, nothing)
cv2.createTrackbar("Max Radius", "Circle Detection", 100, 200, nothing)
cv2.createTrackbar("Param1", "Circle Detection", 50, 255, nothing)  # Canny threshold
cv2.createTrackbar(
    "Param2", "Circle Detection", 30, 100, nothing
)  # Circle detection sensitivity


class ImageSubscriber(Node):
    def __init__(self):
        super().__init__("image_subscriber")
        self.subscription = self.create_subscription(
            CompressedImage, "camera/ai/image/compressed", self.image_callback, 10
        )
        self.subscription

    def image_callback(self, msg):
        try:
            np_arr = np.frombuffer(msg.data, np.uint8)
            img = cv2.imdecode(np_arr, cv2.IMREAD_UNCHANGED)

            if img is None:
                self.get_logger().error("Failed to decode image")
                return

            # Convert to grayscale for circle detection
            gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
            gray = cv2.GaussianBlur(gray, (9, 9), 2)  # Reduce noise

            # Read trackbar values
            min_radius = cv2.getTrackbarPos("Min Radius", "Circle Detection")
            max_radius = cv2.getTrackbarPos("Max Radius", "Circle Detection")
            param1 = cv2.getTrackbarPos("Param1", "Circle Detection")
            param2 = cv2.getTrackbarPos("Param2", "Circle Detection")

            # Detect circles using Hough Transform
            circles = cv2.HoughCircles(
                gray,
                cv2.HOUGH_GRADIENT,
                dp=1.2,
                minDist=30,
                param1=param1,
                param2=param2,
                minRadius=min_radius,
                maxRadius=max_radius,
            )

            # Draw detected circles
            if circles is not None:
                circles = np.uint16(np.around(circles))
                for i in circles[0, :]:
                    cv2.circle(img, (i[0], i[1]), i[2], (0, 255, 0), 2)  # Circle
                    cv2.circle(img, (i[0], i[1]), 2, (0, 0, 255), 3)  # Center

            cv2.imshow("Detected Circles", img)
            cv2.waitKey(1)
        except Exception as e:
            self.get_logger().error(f"Error processing image: {e}")

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
