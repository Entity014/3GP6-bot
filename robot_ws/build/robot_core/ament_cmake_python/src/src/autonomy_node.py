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

from robot_core.move import LineFollowing, LineFollowingColor, RobotMove, RobotRotate


class AutonomyBehavior(Node):
    def __init__(self):
        super().__init__("autonomy_node")
        self.declare_parameter("tree_type", value="queue")
        self.declare_parameter("enable_vision", value=True)

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
                    LineFollowing(f"line_Forward1", tree.node, "F"),
                    RobotRotate(f"move_Rotate2", -90, tree.node, "R"),
                    RobotRotate(f"move_Rotate3", 0, tree.node, "L"),
                    RobotMove(f"move_Forward4", tree.node, "F", 0.5),
                    LineFollowing(f"line_Forward5", tree.node, "F"),
                    # LineFollowing(f"line_Right2", tree.node, "R"),
                    # LineFollowing(f"line_Left3", tree.node, "L"),
                    # LineFollowingColor(f"color_Green1", tree.node, "blue"),
                ]
            )
        return tree

    def execute(self, period=0.5):
        self.tree.tick_tock(period_ms=period * 1000.0)
        rclpy.spin(self.tree.node)
        rclpy.shutdown()


if __name__ == "__main__":
    rclpy.init()
    behavior = AutonomyBehavior()
    behavior.execute()
