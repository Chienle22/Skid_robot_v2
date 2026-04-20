// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from microstrain_inertial_msgs:msg/MipFilterStatusGq7StatusFlags.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_STATUS_GQ7_STATUS_FLAGS__TRAITS_HPP_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_STATUS_GQ7_STATUS_FLAGS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "microstrain_inertial_msgs/msg/detail/mip_filter_status_gq7_status_flags__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace microstrain_inertial_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MipFilterStatusGq7StatusFlags & msg,
  std::ostream & out)
{
  out << "{";
  // member: filter_condition
  {
    out << "filter_condition: ";
    rosidl_generator_traits::value_to_yaml(msg.filter_condition, out);
    out << ", ";
  }

  // member: roll_pitch_warning
  {
    out << "roll_pitch_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.roll_pitch_warning, out);
    out << ", ";
  }

  // member: heading_warning
  {
    out << "heading_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_warning, out);
    out << ", ";
  }

  // member: position_warning
  {
    out << "position_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.position_warning, out);
    out << ", ";
  }

  // member: velocity_warning
  {
    out << "velocity_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_warning, out);
    out << ", ";
  }

  // member: imu_bias_warning
  {
    out << "imu_bias_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_bias_warning, out);
    out << ", ";
  }

  // member: gnss_clk_warning
  {
    out << "gnss_clk_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.gnss_clk_warning, out);
    out << ", ";
  }

  // member: antenna_lever_arm_warning
  {
    out << "antenna_lever_arm_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.antenna_lever_arm_warning, out);
    out << ", ";
  }

  // member: mounting_transform_warning
  {
    out << "mounting_transform_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.mounting_transform_warning, out);
    out << ", ";
  }

  // member: time_sync_warning
  {
    out << "time_sync_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.time_sync_warning, out);
    out << ", ";
  }

  // member: solution_error
  {
    out << "solution_error: ";
    rosidl_generator_traits::value_to_yaml(msg.solution_error, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MipFilterStatusGq7StatusFlags & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: filter_condition
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "filter_condition: ";
    rosidl_generator_traits::value_to_yaml(msg.filter_condition, out);
    out << "\n";
  }

  // member: roll_pitch_warning
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roll_pitch_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.roll_pitch_warning, out);
    out << "\n";
  }

  // member: heading_warning
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_warning, out);
    out << "\n";
  }

  // member: position_warning
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.position_warning, out);
    out << "\n";
  }

  // member: velocity_warning
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_warning, out);
    out << "\n";
  }

  // member: imu_bias_warning
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "imu_bias_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_bias_warning, out);
    out << "\n";
  }

  // member: gnss_clk_warning
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gnss_clk_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.gnss_clk_warning, out);
    out << "\n";
  }

  // member: antenna_lever_arm_warning
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "antenna_lever_arm_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.antenna_lever_arm_warning, out);
    out << "\n";
  }

  // member: mounting_transform_warning
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mounting_transform_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.mounting_transform_warning, out);
    out << "\n";
  }

  // member: time_sync_warning
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_sync_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.time_sync_warning, out);
    out << "\n";
  }

  // member: solution_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "solution_error: ";
    rosidl_generator_traits::value_to_yaml(msg.solution_error, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MipFilterStatusGq7StatusFlags & msg, bool use_flow_style = false)
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
  const microstrain_inertial_msgs::msg::MipFilterStatusGq7StatusFlags & msg,
  std::ostream & out, size_t indentation = 0)
{
  microstrain_inertial_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use microstrain_inertial_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const microstrain_inertial_msgs::msg::MipFilterStatusGq7StatusFlags & msg)
{
  return microstrain_inertial_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<microstrain_inertial_msgs::msg::MipFilterStatusGq7StatusFlags>()
{
  return "microstrain_inertial_msgs::msg::MipFilterStatusGq7StatusFlags";
}

template<>
inline const char * name<microstrain_inertial_msgs::msg::MipFilterStatusGq7StatusFlags>()
{
  return "microstrain_inertial_msgs/msg/MipFilterStatusGq7StatusFlags";
}

template<>
struct has_fixed_size<microstrain_inertial_msgs::msg::MipFilterStatusGq7StatusFlags>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<microstrain_inertial_msgs::msg::MipFilterStatusGq7StatusFlags>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<microstrain_inertial_msgs::msg::MipFilterStatusGq7StatusFlags>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_STATUS_GQ7_STATUS_FLAGS__TRAITS_HPP_
