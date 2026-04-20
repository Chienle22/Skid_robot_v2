// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from microstrain_inertial_msgs:srv/MipBaseGetDeviceInformation.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__SRV__DETAIL__MIP_BASE_GET_DEVICE_INFORMATION__TRAITS_HPP_
#define MICROSTRAIN_INERTIAL_MSGS__SRV__DETAIL__MIP_BASE_GET_DEVICE_INFORMATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "microstrain_inertial_msgs/srv/detail/mip_base_get_device_information__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace microstrain_inertial_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const MipBaseGetDeviceInformation_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MipBaseGetDeviceInformation_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MipBaseGetDeviceInformation_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace microstrain_inertial_msgs

namespace rosidl_generator_traits
{

[[deprecated("use microstrain_inertial_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const microstrain_inertial_msgs::srv::MipBaseGetDeviceInformation_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  microstrain_inertial_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use microstrain_inertial_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const microstrain_inertial_msgs::srv::MipBaseGetDeviceInformation_Request & msg)
{
  return microstrain_inertial_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<microstrain_inertial_msgs::srv::MipBaseGetDeviceInformation_Request>()
{
  return "microstrain_inertial_msgs::srv::MipBaseGetDeviceInformation_Request";
}

template<>
inline const char * name<microstrain_inertial_msgs::srv::MipBaseGetDeviceInformation_Request>()
{
  return "microstrain_inertial_msgs/srv/MipBaseGetDeviceInformation_Request";
}

template<>
struct has_fixed_size<microstrain_inertial_msgs::srv::MipBaseGetDeviceInformation_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<microstrain_inertial_msgs::srv::MipBaseGetDeviceInformation_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<microstrain_inertial_msgs::srv::MipBaseGetDeviceInformation_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'device_info'
#include "microstrain_inertial_msgs/msg/detail/mip_base_device_info__traits.hpp"

namespace microstrain_inertial_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const MipBaseGetDeviceInformation_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: device_info
  {
    out << "device_info: ";
    to_flow_style_yaml(msg.device_info, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MipBaseGetDeviceInformation_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: device_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "device_info:\n";
    to_block_style_yaml(msg.device_info, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MipBaseGetDeviceInformation_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace microstrain_inertial_msgs

namespace rosidl_generator_traits
{

[[deprecated("use microstrain_inertial_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const microstrain_inertial_msgs::srv::MipBaseGetDeviceInformation_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  microstrain_inertial_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use microstrain_inertial_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const microstrain_inertial_msgs::srv::MipBaseGetDeviceInformation_Response & msg)
{
  return microstrain_inertial_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<microstrain_inertial_msgs::srv::MipBaseGetDeviceInformation_Response>()
{
  return "microstrain_inertial_msgs::srv::MipBaseGetDeviceInformation_Response";
}

template<>
inline const char * name<microstrain_inertial_msgs::srv::MipBaseGetDeviceInformation_Response>()
{
  return "microstrain_inertial_msgs/srv/MipBaseGetDeviceInformation_Response";
}

template<>
struct has_fixed_size<microstrain_inertial_msgs::srv::MipBaseGetDeviceInformation_Response>
  : std::integral_constant<bool, has_fixed_size<microstrain_inertial_msgs::msg::MipBaseDeviceInfo>::value> {};

template<>
struct has_bounded_size<microstrain_inertial_msgs::srv::MipBaseGetDeviceInformation_Response>
  : std::integral_constant<bool, has_bounded_size<microstrain_inertial_msgs::msg::MipBaseDeviceInfo>::value> {};

template<>
struct is_message<microstrain_inertial_msgs::srv::MipBaseGetDeviceInformation_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<microstrain_inertial_msgs::srv::MipBaseGetDeviceInformation>()
{
  return "microstrain_inertial_msgs::srv::MipBaseGetDeviceInformation";
}

template<>
inline const char * name<microstrain_inertial_msgs::srv::MipBaseGetDeviceInformation>()
{
  return "microstrain_inertial_msgs/srv/MipBaseGetDeviceInformation";
}

template<>
struct has_fixed_size<microstrain_inertial_msgs::srv::MipBaseGetDeviceInformation>
  : std::integral_constant<
    bool,
    has_fixed_size<microstrain_inertial_msgs::srv::MipBaseGetDeviceInformation_Request>::value &&
    has_fixed_size<microstrain_inertial_msgs::srv::MipBaseGetDeviceInformation_Response>::value
  >
{
};

template<>
struct has_bounded_size<microstrain_inertial_msgs::srv::MipBaseGetDeviceInformation>
  : std::integral_constant<
    bool,
    has_bounded_size<microstrain_inertial_msgs::srv::MipBaseGetDeviceInformation_Request>::value &&
    has_bounded_size<microstrain_inertial_msgs::srv::MipBaseGetDeviceInformation_Response>::value
  >
{
};

template<>
struct is_service<microstrain_inertial_msgs::srv::MipBaseGetDeviceInformation>
  : std::true_type
{
};

template<>
struct is_service_request<microstrain_inertial_msgs::srv::MipBaseGetDeviceInformation_Request>
  : std::true_type
{
};

template<>
struct is_service_response<microstrain_inertial_msgs::srv::MipBaseGetDeviceInformation_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MICROSTRAIN_INERTIAL_MSGS__SRV__DETAIL__MIP_BASE_GET_DEVICE_INFORMATION__TRAITS_HPP_
