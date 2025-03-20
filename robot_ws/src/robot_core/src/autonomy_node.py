#!/usr/bin/env python3

import os
import yaml
import random
import rclpy
from rclpy.node import Node
import time
import py_trees
import py_trees_ros
from py_trees.common import OneShotPolicy
from ament_index_python.packages import get_package_share_directory

from robot_core.line import (
    LineFollowing,
    LineFollowingColor,
    ColorFollowing,
    ColorFollowingLine,
)
from robot_core.move import RobotMove, RobotRotate
from robot_core.arm import RobotArm
from robot_core.ai import AIFollowing
from robot_core.circle import LineFollowingCircle
from robot_core.keypoint import CircleFollowing


class AutonomyBehavior(Node):
    def __init__(self):
        super().__init__("autonomy_node")
        self.declare_parameter("tree_type", value="queue")
        self.declare_parameter("enable_vision", value=True)

        path = os.path.join(
            os.path.expanduser("~"),
            "3GP6-bot",
            "color.txt",
        )

        with open(path, "r") as file:
            self.color = file.read()

        self.tree_type = self.get_parameter("tree_type").value
        self.enable_vision = self.get_parameter("enable_vision").value
        self.create_behavior_tree(self.tree_type)

    def create_behavior_tree(self, tree_type):
        if tree_type == "queue":
            self.tree = self.create_queue_tree()
        else:
            self.get_logger().info(f"Invalid behavior tree type {tree_type}.")

    def create_queue_tree(self):
        # bb = py_trees.blackboard.Blackboard()
        # bb.set("loc_list", self.loc_list)

        seq = py_trees.composites.Sequence(name="search", memory=True)
        root = py_trees.decorators.OneShot(
            name="root", child=seq, policy=OneShotPolicy.ON_SUCCESSFUL_COMPLETION
        )
        tree = py_trees_ros.trees.BehaviourTree(root, unicode_tree_debug=False)
        tree.setup(timeout=15.0, node=self)

        if self.enable_vision:
            seq.add_children(
                [
                    RobotArm(
                        f"arm1",
                        tree.node,
                        [0.1, 0.08, -95.0, False],
                    ),
                    LineFollowing(f"line1", tree.node, "F"),
                    RobotMove(f"move1", tree.node, "F", 1.3),
                    RobotRotate(f"rotate1", -90, tree.node),
                    RobotArm(
                        f"arm2",
                        tree.node,
                        [0.16, 0.08, -60.0, False],
                    ),
                    AIFollowing(f"ai1", tree.node, "R"),
                    RobotArm(
                        f"arm3",
                        tree.node,
                        [0.37, 0.09, 30.0, False],
                    ),
                    RobotArm(
                        f"arm4",
                        tree.node,
                        [0.37, 0.08, 30.0, False],
                    ),
                    RobotArm(
                        f"arm5",
                        tree.node,
                        [0.37, 0.08, 30.0, True],
                    ),
                    RobotArm(
                        f"arm6",
                        tree.node,
                        [0.37, 0.15, 30.0, True],
                    ),
                    RobotArm(
                        f"arm7",
                        tree.node,
                        [0.1, 0.08, -95.0, True],
                    ),
                    RobotRotate(f"rotate2", 0, tree.node),
                    LineFollowingColor(f"color1", tree.node, self.color),
                    RobotMove(f"move2", tree.node, "F", 1.5),
                    RobotRotate(f"rotate3", 0, tree.node),
                    ColorFollowing(f"color2", tree.node, self.color),
                    RobotRotate(f"rotate4", 90, tree.node),
                    RobotArm(
                        f"arm8",
                        tree.node,
                        [0.16, 0.08, -60.0, True],
                    ),
                    CircleFollowing("moveCircle1", tree.node, "R"),  # ! Tuning
                    CircleFollowing("moveCircle2", tree.node, "F"),
                    RobotArm(
                        f"arm9",
                        tree.node,
                        [0.39, 0.135, 20.0, True],
                    ),
                    RobotArm(
                        f"arm10",
                        tree.node,
                        [0.39, 0.134, 20.0, True],
                    ),
                    RobotArm(
                        f"arm11",
                        tree.node,
                        [0.39, 0.134, 20.0, False],
                    ),
                    RobotArm(
                        f"arm12",
                        tree.node,
                        [0.32, 0.25, 20.0, False],
                    ),
                    RobotArm(
                        f"arm13",
                        tree.node,
                        [0.1, 0.08, -95.0, False],
                    ),
                    RobotMove(f"move4", tree.node, "B", 2.0),
                    RobotRotate(f"rotate4", -90, tree.node),
                    ColorFollowingLine(f"color3", tree.node, self.color),
                    RobotMove(f"move5", tree.node, "F", 0.5),
                    RobotRotate(f"rotate5", 90, tree.node),
                    LineFollowingCircle("circle1", tree.node),  # ! Tuning
                    RobotMove(f"move7", tree.node, "F", 2.0),
                    LineFollowingCircle("circle2", tree.node),
                    RobotMove(f"move8", tree.node, "F", 1.5),
                ]
            )
        return tree

    def execute(self, period=0.1):
        self.tree.tick_tock(period_ms=period * 1000.0)
        rclpy.spin(self.tree.node)
        rclpy.shutdown()


if __name__ == "__main__":
    rclpy.init()
    behavior = AutonomyBehavior()
    behavior.execute()
