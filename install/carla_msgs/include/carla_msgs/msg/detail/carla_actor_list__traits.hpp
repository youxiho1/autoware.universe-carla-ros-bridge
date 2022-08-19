// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carla_msgs:msg/CarlaActorList.idl
// generated code does not contain a copyright notice

#ifndef CARLA_MSGS__MSG__DETAIL__CARLA_ACTOR_LIST__TRAITS_HPP_
#define CARLA_MSGS__MSG__DETAIL__CARLA_ACTOR_LIST__TRAITS_HPP_

#include "carla_msgs/msg/detail/carla_actor_list__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'actors'
#include "carla_msgs/msg/detail/carla_actor_info__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const carla_msgs::msg::CarlaActorList & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: actors
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.actors.size() == 0) {
      out << "actors: []\n";
    } else {
      out << "actors:\n";
      for (auto item : msg.actors) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const carla_msgs::msg::CarlaActorList & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<carla_msgs::msg::CarlaActorList>()
{
  return "carla_msgs::msg::CarlaActorList";
}

template<>
inline const char * name<carla_msgs::msg::CarlaActorList>()
{
  return "carla_msgs/msg/CarlaActorList";
}

template<>
struct has_fixed_size<carla_msgs::msg::CarlaActorList>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<carla_msgs::msg::CarlaActorList>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<carla_msgs::msg::CarlaActorList>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARLA_MSGS__MSG__DETAIL__CARLA_ACTOR_LIST__TRAITS_HPP_
