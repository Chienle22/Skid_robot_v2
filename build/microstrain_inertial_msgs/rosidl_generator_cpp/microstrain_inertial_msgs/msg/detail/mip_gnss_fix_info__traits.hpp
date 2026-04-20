// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from microstrain_inertial_msgs:msg/MipGnssFixInfo.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GNSS_FIX_INFO__TRAITS_HPP_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GNSS_FIX_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "microstrain_inertial_msgs/msg/detail/mip_gnss_fix_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "microstrain_inertial_msgs/msg/detail/mip_header__traits.hpp"
// Member 'fix_flags'
#include "microstrain_inertial_msgs/msg/detail/mip_gnss_fix_info_fix_flags__traits.hpp"

namespace microstrain_inertial_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MipGnssFixInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: fix_type
  {
    out << "fix_type: ";
    rosidl_generator_traits::value_to_yaml(msg.fix_type, out);
    out << ", ";
  }

  // member: num_sv
  {
    out << "num_sv: ";
    rosidl_generator_traits::value_to_yaml(msg.num_sv, out);
    out << ", ";
  }

  // member: fix_flags
  {
    out << "fix_flags: ";
    to_flow_style_yaml(msg.fix_flags, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MipGnssFixInfo & msg,
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

  // member: fix_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fix_type: ";
    rosidl_generator_traits::value_to_yaml(msg.fix_type, out);
    out << "\n";
  }

  // member: num_sv
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_sv: ";
    rosidl_generator_traits::value_to_yaml(msg.num_sv, out);
    out << "\n";
  }

  // member: fix_flags
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fix_flags:\n";
    to_block_style_yaml(msg.fix_flags, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MipGnssFixInfo & msg, bool use_flow_style = false)
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
  const microstrain_inertial_msgs::msg::MipGnssFixInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  microstrain_inertial_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use microstrain_inertial_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const microstrain_inertial_msgs::msg::MipGnssFixInfo & msg)
{
  return microstrain_inertial_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<microstrain_inertial_msgs::msg::MipGnssFixInfo>()
{
  return "microstrain_inertial_msgs::msg::MipGnssFixInfo";
}

template<>
inline const char * name<microstrain_inertial_msgs::msg::MipGnssFixInfo>()
{
  return "microstrain_inertial_msgs/msg/MipGnssFixInfo";
}

template<>
struct has_fixed_size<microstrain_inertial_msgs::msg::MipGnssFixInfo>
  : std::integral_constant<bool, has_fixed_size<microstrain_inertial_msgs::msg::MipGnssFixInfoFixFlags>::value && has_fixed_size<microstrain_inertial_msgs::msg::MipHeader>::value> {};

template<>
struct has_bounded_size<microstrain_inertial_msgs::msg::MipGnssFixInfo>
  : std::integral_constant<bool, has_bounded_size<microstrain_inertial_msgs::msg::MipGnssFixInfoFixFlags>::value && has_bounded_size<microstrain_inertial_msgs::msg::MipHeader>::value> {};

template<>
struct is_message<microstrain_inertial_msgs::msg::MipGnssFixInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GNSS_FIX_INFO__TRAITS_HPP_
