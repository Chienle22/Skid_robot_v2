// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from microstrain_inertial_msgs:msg/MipGpsTimestampValidFlags.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GPS_TIMESTAMP_VALID_FLAGS__TRAITS_HPP_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GPS_TIMESTAMP_VALID_FLAGS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "microstrain_inertial_msgs/msg/detail/mip_gps_timestamp_valid_flags__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace microstrain_inertial_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MipGpsTimestampValidFlags & msg,
  std::ostream & out)
{
  out << "{";
  // member: tow
  {
    out << "tow: ";
    rosidl_generator_traits::value_to_yaml(msg.tow, out);
    out << ", ";
  }

  // member: week_number
  {
    out << "week_number: ";
    rosidl_generator_traits::value_to_yaml(msg.week_number, out);
    out << ", ";
  }

  // member: time_valid
  {
    out << "time_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.time_valid, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MipGpsTimestampValidFlags & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: tow
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tow: ";
    rosidl_generator_traits::value_to_yaml(msg.tow, out);
    out << "\n";
  }

  // member: week_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "week_number: ";
    rosidl_generator_traits::value_to_yaml(msg.week_number, out);
    out << "\n";
  }

  // member: time_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.time_valid, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MipGpsTimestampValidFlags & msg, bool use_flow_style = false)
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
  const microstrain_inertial_msgs::msg::MipGpsTimestampValidFlags & msg,
  std::ostream & out, size_t indentation = 0)
{
  microstrain_inertial_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use microstrain_inertial_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const microstrain_inertial_msgs::msg::MipGpsTimestampValidFlags & msg)
{
  return microstrain_inertial_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<microstrain_inertial_msgs::msg::MipGpsTimestampValidFlags>()
{
  return "microstrain_inertial_msgs::msg::MipGpsTimestampValidFlags";
}

template<>
inline const char * name<microstrain_inertial_msgs::msg::MipGpsTimestampValidFlags>()
{
  return "microstrain_inertial_msgs/msg/MipGpsTimestampValidFlags";
}

template<>
struct has_fixed_size<microstrain_inertial_msgs::msg::MipGpsTimestampValidFlags>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<microstrain_inertial_msgs::msg::MipGpsTimestampValidFlags>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<microstrain_inertial_msgs::msg::MipGpsTimestampValidFlags>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GPS_TIMESTAMP_VALID_FLAGS__TRAITS_HPP_
