// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from microstrain_inertial_msgs:msg/MipGpsTimestamp.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GPS_TIMESTAMP__TRAITS_HPP_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GPS_TIMESTAMP__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "microstrain_inertial_msgs/msg/detail/mip_gps_timestamp__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'valid_flags'
#include "microstrain_inertial_msgs/msg/detail/mip_gps_timestamp_valid_flags__traits.hpp"

namespace microstrain_inertial_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MipGpsTimestamp & msg,
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

  // member: valid_flags
  {
    out << "valid_flags: ";
    to_flow_style_yaml(msg.valid_flags, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MipGpsTimestamp & msg,
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

  // member: valid_flags
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "valid_flags:\n";
    to_block_style_yaml(msg.valid_flags, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MipGpsTimestamp & msg, bool use_flow_style = false)
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
  const microstrain_inertial_msgs::msg::MipGpsTimestamp & msg,
  std::ostream & out, size_t indentation = 0)
{
  microstrain_inertial_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use microstrain_inertial_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const microstrain_inertial_msgs::msg::MipGpsTimestamp & msg)
{
  return microstrain_inertial_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<microstrain_inertial_msgs::msg::MipGpsTimestamp>()
{
  return "microstrain_inertial_msgs::msg::MipGpsTimestamp";
}

template<>
inline const char * name<microstrain_inertial_msgs::msg::MipGpsTimestamp>()
{
  return "microstrain_inertial_msgs/msg/MipGpsTimestamp";
}

template<>
struct has_fixed_size<microstrain_inertial_msgs::msg::MipGpsTimestamp>
  : std::integral_constant<bool, has_fixed_size<microstrain_inertial_msgs::msg::MipGpsTimestampValidFlags>::value> {};

template<>
struct has_bounded_size<microstrain_inertial_msgs::msg::MipGpsTimestamp>
  : std::integral_constant<bool, has_bounded_size<microstrain_inertial_msgs::msg::MipGpsTimestampValidFlags>::value> {};

template<>
struct is_message<microstrain_inertial_msgs::msg::MipGpsTimestamp>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GPS_TIMESTAMP__TRAITS_HPP_
