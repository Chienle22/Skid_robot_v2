// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from microstrain_inertial_msgs:msg/HumanReadableStatus.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__HUMAN_READABLE_STATUS__TRAITS_HPP_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__HUMAN_READABLE_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "microstrain_inertial_msgs/msg/detail/human_readable_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'device_info'
#include "microstrain_inertial_msgs/msg/detail/mip_base_device_info__traits.hpp"

namespace microstrain_inertial_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const HumanReadableStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: device_info
  {
    out << "device_info: ";
    to_flow_style_yaml(msg.device_info, out);
    out << ", ";
  }

  // member: gnss_state
  {
    out << "gnss_state: ";
    rosidl_generator_traits::value_to_yaml(msg.gnss_state, out);
    out << ", ";
  }

  // member: dual_antenna_fix_type
  {
    out << "dual_antenna_fix_type: ";
    rosidl_generator_traits::value_to_yaml(msg.dual_antenna_fix_type, out);
    out << ", ";
  }

  // member: filter_state
  {
    out << "filter_state: ";
    rosidl_generator_traits::value_to_yaml(msg.filter_state, out);
    out << ", ";
  }

  // member: status_flags
  {
    if (msg.status_flags.size() == 0) {
      out << "status_flags: []";
    } else {
      out << "status_flags: [";
      size_t pending_items = msg.status_flags.size();
      for (auto item : msg.status_flags) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: continuous_bit_flags
  {
    if (msg.continuous_bit_flags.size() == 0) {
      out << "continuous_bit_flags: []";
    } else {
      out << "continuous_bit_flags: [";
      size_t pending_items = msg.continuous_bit_flags.size();
      for (auto item : msg.continuous_bit_flags) {
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
  const HumanReadableStatus & msg,
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

  // member: device_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "device_info:\n";
    to_block_style_yaml(msg.device_info, out, indentation + 2);
  }

  // member: gnss_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gnss_state: ";
    rosidl_generator_traits::value_to_yaml(msg.gnss_state, out);
    out << "\n";
  }

  // member: dual_antenna_fix_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dual_antenna_fix_type: ";
    rosidl_generator_traits::value_to_yaml(msg.dual_antenna_fix_type, out);
    out << "\n";
  }

  // member: filter_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "filter_state: ";
    rosidl_generator_traits::value_to_yaml(msg.filter_state, out);
    out << "\n";
  }

  // member: status_flags
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.status_flags.size() == 0) {
      out << "status_flags: []\n";
    } else {
      out << "status_flags:\n";
      for (auto item : msg.status_flags) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: continuous_bit_flags
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.continuous_bit_flags.size() == 0) {
      out << "continuous_bit_flags: []\n";
    } else {
      out << "continuous_bit_flags:\n";
      for (auto item : msg.continuous_bit_flags) {
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

inline std::string to_yaml(const HumanReadableStatus & msg, bool use_flow_style = false)
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
  const microstrain_inertial_msgs::msg::HumanReadableStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  microstrain_inertial_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use microstrain_inertial_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const microstrain_inertial_msgs::msg::HumanReadableStatus & msg)
{
  return microstrain_inertial_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<microstrain_inertial_msgs::msg::HumanReadableStatus>()
{
  return "microstrain_inertial_msgs::msg::HumanReadableStatus";
}

template<>
inline const char * name<microstrain_inertial_msgs::msg::HumanReadableStatus>()
{
  return "microstrain_inertial_msgs/msg/HumanReadableStatus";
}

template<>
struct has_fixed_size<microstrain_inertial_msgs::msg::HumanReadableStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<microstrain_inertial_msgs::msg::HumanReadableStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<microstrain_inertial_msgs::msg::HumanReadableStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__HUMAN_READABLE_STATUS__TRAITS_HPP_
