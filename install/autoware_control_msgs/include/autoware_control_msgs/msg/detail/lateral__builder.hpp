// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_control_msgs:msg/Lateral.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_CONTROL_MSGS__MSG__DETAIL__LATERAL__BUILDER_HPP_
#define AUTOWARE_CONTROL_MSGS__MSG__DETAIL__LATERAL__BUILDER_HPP_

#include "autoware_control_msgs/msg/detail/lateral__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace autoware_control_msgs
{

namespace msg
{

namespace builder
{

class Init_Lateral_is_defined_steering_tire_rotation_rate
{
public:
  explicit Init_Lateral_is_defined_steering_tire_rotation_rate(::autoware_control_msgs::msg::Lateral & msg)
  : msg_(msg)
  {}
  ::autoware_control_msgs::msg::Lateral is_defined_steering_tire_rotation_rate(::autoware_control_msgs::msg::Lateral::_is_defined_steering_tire_rotation_rate_type arg)
  {
    msg_.is_defined_steering_tire_rotation_rate = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_control_msgs::msg::Lateral msg_;
};

class Init_Lateral_steering_tire_rotation_rate
{
public:
  explicit Init_Lateral_steering_tire_rotation_rate(::autoware_control_msgs::msg::Lateral & msg)
  : msg_(msg)
  {}
  Init_Lateral_is_defined_steering_tire_rotation_rate steering_tire_rotation_rate(::autoware_control_msgs::msg::Lateral::_steering_tire_rotation_rate_type arg)
  {
    msg_.steering_tire_rotation_rate = std::move(arg);
    return Init_Lateral_is_defined_steering_tire_rotation_rate(msg_);
  }

private:
  ::autoware_control_msgs::msg::Lateral msg_;
};

class Init_Lateral_steering_tire_angle
{
public:
  explicit Init_Lateral_steering_tire_angle(::autoware_control_msgs::msg::Lateral & msg)
  : msg_(msg)
  {}
  Init_Lateral_steering_tire_rotation_rate steering_tire_angle(::autoware_control_msgs::msg::Lateral::_steering_tire_angle_type arg)
  {
    msg_.steering_tire_angle = std::move(arg);
    return Init_Lateral_steering_tire_rotation_rate(msg_);
  }

private:
  ::autoware_control_msgs::msg::Lateral msg_;
};

class Init_Lateral_control_time
{
public:
  explicit Init_Lateral_control_time(::autoware_control_msgs::msg::Lateral & msg)
  : msg_(msg)
  {}
  Init_Lateral_steering_tire_angle control_time(::autoware_control_msgs::msg::Lateral::_control_time_type arg)
  {
    msg_.control_time = std::move(arg);
    return Init_Lateral_steering_tire_angle(msg_);
  }

private:
  ::autoware_control_msgs::msg::Lateral msg_;
};

class Init_Lateral_stamp
{
public:
  Init_Lateral_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Lateral_control_time stamp(::autoware_control_msgs::msg::Lateral::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_Lateral_control_time(msg_);
  }

private:
  ::autoware_control_msgs::msg::Lateral msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_control_msgs::msg::Lateral>()
{
  return autoware_control_msgs::msg::builder::Init_Lateral_stamp();
}

}  // namespace autoware_control_msgs

#endif  // AUTOWARE_CONTROL_MSGS__MSG__DETAIL__LATERAL__BUILDER_HPP_
