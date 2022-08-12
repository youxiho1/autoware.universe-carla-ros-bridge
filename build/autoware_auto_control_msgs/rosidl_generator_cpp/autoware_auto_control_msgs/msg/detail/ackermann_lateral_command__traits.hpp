// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_auto_control_msgs:msg/AckermannLateralCommand.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_CONTROL_MSGS__MSG__DETAIL__ACKERMANN_LATERAL_COMMAND__TRAITS_HPP_
#define AUTOWARE_AUTO_CONTROL_MSGS__MSG__DETAIL__ACKERMANN_LATERAL_COMMAND__TRAITS_HPP_

#include "autoware_auto_control_msgs/msg/detail/ackermann_lateral_command__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const autoware_auto_control_msgs::msg::AckermannLateralCommand & msg,
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const autoware_auto_control_msgs::msg::AckermannLateralCommand & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<autoware_auto_control_msgs::msg::AckermannLateralCommand>()
{
  return "autoware_auto_control_msgs::msg::AckermannLateralCommand";
}

template<>
inline const char * name<autoware_auto_control_msgs::msg::AckermannLateralCommand>()
{
  return "autoware_auto_control_msgs/msg/AckermannLateralCommand";
}

template<>
struct has_fixed_size<autoware_auto_control_msgs::msg::AckermannLateralCommand>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<autoware_auto_control_msgs::msg::AckermannLateralCommand>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<autoware_auto_control_msgs::msg::AckermannLateralCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_AUTO_CONTROL_MSGS__MSG__DETAIL__ACKERMANN_LATERAL_COMMAND__TRAITS_HPP_
