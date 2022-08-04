// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_control_msgs:msg/ControlHorizon.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_CONTROL_MSGS__MSG__DETAIL__CONTROL_HORIZON__BUILDER_HPP_
#define AUTOWARE_CONTROL_MSGS__MSG__DETAIL__CONTROL_HORIZON__BUILDER_HPP_

#include "autoware_control_msgs/msg/detail/control_horizon__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace autoware_control_msgs
{

namespace msg
{

namespace builder
{

class Init_ControlHorizon_controls
{
public:
  explicit Init_ControlHorizon_controls(::autoware_control_msgs::msg::ControlHorizon & msg)
  : msg_(msg)
  {}
  ::autoware_control_msgs::msg::ControlHorizon controls(::autoware_control_msgs::msg::ControlHorizon::_controls_type arg)
  {
    msg_.controls = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_control_msgs::msg::ControlHorizon msg_;
};

class Init_ControlHorizon_time_step_ms
{
public:
  explicit Init_ControlHorizon_time_step_ms(::autoware_control_msgs::msg::ControlHorizon & msg)
  : msg_(msg)
  {}
  Init_ControlHorizon_controls time_step_ms(::autoware_control_msgs::msg::ControlHorizon::_time_step_ms_type arg)
  {
    msg_.time_step_ms = std::move(arg);
    return Init_ControlHorizon_controls(msg_);
  }

private:
  ::autoware_control_msgs::msg::ControlHorizon msg_;
};

class Init_ControlHorizon_control_time
{
public:
  explicit Init_ControlHorizon_control_time(::autoware_control_msgs::msg::ControlHorizon & msg)
  : msg_(msg)
  {}
  Init_ControlHorizon_time_step_ms control_time(::autoware_control_msgs::msg::ControlHorizon::_control_time_type arg)
  {
    msg_.control_time = std::move(arg);
    return Init_ControlHorizon_time_step_ms(msg_);
  }

private:
  ::autoware_control_msgs::msg::ControlHorizon msg_;
};

class Init_ControlHorizon_stamp
{
public:
  Init_ControlHorizon_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ControlHorizon_control_time stamp(::autoware_control_msgs::msg::ControlHorizon::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_ControlHorizon_control_time(msg_);
  }

private:
  ::autoware_control_msgs::msg::ControlHorizon msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_control_msgs::msg::ControlHorizon>()
{
  return autoware_control_msgs::msg::builder::Init_ControlHorizon_stamp();
}

}  // namespace autoware_control_msgs

#endif  // AUTOWARE_CONTROL_MSGS__MSG__DETAIL__CONTROL_HORIZON__BUILDER_HPP_
