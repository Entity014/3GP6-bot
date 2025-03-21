#!/usr/bin/env python3
import os
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import CompressedImage
from ultralytics import YOLO
import cv2
import numpy as np


class ImageSubscriber(Node):
    def __init__(self):
        super().__init__("image_subscriber")

        self.subscription = self.create_subscription(
            CompressedImage, "camera/ai/image/compressed", self.image_callback, 10
        )
        self.subscription
        self.model = YOLO(
            os.path.join(
                os.path.expanduser("~"),
                "3GP6-bot",
                "bestPlate.pt",
            )
        )

    def image_callback(self, msg):
        try:
            np_arr = np.frombuffer(msg.data, np.uint8)
            img = cv2.imdecode(np_arr, cv2.IMREAD_UNCHANGED)
            # img = img[200:360, 160:480]
            img_width = img.shape[1]  # Get image width
            mid_screen = img_width // 2  # Midpoint of the screen

            results = self.model(img)

            # Process detection results
            for result in results:
                for box in result.boxes:
                    x_min, y_min, x_max, y_max = box.xyxy[0].cpu().numpy()

                    # Compute centroid
                    cx = int((x_min + x_max) / 2)
                    cy = int((y_min + y_max) / 2)

                    # Compute distance from mid-screen
                    distance = cx - mid_screen

                    # Compute area
                    width = x_max - x_min
                    height = y_max - y_min
                    area = int(width * height)

                    # Draw bounding box and centroid
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
                        f"({cx}, {cy}) Dist: {distance} Area: {area}",
                        (cx + 5, cy - 5),
                        cv2.FONT_HERSHEY_SIMPLEX,
                        0.5,
                        (255, 255, 255),
                        2,
                    )

                    # Log centroid, distance, and area
                    self.get_logger().info(
                        f"Centroid: ({cx}, {cy}), Distance from center: {distance}, Area: {area}"
                    )

            # Show the frame
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
