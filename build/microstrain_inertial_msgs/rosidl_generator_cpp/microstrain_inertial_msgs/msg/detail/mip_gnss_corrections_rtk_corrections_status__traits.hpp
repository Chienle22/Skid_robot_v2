// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from microstrain_inertial_msgs:msg/MipGnssCorrectionsRtkCorrectionsStatus.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GNSS_CORRECTIONS_RTK_CORRECTIONS_STATUS__TRAITS_HPP_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GNSS_CORRECTIONS_RTK_CORRECTIONS_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "microstrain_inertial_msgs/msg/detail/mip_gnss_corrections_rtk_corrections_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "microstrain_inertial_msgs/msg/detail/mip_header__traits.hpp"
// Member 'epoch_status'
#include "microstrain_inertial_msgs/msg/detail/mip_gnss_corrections_rtk_corrections_status_epoch_status__traits.hpp"
// Member 'dongle_status'
#include "microstrain_inertial_msgs/msg/detail/mip_gnss_corrections_rtk_corrections_status_dongle_status__traits.hpp"

namespace microstrain_inertial_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MipGnssCorrectionsRtkCorrectionsStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: time_of_week
  {
    out << "time_of_week: ";
    rosidl_generator_traits::value_to_yaml(msg.time_of_week, out);
    out << ", ";
  }

  // member: week_number
  {
    out << "week_number: ";
    rosidl_generator_traits::value_to_yaml(msg.week_number, out);
    out << ", ";
  }

  // member: epoch_status
  {
    out << "epoch_status: ";
    to_flow_style_yaml(msg.epoch_status, out);
    out << ", ";
  }

  // member: dongle_status
  {
    out << "dongle_status: ";
    to_flow_style_yaml(msg.dongle_status, out);
    out << ", ";
  }

  // member: gps_correction_latency
  {
    out << "gps_correction_latency: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_correction_latency, out);
    out << ", ";
  }

  // member: glonass_correction_latency
  {
    out << "glonass_correction_latency: ";
    rosidl_generator_traits::value_to_yaml(msg.glonass_correction_latency, out);
    out << ", ";
  }

  // member: galileo_correction_latency
  {
    out << "galileo_correction_latency: ";
    rosidl_generator_traits::value_to_yaml(msg.galileo_correction_latency, out);
    out << ", ";
  }

  // member: beidou_correction_latency
  {
    out << "beidou_correction_latency: ";
    rosidl_generator_traits::value_to_yaml(msg.beidou_correction_latency, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MipGnssCorrectionsRtkCorrectionsStatus & msg,
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

  // member: time_of_week
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_of_week: ";
    rosidl_generator_traits::value_to_yaml(msg.time_of_week, out);
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

  // member: epoch_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "epoch_status:\n";
    to_block_style_yaml(msg.epoch_status, out, indentation + 2);
  }

  // member: dongle_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dongle_status:\n";
    to_block_style_yaml(msg.dongle_status, out, indentation + 2);
  }

  // member: gps_correction_latency
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gps_correction_latency: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_correction_latency, out);
    out << "\n";
  }

  // member: glonass_correction_latency
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "glonass_correction_latency: ";
    rosidl_generator_traits::value_to_yaml(msg.glonass_correction_latency, out);
    out << "\n";
  }

  // member: galileo_correction_latency
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "galileo_correction_latency: ";
    rosidl_generator_traits::value_to_yaml(msg.galileo_correction_latency, out);
    out << "\n";
  }

  // member: beidou_correction_latency
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "beidou_correction_latency: ";
    rosidl_generator_traits::value_to_yaml(msg.beidou_correction_latency, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MipGnssCorrectionsRtkCorrectionsStatus & msg, bool use_flow_style = false)
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
  const microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  microstrain_inertial_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use microstrain_inertial_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatus & msg)
{
  return microstrain_inertial_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatus>()
{
  return "microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatus";
}

template<>
inline const char * name<microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatus>()
{
  return "microstrain_inertial_msgs/msg/MipGnssCorrectionsRtkCorrectionsStatus";
}

template<>
struct has_fixed_size<microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatus>
  : std::integral_constant<bool, has_fixed_size<microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusDongleStatus>::value && has_fixed_size<microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusEpochStatus>::value && has_fixed_size<microstrain_inertial_msgs::msg::MipHeader>::value> {};

template<>
struct has_bounded_size<microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatus>
  : std::integral_constant<bool, has_bounded_size<microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusDongleStatus>::value && has_bounded_size<microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusEpochStatus>::value && has_bounded_size<microstrain_inertial_msgs::msg::MipHeader>::value> {};

template<>
struct is_message<microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GNSS_CORRECTIONS_RTK_CORRECTIONS_STATUS__TRAITS_HPP_
