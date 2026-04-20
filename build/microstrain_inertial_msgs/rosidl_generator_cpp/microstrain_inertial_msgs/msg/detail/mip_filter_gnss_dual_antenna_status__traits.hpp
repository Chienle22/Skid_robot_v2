// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from microstrain_inertial_msgs:msg/MipFilterGnssDualAntennaStatus.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_GNSS_DUAL_ANTENNA_STATUS__TRAITS_HPP_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_GNSS_DUAL_ANTENNA_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "microstrain_inertial_msgs/msg/detail/mip_filter_gnss_dual_antenna_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "microstrain_inertial_msgs/msg/detail/mip_header__traits.hpp"
// Member 'status_flags'
#include "microstrain_inertial_msgs/msg/detail/mip_filter_gnss_dual_antenna_status_status_flags__traits.hpp"

namespace microstrain_inertial_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MipFilterGnssDualAntennaStatus & msg,
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

  // member: heading
  {
    out << "heading: ";
    rosidl_generator_traits::value_to_yaml(msg.heading, out);
    out << ", ";
  }

  // member: heading_unc
  {
    out << "heading_unc: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_unc, out);
    out << ", ";
  }

  // member: fix_type
  {
    out << "fix_type: ";
    rosidl_generator_traits::value_to_yaml(msg.fix_type, out);
    out << ", ";
  }

  // member: status_flags
  {
    out << "status_flags: ";
    to_flow_style_yaml(msg.status_flags, out);
    out << ", ";
  }

  // member: valid_flags
  {
    out << "valid_flags: ";
    rosidl_generator_traits::value_to_yaml(msg.valid_flags, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MipFilterGnssDualAntennaStatus & msg,
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

  // member: heading
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading: ";
    rosidl_generator_traits::value_to_yaml(msg.heading, out);
    out << "\n";
  }

  // member: heading_unc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading_unc: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_unc, out);
    out << "\n";
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

  // member: status_flags
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_flags:\n";
    to_block_style_yaml(msg.status_flags, out, indentation + 2);
  }

  // member: valid_flags
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "valid_flags: ";
    rosidl_generator_traits::value_to_yaml(msg.valid_flags, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MipFilterGnssDualAntennaStatus & msg, bool use_flow_style = false)
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
  const microstrain_inertial_msgs::msg::MipFilterGnssDualAntennaStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  microstrain_inertial_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use microstrain_inertial_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const microstrain_inertial_msgs::msg::MipFilterGnssDualAntennaStatus & msg)
{
  return microstrain_inertial_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<microstrain_inertial_msgs::msg::MipFilterGnssDualAntennaStatus>()
{
  return "microstrain_inertial_msgs::msg::MipFilterGnssDualAntennaStatus";
}

template<>
inline const char * name<microstrain_inertial_msgs::msg::MipFilterGnssDualAntennaStatus>()
{
  return "microstrain_inertial_msgs/msg/MipFilterGnssDualAntennaStatus";
}

template<>
struct has_fixed_size<microstrain_inertial_msgs::msg::MipFilterGnssDualAntennaStatus>
  : std::integral_constant<bool, has_fixed_size<microstrain_inertial_msgs::msg::MipFilterGnssDualAntennaStatusStatusFlags>::value && has_fixed_size<microstrain_inertial_msgs::msg::MipHeader>::value> {};

template<>
struct has_bounded_size<microstrain_inertial_msgs::msg::MipFilterGnssDualAntennaStatus>
  : std::integral_constant<bool, has_bounded_size<microstrain_inertial_msgs::msg::MipFilterGnssDualAntennaStatusStatusFlags>::value && has_bounded_size<microstrain_inertial_msgs::msg::MipHeader>::value> {};

template<>
struct is_message<microstrain_inertial_msgs::msg::MipFilterGnssDualAntennaStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_GNSS_DUAL_ANTENNA_STATUS__TRAITS_HPP_
