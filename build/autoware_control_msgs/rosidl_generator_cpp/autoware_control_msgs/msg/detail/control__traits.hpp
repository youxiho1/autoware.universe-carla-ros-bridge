// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_control_msgs:msg/Control.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_CONTROL_MSGS__MSG__DETAIL__CONTROL__TRAITS_HPP_
#define AUTOWARE_CONTROL_MSGS__MSG__DETAIL__CONTROL__TRAITS_HPP_

#include "autoware_control_msgs/msg/detail/control__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'stamp'
// Member 'control_time'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'lateral'
#include "autoware_control_msgs/msg/detail/lateral__traits.hpp"
// Member 'longitudinal'
#include "autoware_control_msgs/msg/detail/longitudinal__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<autoware_control_msgs::msg::Control>()
{
  return "autoware_control_msgs::msg::Control";
}

template<>
inline const char * name<autoware_control_msgs::msg::Control>()
{
  return "autoware_control_msgs/msg/Control";
}

template<>
struct has_fixed_size<autoware_control_msgs::msg::Control>
  : std::integral_constant<bool, has_fixed_size<autoware_control_msgs::msg::Lateral>::value && has_fixed_size<autoware_control_msgs::msg::Longitudinal>::value && has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<autoware_control_msgs::msg::Control>
  : std::integral_constant<bool, has_bounded_size<autoware_control_msgs::msg::Lateral>::value && has_bounded_size<autoware_control_msgs::msg::Longitudinal>::value && has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<autoware_control_msgs::msg::Control>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_CONTROL_MSGS__MSG__DETAIL__CONTROL__TRAITS_HPP_
