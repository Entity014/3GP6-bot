#!/usr/bin/env python3
import os
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

        self.detector = cv2.SIFT_create()
        self.matcher = cv2.BFMatcher()

        # Load reference image correctly
        self.path = os.path.join(
            os.path.expanduser("~"),
            "3GP6-bot",
            "circle.jpg",
        )
        self.ref = cv2.imread(self.path, cv2.IMREAD_GRAYSCALE)

        if self.ref is None:
            self.get_logger().error(f"Failed to load reference image from {self.path}")
            return

        self.kp1, self.des1 = self.detector.detectAndCompute(self.ref, None)

    def image_callback(self, msg):
        try:
            np_arr = np.frombuffer(msg.data, np.uint8)
            img = cv2.imdecode(np_arr, cv2.IMREAD_UNCHANGED)

            if img is None:
                self.get_logger().error("Failed to decode image.")
                return

            kp2, des2 = self.detector.detectAndCompute(img, None)

            if des2 is None or len(des2) == 0:
                self.get_logger().error("No keypoints detected in the incoming image.")
                return

            matches = self.matcher.knnMatch(self.des1, des2, k=2)
            good = [m for m, n in matches if m.distance < 0.7 * n.distance]

            if len(good) > 8:  # Reduced threshold from 12 to 8
                ref_pts = np.float32([self.kp1[m.queryIdx].pt for m in good]).reshape(
                    -1, 1, 2
                )
                target_pts = np.float32([kp2[m.trainIdx].pt for m in good]).reshape(
                    -1, 1, 2
                )

                M, mask = cv2.findHomography(ref_pts, target_pts, cv2.RANSAC, 20.0)

                if M is not None:
                    h, w = self.ref.shape  # Fixed shape extraction
                    pts = np.float32(
                        [[0, 0], [0, h - 1], [w - 1, h - 1], [w - 1, 0]]
                    ).reshape(-1, 1, 2)
                    dst = cv2.perspectiveTransform(pts, M)
                    cv2.polylines(
                        img, [np.int32(dst)], True, (0, 0, 255), 3, cv2.LINE_AA
                    )
                else:
                    self.get_logger().error(
                        "Homography matrix M is None. Skipping perspectiveTransform."
                    )
            else:
                self.get_logger().warning(f"Not enough good matches: {len(good)}")

            cv2.imshow("YOLOv8 Detection", img)
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
