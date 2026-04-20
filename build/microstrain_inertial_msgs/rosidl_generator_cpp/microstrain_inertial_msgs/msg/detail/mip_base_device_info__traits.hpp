// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from microstrain_inertial_msgs:msg/MipBaseDeviceInfo.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_BASE_DEVICE_INFO__TRAITS_HPP_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_BASE_DEVICE_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "microstrain_inertial_msgs/msg/detail/mip_base_device_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace microstrain_inertial_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MipBaseDeviceInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: firmware_version
  {
    out << "firmware_version: ";
    rosidl_generator_traits::value_to_yaml(msg.firmware_version, out);
    out << ", ";
  }

  // member: model_name
  {
    out << "model_name: ";
    rosidl_generator_traits::value_to_yaml(msg.model_name, out);
    out << ", ";
  }

  // member: model_number
  {
    out << "model_number: ";
    rosidl_generator_traits::value_to_yaml(msg.model_number, out);
    out << ", ";
  }

  // member: serial_number
  {
    out << "serial_number: ";
    rosidl_generator_traits::value_to_yaml(msg.serial_number, out);
    out << ", ";
  }

  // member: lot_number
  {
    out << "lot_number: ";
    rosidl_generator_traits::value_to_yaml(msg.lot_number, out);
    out << ", ";
  }

  // member: device_options
  {
    out << "device_options: ";
    rosidl_generator_traits::value_to_yaml(msg.device_options, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MipBaseDeviceInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: firmware_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "firmware_version: ";
    rosidl_generator_traits::value_to_yaml(msg.firmware_version, out);
    out << "\n";
  }

  // member: model_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "model_name: ";
    rosidl_generator_traits::value_to_yaml(msg.model_name, out);
    out << "\n";
  }

  // member: model_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "model_number: ";
    rosidl_generator_traits::value_to_yaml(msg.model_number, out);
    out << "\n";
  }

  // member: serial_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "serial_number: ";
    rosidl_generator_traits::value_to_yaml(msg.serial_number, out);
    out << "\n";
  }

  // member: lot_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lot_number: ";
    rosidl_generator_traits::value_to_yaml(msg.lot_number, out);
    out << "\n";
  }

  // member: device_options
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "device_options: ";
    rosidl_generator_traits::value_to_yaml(msg.device_options, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MipBaseDeviceInfo & msg, bool use_flow_style = false)
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
  const microstrain_inertial_msgs::msg::MipBaseDeviceInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  microstrain_inertial_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use microstrain_inertial_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const microstrain_inertial_msgs::msg::MipBaseDeviceInfo & msg)
{
  return microstrain_inertial_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<microstrain_inertial_msgs::msg::MipBaseDeviceInfo>()
{
  return "microstrain_inertial_msgs::msg::MipBaseDeviceInfo";
}

template<>
inline const char * name<microstrain_inertial_msgs::msg::MipBaseDeviceInfo>()
{
  return "microstrain_inertial_msgs/msg/MipBaseDeviceInfo";
}

template<>
struct has_fixed_size<microstrain_inertial_msgs::msg::MipBaseDeviceInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<microstrain_inertial_msgs::msg::MipBaseDeviceInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<microstrain_inertial_msgs::msg::MipBaseDeviceInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_BASE_DEVICE_INFO__TRAITS_HPP_
