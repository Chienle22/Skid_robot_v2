Tutorial run skid_robot

I. Chay thuc te
Buoc 1: Terminal Skid_robot_v2
1.  ros2 run bringup bringup_launch.py    : Khoi dong he thong
Buoc 2: Terminal nav2_ws
1. ros2 launch nav2_bringup bringup_launch.py map:=/home/chienle/Desktop/skid_robot_v2/src/mapping/map/map1807/map1807.yaml    : Khoi dong nav2
2. ros2 launch nav2_bringup rviz_launch.py         : Khoi chay rviz

II. Chay simulation
1. ros2 launch simulation gz_skid_launch.py         : Goi robot len gazebo
2. ros2 launch nav2_bringup bringup_launch.py use_sim_time:=true map:=/home/chienle/Desktop/nav2_ws/src/turtlebot3/turtlebot3_navigation2/map/map.yaml
3. ros2 launch nav2_bringup rviz_launch.py
