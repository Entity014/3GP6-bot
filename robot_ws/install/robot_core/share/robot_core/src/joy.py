#!/usr/bin/env python3
import rclpy

from robot_core.ps4 import Ps4Controller


def main():
    rclpy.init()

    sub = Ps4Controller()
    rclpy.spin(sub)

    rclpy.shutdown()


if __name__ == "__main__":
    main()
