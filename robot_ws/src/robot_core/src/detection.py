#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import CompressedImage
from geometry_msgs.msg import Twist
import cv2
import numpy as np

hsv_threshold_dict = {
    "red": ((160, 40, 0), (180, 255, 255)),
    "green": ((40, 40, 0), (90, 255, 255)),
    "blue": ((100, 40, 0), (150, 255, 255)),
}


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
            gray_image = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
            centroids, angle = self.process(img, gray_image)
            # print(img.shape)
            print(centroids[-1]["area"])
            # cv2.imshow("Contours on Image", img)
            cv2.waitKey(1)

        except Exception as e:
            self.get_logger().error(f"Error processing image: {e}")

    def process(self, img, gray_image):

        height, width = gray_image.shape
        slice_intervals = [0.6, 0.7, 0.8, 0.9, 1.0]

        centroids = []

        for i in range(len(slice_intervals) - 1):
            y_start = int(height * slice_intervals[i])
            y_end = int(height * slice_intervals[i + 1])

            roi = gray_image[y_start:y_end, :]

            _, mask = cv2.threshold(roi, 70, 255, cv2.THRESH_BINARY_INV)
            contours, _ = cv2.findContours(
                mask, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE
            )
            cv2.imshow(f"Contours on Image{i}", mask)

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

            cv2.line(img, (cx1, cy1), (cx2, cy2), (255, 0, 0), 2)
        return centroids, angle_deg

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
