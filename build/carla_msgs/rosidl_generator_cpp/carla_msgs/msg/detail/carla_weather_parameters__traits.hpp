// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carla_msgs:msg/CarlaWeatherParameters.idl
// generated code does not contain a copyright notice

#ifndef CARLA_MSGS__MSG__DETAIL__CARLA_WEATHER_PARAMETERS__TRAITS_HPP_
#define CARLA_MSGS__MSG__DETAIL__CARLA_WEATHER_PARAMETERS__TRAITS_HPP_

#include "carla_msgs/msg/detail/carla_weather_parameters__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const carla_msgs::msg::CarlaWeatherParameters & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: cloudiness
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cloudiness: ";
    value_to_yaml(msg.cloudiness, out);
    out << "\n";
  }

  // member: precipitation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "precipitation: ";
    value_to_yaml(msg.precipitation, out);
    out << "\n";
  }

  // member: precipitation_deposits
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "precipitation_deposits: ";
    value_to_yaml(msg.precipitation_deposits, out);
    out << "\n";
  }

  // member: wind_intensity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wind_intensity: ";
    value_to_yaml(msg.wind_intensity, out);
    out << "\n";
  }

  // member: fog_density
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fog_density: ";
    value_to_yaml(msg.fog_density, out);
    out << "\n";
  }

  // member: fog_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fog_distance: ";
    value_to_yaml(msg.fog_distance, out);
    out << "\n";
  }

  // member: wetness
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wetness: ";
    value_to_yaml(msg.wetness, out);
    out << "\n";
  }

  // member: sun_azimuth_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sun_azimuth_angle: ";
    value_to_yaml(msg.sun_azimuth_angle, out);
    out << "\n";
  }

  // member: sun_altitude_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sun_altitude_angle: ";
    value_to_yaml(msg.sun_altitude_angle, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const carla_msgs::msg::CarlaWeatherParameters & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<carla_msgs::msg::CarlaWeatherParameters>()
{
  return "carla_msgs::msg::CarlaWeatherParameters";
}

template<>
inline const char * name<carla_msgs::msg::CarlaWeatherParameters>()
{
  return "carla_msgs/msg/CarlaWeatherParameters";
}

template<>
struct has_fixed_size<carla_msgs::msg::CarlaWeatherParameters>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<carla_msgs::msg::CarlaWeatherParameters>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<carla_msgs::msg::CarlaWeatherParameters>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARLA_MSGS__MSG__DETAIL__CARLA_WEATHER_PARAMETERS__TRAITS_HPP_
