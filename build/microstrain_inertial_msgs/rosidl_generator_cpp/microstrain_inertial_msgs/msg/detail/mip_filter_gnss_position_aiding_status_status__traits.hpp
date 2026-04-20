// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from microstrain_inertial_msgs:msg/MipFilterGnssPositionAidingStatusStatus.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_GNSS_POSITION_AIDING_STATUS_STATUS__TRAITS_HPP_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_GNSS_POSITION_AIDING_STATUS_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "microstrain_inertial_msgs/msg/detail/mip_filter_gnss_position_aiding_status_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace microstrain_inertial_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MipFilterGnssPositionAidingStatusStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: tight_coupling
  {
    out << "tight_coupling: ";
    rosidl_generator_traits::value_to_yaml(msg.tight_coupling, out);
    out << ", ";
  }

  // member: differential
  {
    out << "differential: ";
    rosidl_generator_traits::value_to_yaml(msg.differential, out);
    out << ", ";
  }

  // member: integer_fix
  {
    out << "integer_fix: ";
    rosidl_generator_traits::value_to_yaml(msg.integer_fix, out);
    out << ", ";
  }

  // member: gps_l1
  {
    out << "gps_l1: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_l1, out);
    out << ", ";
  }

  // member: gps_l2
  {
    out << "gps_l2: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_l2, out);
    out << ", ";
  }

  // member: gps_l5
  {
    out << "gps_l5: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_l5, out);
    out << ", ";
  }

  // member: glo_l1
  {
    out << "glo_l1: ";
    rosidl_generator_traits::value_to_yaml(msg.glo_l1, out);
    out << ", ";
  }

  // member: glo_l2
  {
    out << "glo_l2: ";
    rosidl_generator_traits::value_to_yaml(msg.glo_l2, out);
    out << ", ";
  }

  // member: gal_e1
  {
    out << "gal_e1: ";
    rosidl_generator_traits::value_to_yaml(msg.gal_e1, out);
    out << ", ";
  }

  // member: gal_e5
  {
    out << "gal_e5: ";
    rosidl_generator_traits::value_to_yaml(msg.gal_e5, out);
    out << ", ";
  }

  // member: gal_e6
  {
    out << "gal_e6: ";
    rosidl_generator_traits::value_to_yaml(msg.gal_e6, out);
    out << ", ";
  }

  // member: bei_b1
  {
    out << "bei_b1: ";
    rosidl_generator_traits::value_to_yaml(msg.bei_b1, out);
    out << ", ";
  }

  // member: bei_b2
  {
    out << "bei_b2: ";
    rosidl_generator_traits::value_to_yaml(msg.bei_b2, out);
    out << ", ";
  }

  // member: bei_b3
  {
    out << "bei_b3: ";
    rosidl_generator_traits::value_to_yaml(msg.bei_b3, out);
    out << ", ";
  }

  // member: no_fix
  {
    out << "no_fix: ";
    rosidl_generator_traits::value_to_yaml(msg.no_fix, out);
    out << ", ";
  }

  // member: config_error
  {
    out << "config_error: ";
    rosidl_generator_traits::value_to_yaml(msg.config_error, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MipFilterGnssPositionAidingStatusStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: tight_coupling
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tight_coupling: ";
    rosidl_generator_traits::value_to_yaml(msg.tight_coupling, out);
    out << "\n";
  }

  // member: differential
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "differential: ";
    rosidl_generator_traits::value_to_yaml(msg.differential, out);
    out << "\n";
  }

  // member: integer_fix
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "integer_fix: ";
    rosidl_generator_traits::value_to_yaml(msg.integer_fix, out);
    out << "\n";
  }

  // member: gps_l1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gps_l1: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_l1, out);
    out << "\n";
  }

  // member: gps_l2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gps_l2: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_l2, out);
    out << "\n";
  }

  // member: gps_l5
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gps_l5: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_l5, out);
    out << "\n";
  }

  // member: glo_l1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "glo_l1: ";
    rosidl_generator_traits::value_to_yaml(msg.glo_l1, out);
    out << "\n";
  }

  // member: glo_l2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "glo_l2: ";
    rosidl_generator_traits::value_to_yaml(msg.glo_l2, out);
    out << "\n";
  }

  // member: gal_e1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gal_e1: ";
    rosidl_generator_traits::value_to_yaml(msg.gal_e1, out);
    out << "\n";
  }

  // member: gal_e5
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gal_e5: ";
    rosidl_generator_traits::value_to_yaml(msg.gal_e5, out);
    out << "\n";
  }

  // member: gal_e6
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gal_e6: ";
    rosidl_generator_traits::value_to_yaml(msg.gal_e6, out);
    out << "\n";
  }

  // member: bei_b1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bei_b1: ";
    rosidl_generator_traits::value_to_yaml(msg.bei_b1, out);
    out << "\n";
  }

  // member: bei_b2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bei_b2: ";
    rosidl_generator_traits::value_to_yaml(msg.bei_b2, out);
    out << "\n";
  }

  // member: bei_b3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bei_b3: ";
    rosidl_generator_traits::value_to_yaml(msg.bei_b3, out);
    out << "\n";
  }

  // member: no_fix
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "no_fix: ";
    rosidl_generator_traits::value_to_yaml(msg.no_fix, out);
    out << "\n";
  }

  // member: config_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "config_error: ";
    rosidl_generator_traits::value_to_yaml(msg.config_error, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MipFilterGnssPositionAidingStatusStatus & msg, bool use_flow_style = false)
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
  const microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatusStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  microstrain_inertial_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use microstrain_inertial_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatusStatus & msg)
{
  return microstrain_inertial_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatusStatus>()
{
  return "microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatusStatus";
}

template<>
inline const char * name<microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatusStatus>()
{
  return "microstrain_inertial_msgs/msg/MipFilterGnssPositionAidingStatusStatus";
}

template<>
struct has_fixed_size<microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatusStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatusStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatusStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_GNSS_POSITION_AIDING_STATUS_STATUS__TRAITS_HPP_
