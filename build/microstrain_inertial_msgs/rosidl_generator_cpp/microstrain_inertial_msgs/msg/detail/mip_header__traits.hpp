// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from microstrain_inertial_msgs:msg/MipHeader.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_HEADER__TRAITS_HPP_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_HEADER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "microstrain_inertial_msgs/msg/detail/mip_header__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'gps_timestamp'
#include "microstrain_inertial_msgs/msg/detail/mip_gps_timestamp__traits.hpp"

namespace microstrain_inertial_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MipHeader & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: event_source
  {
    out << "event_source: ";
    rosidl_generator_traits::value_to_yaml(msg.event_source, out);
    out << ", ";
  }

  // member: reference_timestamp
  {
    out << "reference_timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.reference_timestamp, out);
    out << ", ";
  }

  // member: gps_timestamp
  {
    out << "gps_timestamp: ";
    to_flow_style_yaml(msg.gps_timestamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MipHeader & msg,
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

  // member: event_source
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "event_source: ";
    rosidl_generator_traits::value_to_yaml(msg.event_source, out);
    out << "\n";
  }

  // member: reference_timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reference_timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.reference_timestamp, out);
    out << "\n";
  }

  // member: gps_timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gps_timestamp:\n";
    to_block_style_yaml(msg.gps_timestamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MipHeader & msg, bool use_flow_style = false)
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
  const microstrain_inertial_msgs::msg::MipHeader & msg,
  std::ostream & out, size_t indentation = 0)
{
  microstrain_inertial_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use microstrain_inertial_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const microstrain_inertial_msgs::msg::MipHeader & msg)
{
  return microstrain_inertial_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<microstrain_inertial_msgs::msg::MipHeader>()
{
  return "microstrain_inertial_msgs::msg::MipHeader";
}

template<>
inline const char * name<microstrain_inertial_msgs::msg::MipHeader>()
{
  return "microstrain_inertial_msgs/msg/MipHeader";
}

template<>
struct has_fixed_size<microstrain_inertial_msgs::msg::MipHeader>
  : std::integral_constant<bool, has_fixed_size<microstrain_inertial_msgs::msg::MipGpsTimestamp>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<microstrain_inertial_msgs::msg::MipHeader>
  : std::integral_constant<bool, has_bounded_size<microstrain_inertial_msgs::msg::MipGpsTimestamp>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<microstrain_inertial_msgs::msg::MipHeader>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_HEADER__TRAITS_HPP_
