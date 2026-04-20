// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from microstrain_inertial_msgs:msg/MipGnssCorrectionsRtkCorrectionsStatusEpochStatus.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GNSS_CORRECTIONS_RTK_CORRECTIONS_STATUS_EPOCH_STATUS__TRAITS_HPP_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GNSS_CORRECTIONS_RTK_CORRECTIONS_STATUS_EPOCH_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "microstrain_inertial_msgs/msg/detail/mip_gnss_corrections_rtk_corrections_status_epoch_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace microstrain_inertial_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MipGnssCorrectionsRtkCorrectionsStatusEpochStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: antenna_location_received
  {
    out << "antenna_location_received: ";
    rosidl_generator_traits::value_to_yaml(msg.antenna_location_received, out);
    out << ", ";
  }

  // member: antenna_description_received
  {
    out << "antenna_description_received: ";
    rosidl_generator_traits::value_to_yaml(msg.antenna_description_received, out);
    out << ", ";
  }

  // member: gps_received
  {
    out << "gps_received: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_received, out);
    out << ", ";
  }

  // member: galileo_received
  {
    out << "galileo_received: ";
    rosidl_generator_traits::value_to_yaml(msg.galileo_received, out);
    out << ", ";
  }

  // member: glonass_received
  {
    out << "glonass_received: ";
    rosidl_generator_traits::value_to_yaml(msg.glonass_received, out);
    out << ", ";
  }

  // member: beidou_received
  {
    out << "beidou_received: ";
    rosidl_generator_traits::value_to_yaml(msg.beidou_received, out);
    out << ", ";
  }

  // member: using_gps_msm_messages
  {
    out << "using_gps_msm_messages: ";
    rosidl_generator_traits::value_to_yaml(msg.using_gps_msm_messages, out);
    out << ", ";
  }

  // member: using_glonass_msm_messages
  {
    out << "using_glonass_msm_messages: ";
    rosidl_generator_traits::value_to_yaml(msg.using_glonass_msm_messages, out);
    out << ", ";
  }

  // member: dongle_status_read_failed
  {
    out << "dongle_status_read_failed: ";
    rosidl_generator_traits::value_to_yaml(msg.dongle_status_read_failed, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MipGnssCorrectionsRtkCorrectionsStatusEpochStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: antenna_location_received
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "antenna_location_received: ";
    rosidl_generator_traits::value_to_yaml(msg.antenna_location_received, out);
    out << "\n";
  }

  // member: antenna_description_received
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "antenna_description_received: ";
    rosidl_generator_traits::value_to_yaml(msg.antenna_description_received, out);
    out << "\n";
  }

  // member: gps_received
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gps_received: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_received, out);
    out << "\n";
  }

  // member: galileo_received
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "galileo_received: ";
    rosidl_generator_traits::value_to_yaml(msg.galileo_received, out);
    out << "\n";
  }

  // member: glonass_received
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "glonass_received: ";
    rosidl_generator_traits::value_to_yaml(msg.glonass_received, out);
    out << "\n";
  }

  // member: beidou_received
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "beidou_received: ";
    rosidl_generator_traits::value_to_yaml(msg.beidou_received, out);
    out << "\n";
  }

  // member: using_gps_msm_messages
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "using_gps_msm_messages: ";
    rosidl_generator_traits::value_to_yaml(msg.using_gps_msm_messages, out);
    out << "\n";
  }

  // member: using_glonass_msm_messages
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "using_glonass_msm_messages: ";
    rosidl_generator_traits::value_to_yaml(msg.using_glonass_msm_messages, out);
    out << "\n";
  }

  // member: dongle_status_read_failed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dongle_status_read_failed: ";
    rosidl_generator_traits::value_to_yaml(msg.dongle_status_read_failed, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MipGnssCorrectionsRtkCorrectionsStatusEpochStatus & msg, bool use_flow_style = false)
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
  const microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusEpochStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  microstrain_inertial_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use microstrain_inertial_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusEpochStatus & msg)
{
  return microstrain_inertial_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusEpochStatus>()
{
  return "microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusEpochStatus";
}

template<>
inline const char * name<microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusEpochStatus>()
{
  return "microstrain_inertial_msgs/msg/MipGnssCorrectionsRtkCorrectionsStatusEpochStatus";
}

template<>
struct has_fixed_size<microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusEpochStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusEpochStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusEpochStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GNSS_CORRECTIONS_RTK_CORRECTIONS_STATUS_EPOCH_STATUS__TRAITS_HPP_
