#!/usr/bin/env python
#
# Copyright (c) 2020 Intel Corporation
#
# This work is licensed under the terms of the MIT license.
# For a copy, see <https://opensource.org/licenses/MIT>.

# Modified by youxiho1 2022.8.15
"""
receive :CarlaEgoVehicleStatus and publishes autoware_msgs::VehicleStatus
"""
import math
import rospy
from carla_msgs.msg import CarlaEgoVehicleInfo
from carla_msgs.msg import CarlaEgoVehicleStatus
from autoware_auto_vehicle_msgs.msg import SteeringStatus

pub = rospy.Publisher('/vehicle/status/steering_status', SteeringStatus, queue_size=1)
vehicle_info = None


def vehicle_info_callback(data):
    """
    callback for vehicle info
    """
    global vehicle_info
    vehicle_info = data


def vehicle_status_callback(data):
    """
    callback for vehicle status
    """
    if vehicle_info is None:
        return
    status = VehicleStatus()
    status.header = data.header
    status.speed = data.velocity

    # calculate max steering angle
    max_steering_angle = math.radians(70)
    # get max steering angle (use smallest non-zero value of all wheels)
    for wheel in vehicle_info.wheels:
        if wheel.max_steer_angle:
            if wheel.max_steer_angle and wheel.max_steer_angle < max_steering_angle:
                max_steering_angle = wheel.max_steer_angle

    status.steering_tire_angle = data.control.steer * math.degrees(max_steering_angle)

    pub.publish(status)


def convert_status_carla_to_autoware():
    """
    main loop
    """
    rospy.init_node('convert_status_carla_to_autoware', anonymous=True)
    role_name = rospy.get_param('/role_name', 'ego_vehicle')
    rospy.Subscriber('/carla/{}/vehicle_status'.format(role_name), CarlaEgoVehicleStatus,
                     vehicle_status_callback)
    rospy.Subscriber('/carla/{}/vehicle_info'.format(role_name), CarlaEgoVehicleInfo,
                     vehicle_info_callback)
    rospy.spin()


if __name__ == '__main__':
    convert_status_carla_to_autoware()
