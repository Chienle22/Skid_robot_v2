// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from microstrain_inertial_msgs:msg/MipFilterAidingMeasurementSummaryIndicator.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_AIDING_MEASUREMENT_SUMMARY_INDICATOR__TRAITS_HPP_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_AIDING_MEASUREMENT_SUMMARY_INDICATOR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "microstrain_inertial_msgs/msg/detail/mip_filter_aiding_measurement_summary_indicator__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace microstrain_inertial_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MipFilterAidingMeasurementSummaryIndicator & msg,
  std::ostream & out)
{
  out << "{";
  // member: enabled
  {
    out << "enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.enabled, out);
    out << ", ";
  }

  // member: used
  {
    out << "used: ";
    rosidl_generator_traits::value_to_yaml(msg.used, out);
    out << ", ";
  }

  // member: residual_high_warning
  {
    out << "residual_high_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.residual_high_warning, out);
    out << ", ";
  }

  // member: sample_time_warning
  {
    out << "sample_time_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.sample_time_warning, out);
    out << ", ";
  }

  // member: configuration_error
  {
    out << "configuration_error: ";
    rosidl_generator_traits::value_to_yaml(msg.configuration_error, out);
    out << ", ";
  }

  // member: max_num_meas_exceeded
  {
    out << "max_num_meas_exceeded: ";
    rosidl_generator_traits::value_to_yaml(msg.max_num_meas_exceeded, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MipFilterAidingMeasurementSummaryIndicator & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.enabled, out);
    out << "\n";
  }

  // member: used
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "used: ";
    rosidl_generator_traits::value_to_yaml(msg.used, out);
    out << "\n";
  }

  // member: residual_high_warning
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "residual_high_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.residual_high_warning, out);
    out << "\n";
  }

  // member: sample_time_warning
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sample_time_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.sample_time_warning, out);
    out << "\n";
  }

  // member: configuration_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "configuration_error: ";
    rosidl_generator_traits::value_to_yaml(msg.configuration_error, out);
    out << "\n";
  }

  // member: max_num_meas_exceeded
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_num_meas_exceeded: ";
    rosidl_generator_traits::value_to_yaml(msg.max_num_meas_exceeded, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MipFilterAidingMeasurementSummaryIndicator & msg, bool use_flow_style = false)
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
  const microstrain_inertial_msgs::msg::MipFilterAidingMeasurementSummaryIndicator & msg,
  std::ostream & out, size_t indentation = 0)
{
  microstrain_inertial_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use microstrain_inertial_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const microstrain_inertial_msgs::msg::MipFilterAidingMeasurementSummaryIndicator & msg)
{
  return microstrain_inertial_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<microstrain_inertial_msgs::msg::MipFilterAidingMeasurementSummaryIndicator>()
{
  return "microstrain_inertial_msgs::msg::MipFilterAidingMeasurementSummaryIndicator";
}

template<>
inline const char * name<microstrain_inertial_msgs::msg::MipFilterAidingMeasurementSummaryIndicator>()
{
  return "microstrain_inertial_msgs/msg/MipFilterAidingMeasurementSummaryIndicator";
}

template<>
struct has_fixed_size<microstrain_inertial_msgs::msg::MipFilterAidingMeasurementSummaryIndicator>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<microstrain_inertial_msgs::msg::MipFilterAidingMeasurementSummaryIndicator>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<microstrain_inertial_msgs::msg::MipFilterAidingMeasurementSummaryIndicator>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_AIDING_MEASUREMENT_SUMMARY_INDICATOR__TRAITS_HPP_
