// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from microstrain_inertial_msgs:msg/MipFilterStatus.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_STATUS__TRAITS_HPP_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "microstrain_inertial_msgs/msg/detail/mip_filter_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "microstrain_inertial_msgs/msg/detail/mip_header__traits.hpp"
// Member 'gx5_status_flags'
#include "microstrain_inertial_msgs/msg/detail/mip_filter_status_gx5_status_flags__traits.hpp"
// Member 'gq7_status_flags'
#include "microstrain_inertial_msgs/msg/detail/mip_filter_status_gq7_status_flags__traits.hpp"

namespace microstrain_inertial_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MipFilterStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: filter_state
  {
    out << "filter_state: ";
    rosidl_generator_traits::value_to_yaml(msg.filter_state, out);
    out << ", ";
  }

  // member: dynamics_mode
  {
    out << "dynamics_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.dynamics_mode, out);
    out << ", ";
  }

  // member: gx5_status_flags
  {
    out << "gx5_status_flags: ";
    to_flow_style_yaml(msg.gx5_status_flags, out);
    out << ", ";
  }

  // member: gq7_status_flags
  {
    out << "gq7_status_flags: ";
    to_flow_style_yaml(msg.gq7_status_flags, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MipFilterStatus & msg,
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

  // member: filter_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "filter_state: ";
    rosidl_generator_traits::value_to_yaml(msg.filter_state, out);
    out << "\n";
  }

  // member: dynamics_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dynamics_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.dynamics_mode, out);
    out << "\n";
  }

  // member: gx5_status_flags
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gx5_status_flags:\n";
    to_block_style_yaml(msg.gx5_status_flags, out, indentation + 2);
  }

  // member: gq7_status_flags
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gq7_status_flags:\n";
    to_block_style_yaml(msg.gq7_status_flags, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MipFilterStatus & msg, bool use_flow_style = false)
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
  const microstrain_inertial_msgs::msg::MipFilterStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  microstrain_inertial_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use microstrain_inertial_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const microstrain_inertial_msgs::msg::MipFilterStatus & msg)
{
  return microstrain_inertial_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<microstrain_inertial_msgs::msg::MipFilterStatus>()
{
  return "microstrain_inertial_msgs::msg::MipFilterStatus";
}

template<>
inline const char * name<microstrain_inertial_msgs::msg::MipFilterStatus>()
{
  return "microstrain_inertial_msgs/msg/MipFilterStatus";
}

template<>
struct has_fixed_size<microstrain_inertial_msgs::msg::MipFilterStatus>
  : std::integral_constant<bool, has_fixed_size<microstrain_inertial_msgs::msg::MipFilterStatusGq7StatusFlags>::value && has_fixed_size<microstrain_inertial_msgs::msg::MipFilterStatusGx5StatusFlags>::value && has_fixed_size<microstrain_inertial_msgs::msg::MipHeader>::value> {};

template<>
struct has_bounded_size<microstrain_inertial_msgs::msg::MipFilterStatus>
  : std::integral_constant<bool, has_bounded_size<microstrain_inertial_msgs::msg::MipFilterStatusGq7StatusFlags>::value && has_bounded_size<microstrain_inertial_msgs::msg::MipFilterStatusGx5StatusFlags>::value && has_bounded_size<microstrain_inertial_msgs::msg::MipHeader>::value> {};

template<>
struct is_message<microstrain_inertial_msgs::msg::MipFilterStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_STATUS__TRAITS_HPP_
