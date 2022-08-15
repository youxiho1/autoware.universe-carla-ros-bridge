# How to run Carla-ros-bridge with ROS Galactic

Carla ros bridge can run very smoothly with ROS foxy. However, once you upgrade your ROS2 version to Galactic, you might encounter lots of problems.
Here is a tutorial about how to fix bugs when you can't run carla-ros-bridge with ROS Galactic
And I hope Carla-Ros-Bridge can fix these issues....

Environment:
Ubuntu 20.04 + Carla 0.9.13 + ROS2 Galactic

Error 1: 
When I execute "colcon build", it happens to me that pcl_recorder is failed to build 
(Although it can build successfully when I use ros2 foxy, I encountered into this problem too when I build with ros2 galactic)

As mentioned in (https://github.com/carla-simulator/ros-bridge/issues/621), it seems that it's caused by a change brought into this repository recently.
Once you are in this situation, you can go to /carla-ros-bridge/src/ros-bridge/pcl_recorder/src/PclRecorderROS2.cpp Line 30 and revise the code like this:

//problem code:
sub_opt.callback_group = this->create_callback_group(rclcpp::callback_group::CallbackGroupType::MutuallyExclusive);

//correct code:
sub_opt.callback_group = this->create_callback_group(rclcpp::CallbackGroupType::MutuallyExclusive);


Error 2: 
When I ran carla-ros-bridge, it reports a "ModuleNotFoundError: No module named 'derived_object_msgs'"
As issue (https://github.com/carla-simulator/ros-bridge/issues/627) discussed, there isn't a astuff_sensor_msgs package for ROS Galactic
But we can add the msgs by ourselves LOL

We just need to go to https://github.com/astuff/astuff_sensor_msgs, and clone the repository, then move the derived_object_msgs into the directory /carla-ros-bridge/src/

Error 3:
After I fixed Error2, another error occured:
rclpy.exceptions.ParameterAlreadyDeclaredException: ('Parameter(s) already declared', ['use_sim_time'])

There is also an issue about this problem: https://github.com/carla-simulator/ros-bridge/issues/619

You can edit the file /opt/ros/galactic/lib/python3.8/site-packages/rclpy/node.py
All you need to do is revising the part of the node.py that changed in node.py back to the old version~~

https://github.com/ros2/rclpy/commit/8daacddc4fd72373fe9429de5ba3b2d2a5868078


Error 4: 
> [carla_ackermann_control_node-1]     from simple_pid import PID  # pylint: disable=import-error,wrong-import-order
>
> [carla_ackermann_control_node-1] ModuleNotFoundError: No module named 'simple_pid'


This error is quite easy to handle, we just need to 

```bash
pip3 install simple-pid
```



Besides, when I try to build the ros-bridge, it also didn't work due to dependencies missing. In summary, I installed these dependencies:
```bash```
sudo apt-get install openni2-utils
sudo apt-get install libpcap-dev
sudo apt install pcl-tools
sudo apt install python3-colcon-common-extensions
sudo apt install python3-numpy
pip3 install opencv-python
