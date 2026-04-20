// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from microstrain_inertial_msgs:msg/MipGnssSbasInfoSbasStatus.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GNSS_SBAS_INFO_SBAS_STATUS__TRAITS_HPP_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GNSS_SBAS_INFO_SBAS_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "microstrain_inertial_msgs/msg/detail/mip_gnss_sbas_info_sbas_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace microstrain_inertial_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MipGnssSbasInfoSbasStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: range_available
  {
    out << "range_available: ";
    rosidl_generator_traits::value_to_yaml(msg.range_available, out);
    out << ", ";
  }

  // member: corrections_available
  {
    out << "corrections_available: ";
    rosidl_generator_traits::value_to_yaml(msg.corrections_available, out);
    out << ", ";
  }

  // member: integrity_available
  {
    out << "integrity_available: ";
    rosidl_generator_traits::value_to_yaml(msg.integrity_available, out);
    out << ", ";
  }

  // member: test_mode
  {
    out << "test_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.test_mode, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MipGnssSbasInfoSbasStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: range_available
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "range_available: ";
    rosidl_generator_traits::value_to_yaml(msg.range_available, out);
    out << "\n";
  }

  // member: corrections_available
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "corrections_available: ";
    rosidl_generator_traits::value_to_yaml(msg.corrections_available, out);
    out << "\n";
  }

  // member: integrity_available
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "integrity_available: ";
    rosidl_generator_traits::value_to_yaml(msg.integrity_available, out);
    out << "\n";
  }

  // member: test_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "test_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.test_mode, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MipGnssSbasInfoSbasStatus & msg, bool use_flow_style = false)
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
  const microstrain_inertial_msgs::msg::MipGnssSbasInfoSbasStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  microstrain_inertial_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use microstrain_inertial_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const microstrain_inertial_msgs::msg::MipGnssSbasInfoSbasStatus & msg)
{
  return microstrain_inertial_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<microstrain_inertial_msgs::msg::MipGnssSbasInfoSbasStatus>()
{
  return "microstrain_inertial_msgs::msg::MipGnssSbasInfoSbasStatus";
}

template<>
inline const char * name<microstrain_inertial_msgs::msg::MipGnssSbasInfoSbasStatus>()
{
  return "microstrain_inertial_msgs/msg/MipGnssSbasInfoSbasStatus";
}

template<>
struct has_fixed_size<microstrain_inertial_msgs::msg::MipGnssSbasInfoSbasStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<microstrain_inertial_msgs::msg::MipGnssSbasInfoSbasStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<microstrain_inertial_msgs::msg::MipGnssSbasInfoSbasStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GNSS_SBAS_INFO_SBAS_STATUS__TRAITS_HPP_
