// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_control_msgs:msg/Longitudinal.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_CONTROL_MSGS__MSG__DETAIL__LONGITUDINAL__TRAITS_HPP_
#define AUTOWARE_CONTROL_MSGS__MSG__DETAIL__LONGITUDINAL__TRAITS_HPP_

#include "autoware_control_msgs/msg/detail/longitudinal__struct.hpp"
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
  const autoware_control_msgs::msg::Longitudinal & msg,
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

  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity: ";
    value_to_yaml(msg.velocity, out);
    out << "\n";
  }

  // member: acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acceleration: ";
    value_to_yaml(msg.acceleration, out);
    out << "\n";
  }

  // member: jerk
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "jerk: ";
    value_to_yaml(msg.jerk, out);
    out << "\n";
  }

  // member: is_defined_acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_defined_acceleration: ";
    value_to_yaml(msg.is_defined_acceleration, out);
    out << "\n";
  }

  // member: is_defined_jerk
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_defined_jerk: ";
    value_to_yaml(msg.is_defined_jerk, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const autoware_control_msgs::msg::Longitudinal & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<autoware_control_msgs::msg::Longitudinal>()
{
  return "autoware_control_msgs::msg::Longitudinal";
}

template<>
inline const char * name<autoware_control_msgs::msg::Longitudinal>()
{
  return "autoware_control_msgs/msg/Longitudinal";
}

template<>
struct has_fixed_size<autoware_control_msgs::msg::Longitudinal>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<autoware_control_msgs::msg::Longitudinal>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<autoware_control_msgs::msg::Longitudinal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_CONTROL_MSGS__MSG__DETAIL__LONGITUDINAL__TRAITS_HPP_
