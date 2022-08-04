// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_control_msgs:msg/ControlHorizon.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_CONTROL_MSGS__MSG__DETAIL__CONTROL_HORIZON__TRAITS_HPP_
#define AUTOWARE_CONTROL_MSGS__MSG__DETAIL__CONTROL_HORIZON__TRAITS_HPP_

#include "autoware_control_msgs/msg/detail/control_horizon__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'stamp'
// Member 'control_time'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'controls'
#include "autoware_control_msgs/msg/detail/control__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const autoware_control_msgs::msg::ControlHorizon & msg,
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

  // member: time_step_ms
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_step_ms: ";
    value_to_yaml(msg.time_step_ms, out);
    out << "\n";
  }

  // member: controls
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.controls.size() == 0) {
      out << "controls: []\n";
    } else {
      out << "controls:\n";
      for (auto item : msg.controls) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const autoware_control_msgs::msg::ControlHorizon & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

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
