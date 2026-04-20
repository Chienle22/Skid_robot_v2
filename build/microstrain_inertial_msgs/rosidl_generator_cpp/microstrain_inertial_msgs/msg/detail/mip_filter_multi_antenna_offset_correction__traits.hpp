// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from microstrain_inertial_msgs:msg/MipFilterMultiAntennaOffsetCorrection.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_MULTI_ANTENNA_OFFSET_CORRECTION__TRAITS_HPP_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_MULTI_ANTENNA_OFFSET_CORRECTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "microstrain_inertial_msgs/msg/detail/mip_filter_multi_antenna_offset_correction__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "microstrain_inertial_msgs/msg/detail/mip_header__traits.hpp"

namespace microstrain_inertial_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MipFilterMultiAntennaOffsetCorrection & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: receiver_id
  {
    out << "receiver_id: ";
    rosidl_generator_traits::value_to_yaml(msg.receiver_id, out);
    out << ", ";
  }

  // member: offset
  {
    if (msg.offset.size() == 0) {
      out << "offset: []";
    } else {
      out << "offset: [";
      size_t pending_items = msg.offset.size();
      for (auto item : msg.offset) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MipFilterMultiAntennaOffsetCorrection & msg,
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

  // member: receiver_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "receiver_id: ";
    rosidl_generator_traits::value_to_yaml(msg.receiver_id, out);
    out << "\n";
  }

  // member: offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.offset.size() == 0) {
      out << "offset: []\n";
    } else {
      out << "offset:\n";
      for (auto item : msg.offset) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MipFilterMultiAntennaOffsetCorrection & msg, bool use_flow_style = false)
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
  const microstrain_inertial_msgs::msg::MipFilterMultiAntennaOffsetCorrection & msg,
  std::ostream & out, size_t indentation = 0)
{
  microstrain_inertial_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use microstrain_inertial_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const microstrain_inertial_msgs::msg::MipFilterMultiAntennaOffsetCorrection & msg)
{
  return microstrain_inertial_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<microstrain_inertial_msgs::msg::MipFilterMultiAntennaOffsetCorrection>()
{
  return "microstrain_inertial_msgs::msg::MipFilterMultiAntennaOffsetCorrection";
}

template<>
inline const char * name<microstrain_inertial_msgs::msg::MipFilterMultiAntennaOffsetCorrection>()
{
  return "microstrain_inertial_msgs/msg/MipFilterMultiAntennaOffsetCorrection";
}

template<>
struct has_fixed_size<microstrain_inertial_msgs::msg::MipFilterMultiAntennaOffsetCorrection>
  : std::integral_constant<bool, has_fixed_size<microstrain_inertial_msgs::msg::MipHeader>::value> {};

template<>
struct has_bounded_size<microstrain_inertial_msgs::msg::MipFilterMultiAntennaOffsetCorrection>
  : std::integral_constant<bool, has_bounded_size<microstrain_inertial_msgs::msg::MipHeader>::value> {};

template<>
struct is_message<microstrain_inertial_msgs::msg::MipFilterMultiAntennaOffsetCorrection>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_MULTI_ANTENNA_OFFSET_CORRECTION__TRAITS_HPP_
