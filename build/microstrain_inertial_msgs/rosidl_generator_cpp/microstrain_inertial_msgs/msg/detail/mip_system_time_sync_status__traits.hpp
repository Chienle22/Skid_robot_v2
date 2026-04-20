// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from microstrain_inertial_msgs:msg/MipSystemTimeSyncStatus.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_SYSTEM_TIME_SYNC_STATUS__TRAITS_HPP_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_SYSTEM_TIME_SYNC_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "microstrain_inertial_msgs/msg/detail/mip_system_time_sync_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "microstrain_inertial_msgs/msg/detail/mip_header__traits.hpp"

namespace microstrain_inertial_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MipSystemTimeSyncStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: time_sync
  {
    out << "time_sync: ";
    rosidl_generator_traits::value_to_yaml(msg.time_sync, out);
    out << ", ";
  }

  // member: last_pps_rcvd
  {
    out << "last_pps_rcvd: ";
    rosidl_generator_traits::value_to_yaml(msg.last_pps_rcvd, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MipSystemTimeSyncStatus & msg,
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

  // member: time_sync
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_sync: ";
    rosidl_generator_traits::value_to_yaml(msg.time_sync, out);
    out << "\n";
  }

  // member: last_pps_rcvd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "last_pps_rcvd: ";
    rosidl_generator_traits::value_to_yaml(msg.last_pps_rcvd, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MipSystemTimeSyncStatus & msg, bool use_flow_style = false)
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
  const microstrain_inertial_msgs::msg::MipSystemTimeSyncStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  microstrain_inertial_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use microstrain_inertial_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const microstrain_inertial_msgs::msg::MipSystemTimeSyncStatus & msg)
{
  return microstrain_inertial_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<microstrain_inertial_msgs::msg::MipSystemTimeSyncStatus>()
{
  return "microstrain_inertial_msgs::msg::MipSystemTimeSyncStatus";
}

template<>
inline const char * name<microstrain_inertial_msgs::msg::MipSystemTimeSyncStatus>()
{
  return "microstrain_inertial_msgs/msg/MipSystemTimeSyncStatus";
}

template<>
struct has_fixed_size<microstrain_inertial_msgs::msg::MipSystemTimeSyncStatus>
  : std::integral_constant<bool, has_fixed_size<microstrain_inertial_msgs::msg::MipHeader>::value> {};

template<>
struct has_bounded_size<microstrain_inertial_msgs::msg::MipSystemTimeSyncStatus>
  : std::integral_constant<bool, has_bounded_size<microstrain_inertial_msgs::msg::MipHeader>::value> {};

template<>
struct is_message<microstrain_inertial_msgs::msg::MipSystemTimeSyncStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_SYSTEM_TIME_SYNC_STATUS__TRAITS_HPP_
