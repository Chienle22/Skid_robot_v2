// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from microstrain_inertial_msgs:msg/MipSensorTemperatureStatistics.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_SENSOR_TEMPERATURE_STATISTICS__TRAITS_HPP_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_SENSOR_TEMPERATURE_STATISTICS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "microstrain_inertial_msgs/msg/detail/mip_sensor_temperature_statistics__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "microstrain_inertial_msgs/msg/detail/mip_header__traits.hpp"

namespace microstrain_inertial_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MipSensorTemperatureStatistics & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: min_temp
  {
    out << "min_temp: ";
    rosidl_generator_traits::value_to_yaml(msg.min_temp, out);
    out << ", ";
  }

  // member: max_temp
  {
    out << "max_temp: ";
    rosidl_generator_traits::value_to_yaml(msg.max_temp, out);
    out << ", ";
  }

  // member: mean_temp
  {
    out << "mean_temp: ";
    rosidl_generator_traits::value_to_yaml(msg.mean_temp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MipSensorTemperatureStatistics & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: min_temp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min_temp: ";
    rosidl_generator_traits::value_to_yaml(msg.min_temp, out);
    out << "\n";
  }

  // member: max_temp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_temp: ";
    rosidl_generator_traits::value_to_yaml(msg.max_temp, out);
    out << "\n";
  }

  // member: mean_temp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mean_temp: ";
    rosidl_generator_traits::value_to_yaml(msg.mean_temp, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MipSensorTemperatureStatistics & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace microstrain_inertial_msgs

namespace rosidl_generator_traits
{

[[deprecated("use microstrain_inertial_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const microstrain_inertial_msgs::msg::MipSensorTemperatureStatistics & msg,
  std::ostream & out, size_t indentation = 0)
{
  microstrain_inertial_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use microstrain_inertial_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const microstrain_inertial_msgs::msg::MipSensorTemperatureStatistics & msg)
{
  return microstrain_inertial_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<microstrain_inertial_msgs::msg::MipSensorTemperatureStatistics>()
{
  return "microstrain_inertial_msgs::msg::MipSensorTemperatureStatistics";
}

template<>
inline const char * name<microstrain_inertial_msgs::msg::MipSensorTemperatureStatistics>()
{
  return "microstrain_inertial_msgs/msg/MipSensorTemperatureStatistics";
}

template<>
struct has_fixed_size<microstrain_inertial_msgs::msg::MipSensorTemperatureStatistics>
  : std::integral_constant<bool, has_fixed_size<microstrain_inertial_msgs::msg::MipHeader>::value> {};

template<>
struct has_bounded_size<microstrain_inertial_msgs::msg::MipSensorTemperatureStatistics>
  : std::integral_constant<bool, has_bounded_size<microstrain_inertial_msgs::msg::MipHeader>::value> {};

template<>
struct is_message<microstrain_inertial_msgs::msg::MipSensorTemperatureStatistics>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_SENSOR_TEMPERATURE_STATISTICS__TRAITS_HPP_
