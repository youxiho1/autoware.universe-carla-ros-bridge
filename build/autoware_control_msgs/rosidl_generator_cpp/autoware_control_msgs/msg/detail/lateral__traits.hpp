// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_control_msgs:msg/Lateral.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_CONTROL_MSGS__MSG__DETAIL__LATERAL__TRAITS_HPP_
#define AUTOWARE_CONTROL_MSGS__MSG__DETAIL__LATERAL__TRAITS_HPP_

#include "autoware_control_msgs/msg/detail/lateral__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'stamp'
// Member 'control_time'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const autoware_control_msgs::msg::Lateral & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_yaml(msg.stamp, out, indentation + 2);
  }

  // member: control_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "control_time:\n";
    to_yaml(msg.control_time, out, indentation + 2);
  }

  // member: steering_tire_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steering_tire_angle: ";
    value_to_yaml(msg.steering_tire_angle, out);
    out << "\n";
  }

  // member: steering_tire_rotation_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steering_tire_rotation_rate: ";
    value_to_yaml(msg.steering_tire_rotation_rate, out);
    out << "\n";
  }

  // member: is_defined_steering_tire_rotation_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_defined_steering_tire_rotation_rate: ";
    value_to_yaml(msg.is_defined_steering_tire_rotation_rate, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const autoware_control_msgs::msg::Lateral & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<autoware_control_msgs::msg::Lateral>()
{
  return "autoware_control_msgs::msg::Lateral";
}

template<>
inline const char * name<autoware_control_msgs::msg::Lateral>()
{
  return "autoware_control_msgs/msg/Lateral";
}

template<>
struct has_fixed_size<autoware_control_msgs::msg::Lateral>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<autoware_control_msgs::msg::Lateral>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<autoware_control_msgs::msg::Lateral>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_CONTROL_MSGS__MSG__DETAIL__LATERAL__TRAITS_HPP_
