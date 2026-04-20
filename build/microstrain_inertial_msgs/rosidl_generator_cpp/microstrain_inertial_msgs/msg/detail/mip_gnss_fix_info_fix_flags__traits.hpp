// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from microstrain_inertial_msgs:msg/MipGnssFixInfoFixFlags.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GNSS_FIX_INFO_FIX_FLAGS__TRAITS_HPP_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GNSS_FIX_INFO_FIX_FLAGS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "microstrain_inertial_msgs/msg/detail/mip_gnss_fix_info_fix_flags__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace microstrain_inertial_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MipGnssFixInfoFixFlags & msg,
  std::ostream & out)
{
  out << "{";
  // member: sbas_used
  {
    out << "sbas_used: ";
    rosidl_generator_traits::value_to_yaml(msg.sbas_used, out);
    out << ", ";
  }

  // member: dgnss_used
  {
    out << "dgnss_used: ";
    rosidl_generator_traits::value_to_yaml(msg.dgnss_used, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MipGnssFixInfoFixFlags & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sbas_used
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sbas_used: ";
    rosidl_generator_traits::value_to_yaml(msg.sbas_used, out);
    out << "\n";
  }

  // member: dgnss_used
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dgnss_used: ";
    rosidl_generator_traits::value_to_yaml(msg.dgnss_used, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MipGnssFixInfoFixFlags & msg, bool use_flow_style = false)
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
  const microstrain_inertial_msgs::msg::MipGnssFixInfoFixFlags & msg,
  std::ostream & out, size_t indentation = 0)
{
  microstrain_inertial_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use microstrain_inertial_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const microstrain_inertial_msgs::msg::MipGnssFixInfoFixFlags & msg)
{
  return microstrain_inertial_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<microstrain_inertial_msgs::msg::MipGnssFixInfoFixFlags>()
{
  return "microstrain_inertial_msgs::msg::MipGnssFixInfoFixFlags";
}

template<>
inline const char * name<microstrain_inertial_msgs::msg::MipGnssFixInfoFixFlags>()
{
  return "microstrain_inertial_msgs/msg/MipGnssFixInfoFixFlags";
}

template<>
struct has_fixed_size<microstrain_inertial_msgs::msg::MipGnssFixInfoFixFlags>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<microstrain_inertial_msgs::msg::MipGnssFixInfoFixFlags>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<microstrain_inertial_msgs::msg::MipGnssFixInfoFixFlags>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GNSS_FIX_INFO_FIX_FLAGS__TRAITS_HPP_
