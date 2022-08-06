// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_control_msgs:msg/ControlHorizon.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_CONTROL_MSGS__MSG__DETAIL__CONTROL_HORIZON__TRAITS_HPP_
#define AUTOWARE_CONTROL_MSGS__MSG__DETAIL__CONTROL_HORIZON__TRAITS_HPP_

#include "autoware_control_msgs/msg/detail/control_horizon__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'stamp'
// Member 'control_time'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autoware_control_msgs::msg::ControlHorizon>()
{
  return "autoware_control_msgs::msg::ControlHorizon";
}

template<>
inline const char * name<autoware_control_msgs::msg::ControlHorizon>()
{
  return "autoware_control_msgs/msg/ControlHorizon";
}

template<>
struct has_fixed_size<autoware_control_msgs::msg::ControlHorizon>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autoware_control_msgs::msg::ControlHorizon>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<autoware_control_msgs::msg::ControlHorizon>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_CONTROL_MSGS__MSG__DETAIL__CONTROL_HORIZON__TRAITS_HPP_
