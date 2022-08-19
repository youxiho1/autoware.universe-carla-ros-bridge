// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carla_msgs:msg/CarlaWorldInfo.idl
// generated code does not contain a copyright notice

#ifndef CARLA_MSGS__MSG__DETAIL__CARLA_WORLD_INFO__TRAITS_HPP_
#define CARLA_MSGS__MSG__DETAIL__CARLA_WORLD_INFO__TRAITS_HPP_

#include "carla_msgs/msg/detail/carla_world_info__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const carla_msgs::msg::CarlaWorldInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: map_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "map_name: ";
    value_to_yaml(msg.map_name, out);
    out << "\n";
  }

  // member: opendrive
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "opendrive: ";
    value_to_yaml(msg.opendrive, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const carla_msgs::msg::CarlaWorldInfo & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<carla_msgs::msg::CarlaWorldInfo>()
{
  return "carla_msgs::msg::CarlaWorldInfo";
}

template<>
inline const char * name<carla_msgs::msg::CarlaWorldInfo>()
{
  return "carla_msgs/msg/CarlaWorldInfo";
}

template<>
struct has_fixed_size<carla_msgs::msg::CarlaWorldInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<carla_msgs::msg::CarlaWorldInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<carla_msgs::msg::CarlaWorldInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARLA_MSGS__MSG__DETAIL__CARLA_WORLD_INFO__TRAITS_HPP_
