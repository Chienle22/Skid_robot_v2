#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from std_msgs.msg import Float64MultiArray
import math

class KinematicNode(Node):
    def __init__(self):
        super().__init__('kinematic')

        self.declare_parameter('wheel_base', 0.5)
        self.declare_parameter('wheel_radius', 0.1)
        self.declare_parameter('output_topic', 'kine_to_ZLA8015D')
        self.declare_parameter('pi', math.pi)
        self.declare_parameter('input_topic', 'cmd_vel')

        self.wheel_base = self.get_parameter('wheel_base').get_parameter_value().double_value
        self.wheel_radius = self.get_parameter('wheel_radius').get_parameter_value().double_value
        self.pi = self.get_parameter('pi').get_parameter_value().double_value
        self.input_topic = self.get_parameter('input_topic').get_parameter_value().string_value
        self.output_topic = self.get_parameter('output_topic').get_parameter_value().string_value

        self.wheel_command_publisher = self.create_publisher(Float64MultiArray, self.output_topic, 5)
        self.cmd_vel_subscription = self.create_subscription(
            Twist,
            self.input_topic,
            self.dong_hoc,
            10
        )

        self.wheel_speed_message = Float64MultiArray()
        self.get_logger().info(f"Kinematic Node Started")

    def gioi_han(self, a):
        if a >= 300:
            a = 300
        elif a <= -300 and a != 0:
            a = -300
        return a

    def dong_hoc(self, gmsg):
        linear_velocity = gmsg.linear.x
        angular_velocity = gmsg.angular.z

        left_wheel_rpm = ((linear_velocity - (angular_velocity * (self.wheel_base / 2))) / self.wheel_radius) * (60 / (2 * self.pi))
        right_wheel_rpm = ((linear_velocity + (angular_velocity * (self.wheel_base / 2))) / self.wheel_radius) * (60 / (2 * self.pi))

        left_wheel_rpm = self.gioi_han(left_wheel_rpm)
        right_wheel_rpm = self.gioi_han(right_wheel_rpm)

        self.wheel_speed_message.data = [left_wheel_rpm, right_wheel_rpm]

        # self.get_logger().info(f"Vận tốc thẳng đặt là: {v_thang_x:.2f}")
        # self.get_logger().info(f"Vận tốc góc đặt là: {v_quay_z:.2f}")
        # self.get_logger().info(f"RPM trái đặt là: {omega_l:.3f}")
        # self.get_logger().info(f"RPM phải đặt là: {omega_r:.3f}")

        self.wheel_command_publisher.publish(self.wheel_speed_message)

def main(args=None):    
    
    rclpy.init(args=args)

    node = KinematicNode()

    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass

    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
