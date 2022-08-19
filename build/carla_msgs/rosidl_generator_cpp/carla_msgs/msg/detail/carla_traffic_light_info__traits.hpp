// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carla_msgs:msg/CarlaTrafficLightInfo.idl
// generated code does not contain a copyright notice

#ifndef CARLA_MSGS__MSG__DETAIL__CARLA_TRAFFIC_LIGHT_INFO__TRAITS_HPP_
#define CARLA_MSGS__MSG__DETAIL__CARLA_TRAFFIC_LIGHT_INFO__TRAITS_HPP_

#include "carla_msgs/msg/detail/carla_traffic_light_info__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'transform'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'trigger_volume'
#include "carla_msgs/msg/detail/carla_bounding_box__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const carla_msgs::msg::CarlaTrafficLightInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: transform
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "transform:\n";
    to_yaml(msg.transform, out, indentation + 2);
  }

  // member: trigger_volume
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trigger_volume:\n";
    to_yaml(msg.trigger_volume, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const carla_msgs::msg::CarlaTrafficLightInfo & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<carla_msgs::msg::CarlaTrafficLightInfo>()
{
  return "carla_msgs::msg::CarlaTrafficLightInfo";
}

template<>
inline const char * name<carla_msgs::msg::CarlaTrafficLightInfo>()
{
  return "carla_msgs/msg/CarlaTrafficLightInfo";
}

template<>
struct has_fixed_size<carla_msgs::msg::CarlaTrafficLightInfo>
  : std::integral_constant<bool, has_fixed_size<carla_msgs::msg::CarlaBoundingBox>::value && has_fixed_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct has_bounded_size<carla_msgs::msg::CarlaTrafficLightInfo>
  : std::integral_constant<bool, has_bounded_size<carla_msgs::msg::CarlaBoundingBox>::value && has_bounded_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct is_message<carla_msgs::msg::CarlaTrafficLightInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARLA_MSGS__MSG__DETAIL__CARLA_TRAFFIC_LIGHT_INFO__TRAITS_HPP_
