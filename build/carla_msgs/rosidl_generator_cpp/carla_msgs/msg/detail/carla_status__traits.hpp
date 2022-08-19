// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carla_msgs:msg/CarlaStatus.idl
// generated code does not contain a copyright notice

#ifndef CARLA_MSGS__MSG__DETAIL__CARLA_STATUS__TRAITS_HPP_
#define CARLA_MSGS__MSG__DETAIL__CARLA_STATUS__TRAITS_HPP_

#include "carla_msgs/msg/detail/carla_status__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const carla_msgs::msg::CarlaStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: frame
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frame: ";
    value_to_yaml(msg.frame, out);
    out << "\n";
  }

  // member: fixed_delta_seconds
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fixed_delta_seconds: ";
    value_to_yaml(msg.fixed_delta_seconds, out);
    out << "\n";
  }

  // member: synchronous_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "synchronous_mode: ";
    value_to_yaml(msg.synchronous_mode, out);
    out << "\n";
  }

  // member: synchronous_mode_running
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "synchronous_mode_running: ";
    value_to_yaml(msg.synchronous_mode_running, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const carla_msgs::msg::CarlaStatus & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<carla_msgs::msg::CarlaStatus>()
{
  return "carla_msgs::msg::CarlaStatus";
}

template<>
inline const char * name<carla_msgs::msg::CarlaStatus>()
{
  return "carla_msgs/msg/CarlaStatus";
}

template<>
struct has_fixed_size<carla_msgs::msg::CarlaStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<carla_msgs::msg::CarlaStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<carla_msgs::msg::CarlaStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARLA_MSGS__MSG__DETAIL__CARLA_STATUS__TRAITS_HPP_
