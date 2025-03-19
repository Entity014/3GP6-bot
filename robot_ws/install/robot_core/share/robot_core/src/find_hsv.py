import rclpy
from rclpy.node import Node
from sensor_msgs.msg import CompressedImage
import cv2
import numpy as np


def nothing(x):
    pass


# Create a window with trackbars
cv2.namedWindow("HSV Adjustments")
cv2.createTrackbar("H_min", "HSV Adjustments", 0, 180, nothing)
cv2.createTrackbar("H_max", "HSV Adjustments", 180, 180, nothing)
cv2.createTrackbar("S_min", "HSV Adjustments", 0, 255, nothing)
cv2.createTrackbar("S_max", "HSV Adjustments", 255, 255, nothing)
cv2.createTrackbar("V_min", "HSV Adjustments", 0, 255, nothing)
cv2.createTrackbar("V_max", "HSV Adjustments", 255, 255, nothing)


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
            hsv_image = cv2.cvtColor(img, cv2.COLOR_BGR2HSV)

            # Read values from trackbars
            h_min = cv2.getTrackbarPos("H_min", "HSV Adjustments")
            h_max = cv2.getTrackbarPos("H_max", "HSV Adjustments")
            s_min = cv2.getTrackbarPos("S_min", "HSV Adjustments")
            s_max = cv2.getTrackbarPos("S_max", "HSV Adjustments")
            v_min = cv2.getTrackbarPos("V_min", "HSV Adjustments")
            v_max = cv2.getTrackbarPos("V_max", "HSV Adjustments")

            lower_bound = np.array([h_min, s_min, v_min])
            upper_bound = np.array([h_max, s_max, v_max])

            mask = cv2.inRange(hsv_image, lower_bound, upper_bound)
            result = cv2.bitwise_and(img, img, mask=mask)

            cv2.imshow("Original", img)
            cv2.imshow("Mask", mask)
            cv2.imshow("Filtered Image", result)
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
