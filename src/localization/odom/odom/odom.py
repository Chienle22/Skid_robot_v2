#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from std_msgs.msg import Float64MultiArray
from nav_msgs.msg import Odometry
from geometry_msgs.msg import Quaternion, TransformStamped
from tf_transformations import quaternion_from_euler
from tf2_ros import TransformBroadcaster
import math

class EncoderIMUToOdomNode(Node):
    def __init__(self):
        super().__init__('odom2')

        # Parameters
        self.declare_parameter('wheel_radius', 0.098)
        self.declare_parameter('wheel_base', 0.48)
        self.declare_parameter('left_wheel_topic', 'wheel_data_left')
        self.declare_parameter('right_wheel_topic', 'wheel_data_right')
        self.declare_parameter('odom_topic', 'odom')

        self.wheel_radius = self.get_parameter('wheel_radius').value
        self.wheel_base = self.get_parameter('wheel_base').value
        self.left_wheel_topic = self.get_parameter('left_wheel_topic').value
        self.right_wheel_topic = self.get_parameter('right_wheel_topic').value
        self.odom_topic = self.get_parameter('odom_topic').value

        # State
        self.x = 0.0
        self.y = 0.0
        self.theta = 0.0

        self.last_time = None          # <<< FIX
        self.left_rpm = None           # <<< FIX
        self.right_rpm = None          # <<< FIX	

        # Timer
        self.timer = self.create_timer(0.005, self.update_odom)

        # Subscribera
        self.left_sub = self.create_subscription(Float64MultiArray, self.left_wheel_topic, self.left_callback, 10)
        self.right_sub = self.create_subscription(Float64MultiArray, self.right_wheel_topic, self.right_callback, 10)
        
        # Publisher
        self.odom_pub = self.create_publisher(Odometry, self.odom_topic, 10)

        # TF
        #self.tf_broadcaster = TransformBroadcaster(self)
        self.get_logger().info("EncoderIMUToOdomNode started")
        
    def left_callback(self, msg: Float64MultiArray):
        if len(msg.data) != 2:
            return

        if any(math.isnan(v) or math.isinf(v) for v in msg.data):
            self.get_logger().warn("NaN/Inf in left wheel data")
            return

        self.left_rpm = 0.5 * (msg.data[0] + msg.data[1])


    def right_callback(self, msg: Float64MultiArray):
        if len(msg.data) != 2:
            return

        if any(math.isnan(v) or math.isinf(v) for v in msg.data):
            self.get_logger().warn("NaN/Inf in right wheel data")
            return

        self.right_rpm = 0.5 * (msg.data[0] + msg.data[1])


    def update_odom(self):
        if self.left_rpm is None or self.right_rpm is None:
            return

        current_time = self.get_clock().now()

        if self.last_time is None:     # <<< FIX
            self.last_time = current_time
            return

        dt = (current_time - self.last_time).nanoseconds * 1e-9
        self.last_time = current_time
            
        # RPM → m/s
        left_velocity = (self.left_rpm * 2 * math.pi * self.wheel_radius) / 60.0
        right_velocity = (self.right_rpm * 2 * math.pi * self.wheel_radius) / 60.0

        linear_velocity = (left_velocity + right_velocity) / 2.0
        angular_velocity = (right_velocity - left_velocity) / self.wheel_base
        
        if any(math.isnan(v) or math.isinf(v)
               for v in [left_velocity, right_velocity, linear_velocity, angular_velocity]):
            return
        
        # Integrate
        self.x += linear_velocity * math.cos(self.theta) * dt
        self.y += linear_velocity * math.sin(self.theta) * dt
        self.theta += angular_velocity * dt
        self.theta = math.atan2(math.sin(self.theta), math.cos(self.theta))
	
        q = quaternion_from_euler(0, 0, self.theta)
    
        # Odometry
        odom = Odometry()
        odom.header.stamp = current_time.to_msg()
        odom.header.frame_id = 'odom'
        odom.child_frame_id = 'base_link'

        odom.pose.pose.position.x = self.x
        odom.pose.pose.position.y = self.y
        odom.pose.pose.orientation = Quaternion(
            x=q[0], y=q[1], z=q[2], w=q[3]
        )

        odom.twist.twist.linear.x = linear_velocity
        odom.twist.twist.angular.z = angular_velocity
        
        odom.pose.covariance = [
        0.01,    0.0,    0.0,   0.0,    0.0,    0.0,
        0.0,     0.01,   0.0,   0.0,    0.0,    0.0,
        0.0,     0.0,    1e6,   0.0,    0.0,    0.0,
        0.0,     0.0,    0.0,   1e6,    0.0,    0.0,
        0.0,     0.0,    0.0,   0.0,    1e6,    0.0,
        0.0,     0.0,    0.0,   0.0,    0.0,    0.0086
        ]
        
        odom.twist.covariance = [
        0.001,    0.0,    0.0,   0.0,    0.0,    0.0,
        0.0,     1e6,    0.0,   0.0,    0.0,    0.0,
        0.0,     0.0,    1e6,   0.0,    0.0,    0.0,
        0.0,     0.0,    0.0,   1e6,    0.0,    0.0,
        0.0,     0.0,    0.0,   0.0,    1e6,    0.0,
        0.0,     0.0,    0.0,   0.0,    0.0,    0.01
        ]
	
        self.odom_pub.publish(odom)

        # TF
        #tf = TransformStamped()
        #tf.header.stamp = odom.header.stamp 
        #tf.header.frame_id = 'odom'
        #tf.child_frame_id = 'base_footprint'
        #tf.transform.translation.x = self.x
        #tf.transform.translation.y = self.y
        #tf.transform.rotation = odom.pose.pose.orientation

        #self.tf_broadcaster.sendTransform(tf)


def main(args=None):
    rclpy.init(args=args)
    node = EncoderIMUToOdomNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
