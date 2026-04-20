#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Joy
from geometry_msgs.msg import Twist

# Button indices
nhan = 0
tron = 1
tam_giac = 2
vuong = 3
trai_tren = 4
phai_tren = 5
trai_duoi = 6
phai_duoi = 7
select = 8
start = 9
connect = 10
analog_trai = 11
analog_phai = 12
up = 13
down = 14
left = 15
right = 16

# Axes indices
trai_sang = 0
trai_len = 1
nut_duoi_trai = 2
phai_sang = 3
phai_len = 4
nut_duoi_phai = 5

class Ps3TeleopNode(Node):
    def __init__(self):
        super().__init__('ps3_teleop')
        self.declare_parameter('linear_speed_scale', 0.0)
        self.declare_parameter('angular_speed_scale', 0.9)
        self.declare_parameter('output_topic', 'cmd_vel')
        self.declare_parameter('input_topic', 'joy')

        # Lưu giá trị tham số vào các thuộc tính của lớp
        self.linear_speed_scale = self.get_parameter('linear_speed_scale').get_parameter_value().double_value
        self.angular_speed_scale = self.get_parameter('angular_speed_scale').get_parameter_value().double_value
        self.input_topic = self.get_parameter('input_topic').get_parameter_value().string_value
        self.output_topic = self.get_parameter('output_topic').get_parameter_value().string_value

        self.publisher_ = self.create_publisher(Twist, self.output_topic, 10)
        self.subscription = self.create_subscription(
            Joy,
            self.input_topic,
            self.joy_twist_callback,
            10
        )
        self.gmsg = Twist()
        self.get_logger().info('PS3 Teleop Node Started')

    def joy_twist_callback(self, joy):
        # Move forward
        if joy.axes[trai_len] > 0.5:
            linear_speed_command = joy.axes[phai_len] * 0.9 if joy.axes[phai_len] > 0 else 0.1
            if joy.buttons[trai_tren]:
                self.gmsg.angular.z = float(self.angular_speed_scale / 3)
            elif joy.buttons[phai_tren]:
                self.gmsg.angular.z = float(-self.angular_speed_scale / 3)
            else:
                self.gmsg.angular.z = 0.0
            self.gmsg.linear.x = linear_speed_command

        # Move backward
        elif joy.axes[trai_len] < -0.5:
            linear_speed_command = float(-joy.axes[phai_len] * 0.9) if joy.axes[phai_len] < 0 else 0.1
            
            if joy.buttons[trai_tren]:
                self.gmsg.angular.z = float(-self.angular_speed_scale / 3)
            elif joy.buttons[phai_tren]:
                self.gmsg.angular.z = float(self.angular_speed_scale / 3)
            else:
                self.gmsg.angular.z = 0.0
            self.gmsg.linear.x = -linear_speed_command

        # Rotate or stop
        else:
            if joy.buttons[trai_tren]:
                self.gmsg.linear.x = 0.0
                self.gmsg.angular.z = float(self.angular_speed_scale)
            elif joy.buttons[phai_tren]:
                self.gmsg.linear.x = 0.0
                self.gmsg.angular.z = float(-self.angular_speed_scale)
            else:
                self.gmsg.linear.x = 0.0
                self.gmsg.angular.z = 0.0
        self.publish_cmd_vel()
    
    def publish_cmd_vel(self):
        # self.get_logger().info(f"linear.x = {self.gmsg.linear.x}, angular.z = {self.gmsg.angular.z}")
        self.publisher_.publish(self.gmsg)

def main(args=None):
    rclpy.init(args=args)
    node = Ps3TeleopNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
