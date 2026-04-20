// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from microstrain_inertial_msgs:msg/MipFilterGnssDualAntennaStatusStatusFlags.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_GNSS_DUAL_ANTENNA_STATUS_STATUS_FLAGS__TRAITS_HPP_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_GNSS_DUAL_ANTENNA_STATUS_STATUS_FLAGS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "microstrain_inertial_msgs/msg/detail/mip_filter_gnss_dual_antenna_status_status_flags__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace microstrain_inertial_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MipFilterGnssDualAntennaStatusStatusFlags & msg,
  std::ostream & out)
{
  out << "{";
  // member: rcv_1_data_valid
  {
    out << "rcv_1_data_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.rcv_1_data_valid, out);
    out << ", ";
  }

  // member: rcv_2_data_valid
  {
    out << "rcv_2_data_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.rcv_2_data_valid, out);
    out << ", ";
  }

  // member: antenna_offsets_valid
  {
    out << "antenna_offsets_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.antenna_offsets_valid, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MipFilterGnssDualAntennaStatusStatusFlags & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: rcv_1_data_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rcv_1_data_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.rcv_1_data_valid, out);
    out << "\n";
  }

  // member: rcv_2_data_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rcv_2_data_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.rcv_2_data_valid, out);
    out << "\n";
  }

  // member: antenna_offsets_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "antenna_offsets_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.antenna_offsets_valid, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MipFilterGnssDualAntennaStatusStatusFlags & msg, bool use_flow_style = false)
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
  const microstrain_inertial_msgs::msg::MipFilterGnssDualAntennaStatusStatusFlags & msg,
  std::ostream & out, size_t indentation = 0)
{
  microstrain_inertial_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use microstrain_inertial_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const microstrain_inertial_msgs::msg::MipFilterGnssDualAntennaStatusStatusFlags & msg)
{
  return microstrain_inertial_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<microstrain_inertial_msgs::msg::MipFilterGnssDualAntennaStatusStatusFlags>()
{
  return "microstrain_inertial_msgs::msg::MipFilterGnssDualAntennaStatusStatusFlags";
}

template<>
inline const char * name<microstrain_inertial_msgs::msg::MipFilterGnssDualAntennaStatusStatusFlags>()
{
  return "microstrain_inertial_msgs/msg/MipFilterGnssDualAntennaStatusStatusFlags";
}

template<>
struct has_fixed_size<microstrain_inertial_msgs::msg::MipFilterGnssDualAntennaStatusStatusFlags>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<microstrain_inertial_msgs::msg::MipFilterGnssDualAntennaStatusStatusFlags>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<microstrain_inertial_msgs::msg::MipFilterGnssDualAntennaStatusStatusFlags>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_GNSS_DUAL_ANTENNA_STATUS_STATUS_FLAGS__TRAITS_HPP_
