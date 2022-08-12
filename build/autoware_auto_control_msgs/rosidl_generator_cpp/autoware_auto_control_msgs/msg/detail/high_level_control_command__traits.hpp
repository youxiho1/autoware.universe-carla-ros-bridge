// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_auto_control_msgs:msg/HighLevelControlCommand.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_CONTROL_MSGS__MSG__DETAIL__HIGH_LEVEL_CONTROL_COMMAND__TRAITS_HPP_
#define AUTOWARE_AUTO_CONTROL_MSGS__MSG__DETAIL__HIGH_LEVEL_CONTROL_COMMAND__TRAITS_HPP_

#include "autoware_auto_control_msgs/msg/detail/high_level_control_command__struct.hpp"
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
  const autoware_auto_control_msgs::msg::HighLevelControlCommand & msg,
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

  // member: velocity_mps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity_mps: ";
    value_to_yaml(msg.velocity_mps, out);
    out << "\n";
  }

  // member: curvature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "curvature: ";
    value_to_yaml(msg.curvature, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const autoware_auto_control_msgs::msg::HighLevelControlCommand & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<autoware_auto_control_msgs::msg::HighLevelControlCommand>()
{
  return "autoware_auto_control_msgs::msg::HighLevelControlCommand";
}

template<>
inline const char * name<autoware_auto_control_msgs::msg::HighLevelControlCommand>()
{
  return "autoware_auto_control_msgs/msg/HighLevelControlCommand";
}

template<>
struct has_fixed_size<autoware_auto_control_msgs::msg::HighLevelControlCommand>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<autoware_auto_control_msgs::msg::HighLevelControlCommand>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<autoware_auto_control_msgs::msg::HighLevelControlCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_AUTO_CONTROL_MSGS__MSG__DETAIL__HIGH_LEVEL_CONTROL_COMMAND__TRAITS_HPP_
