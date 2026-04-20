// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from microstrain_inertial_msgs:msg/MipGnssCorrectionsRtkCorrectionsStatusDongleStatus.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GNSS_CORRECTIONS_RTK_CORRECTIONS_STATUS_DONGLE_STATUS__TRAITS_HPP_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GNSS_CORRECTIONS_RTK_CORRECTIONS_STATUS_DONGLE_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "microstrain_inertial_msgs/msg/detail/mip_gnss_corrections_rtk_corrections_status_dongle_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace microstrain_inertial_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MipGnssCorrectionsRtkCorrectionsStatusDongleStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: modem_state
  {
    out << "modem_state: ";
    rosidl_generator_traits::value_to_yaml(msg.modem_state, out);
    out << ", ";
  }

  // member: connection_type
  {
    out << "connection_type: ";
    rosidl_generator_traits::value_to_yaml(msg.connection_type, out);
    out << ", ";
  }

  // member: rssi
  {
    out << "rssi: ";
    rosidl_generator_traits::value_to_yaml(msg.rssi, out);
    out << ", ";
  }

  // member: signal_quality
  {
    out << "signal_quality: ";
    rosidl_generator_traits::value_to_yaml(msg.signal_quality, out);
    out << ", ";
  }

  // member: tower_change_indicator
  {
    out << "tower_change_indicator: ";
    rosidl_generator_traits::value_to_yaml(msg.tower_change_indicator, out);
    out << ", ";
  }

  // member: nmea_timeout_flag
  {
    out << "nmea_timeout_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.nmea_timeout_flag, out);
    out << ", ";
  }

  // member: server_timeout_flag
  {
    out << "server_timeout_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.server_timeout_flag, out);
    out << ", ";
  }

  // member: rtcm_timeout_flag
  {
    out << "rtcm_timeout_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.rtcm_timeout_flag, out);
    out << ", ";
  }

  // member: device_out_of_range_flag
  {
    out << "device_out_of_range_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.device_out_of_range_flag, out);
    out << ", ";
  }

  // member: corrections_unavailable_flag
  {
    out << "corrections_unavailable_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.corrections_unavailable_flag, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MipGnssCorrectionsRtkCorrectionsStatusDongleStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: modem_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "modem_state: ";
    rosidl_generator_traits::value_to_yaml(msg.modem_state, out);
    out << "\n";
  }

  // member: connection_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "connection_type: ";
    rosidl_generator_traits::value_to_yaml(msg.connection_type, out);
    out << "\n";
  }

  // member: rssi
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rssi: ";
    rosidl_generator_traits::value_to_yaml(msg.rssi, out);
    out << "\n";
  }

  // member: signal_quality
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "signal_quality: ";
    rosidl_generator_traits::value_to_yaml(msg.signal_quality, out);
    out << "\n";
  }

  // member: tower_change_indicator
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tower_change_indicator: ";
    rosidl_generator_traits::value_to_yaml(msg.tower_change_indicator, out);
    out << "\n";
  }

  // member: nmea_timeout_flag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nmea_timeout_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.nmea_timeout_flag, out);
    out << "\n";
  }

  // member: server_timeout_flag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "server_timeout_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.server_timeout_flag, out);
    out << "\n";
  }

  // member: rtcm_timeout_flag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rtcm_timeout_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.rtcm_timeout_flag, out);
    out << "\n";
  }

  // member: device_out_of_range_flag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "device_out_of_range_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.device_out_of_range_flag, out);
    out << "\n";
  }

  // member: corrections_unavailable_flag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "corrections_unavailable_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.corrections_unavailable_flag, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MipGnssCorrectionsRtkCorrectionsStatusDongleStatus & msg, bool use_flow_style = false)
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
  const microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusDongleStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  microstrain_inertial_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use microstrain_inertial_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusDongleStatus & msg)
{
  return microstrain_inertial_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusDongleStatus>()
{
  return "microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusDongleStatus";
}

template<>
inline const char * name<microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusDongleStatus>()
{
  return "microstrain_inertial_msgs/msg/MipGnssCorrectionsRtkCorrectionsStatusDongleStatus";
}

template<>
struct has_fixed_size<microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusDongleStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusDongleStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusDongleStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GNSS_CORRECTIONS_RTK_CORRECTIONS_STATUS_DONGLE_STATUS__TRAITS_HPP_
