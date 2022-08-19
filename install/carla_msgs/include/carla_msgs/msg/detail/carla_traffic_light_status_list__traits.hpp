// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carla_msgs:msg/CarlaTrafficLightStatusList.idl
// generated code does not contain a copyright notice

#ifndef CARLA_MSGS__MSG__DETAIL__CARLA_TRAFFIC_LIGHT_STATUS_LIST__TRAITS_HPP_
#define CARLA_MSGS__MSG__DETAIL__CARLA_TRAFFIC_LIGHT_STATUS_LIST__TRAITS_HPP_

#include "carla_msgs/msg/detail/carla_traffic_light_status_list__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'traffic_lights'
#include "carla_msgs/msg/detail/carla_traffic_light_status__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const carla_msgs::msg::CarlaTrafficLightStatusList & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: traffic_lights
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.traffic_lights.size() == 0) {
      out << "traffic_lights: []\n";
    } else {
      out << "traffic_lights:\n";
      for (auto item : msg.traffic_lights) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const carla_msgs::msg::CarlaTrafficLightStatusList & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<carla_msgs::msg::CarlaTrafficLightStatusList>()
{
  return "carla_msgs::msg::CarlaTrafficLightStatusList";
}

template<>
inline const char * name<carla_msgs::msg::CarlaTrafficLightStatusList>()
{
  return "carla_msgs/msg/CarlaTrafficLightStatusList";
}

template<>
struct has_fixed_size<carla_msgs::msg::CarlaTrafficLightStatusList>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<carla_msgs::msg::CarlaTrafficLightStatusList>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<carla_msgs::msg::CarlaTrafficLightStatusList>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARLA_MSGS__MSG__DETAIL__CARLA_TRAFFIC_LIGHT_STATUS_LIST__TRAITS_HPP_
