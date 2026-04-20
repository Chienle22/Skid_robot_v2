// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from microstrain_inertial_msgs:srv/RawFileConfigRead.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__SRV__DETAIL__RAW_FILE_CONFIG_READ__TRAITS_HPP_
#define MICROSTRAIN_INERTIAL_MSGS__SRV__DETAIL__RAW_FILE_CONFIG_READ__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "microstrain_inertial_msgs/srv/detail/raw_file_config_read__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace microstrain_inertial_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const RawFileConfigRead_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RawFileConfigRead_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RawFileConfigRead_Request & msg, bool use_flow_style = false)
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
  const microstrain_inertial_msgs::srv::RawFileConfigRead_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  microstrain_inertial_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use microstrain_inertial_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const microstrain_inertial_msgs::srv::RawFileConfigRead_Request & msg)
{
  return microstrain_inertial_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<microstrain_inertial_msgs::srv::RawFileConfigRead_Request>()
{
  return "microstrain_inertial_msgs::srv::RawFileConfigRead_Request";
}

template<>
inline const char * name<microstrain_inertial_msgs::srv::RawFileConfigRead_Request>()
{
  return "microstrain_inertial_msgs/srv/RawFileConfigRead_Request";
}

template<>
struct has_fixed_size<microstrain_inertial_msgs::srv::RawFileConfigRead_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<microstrain_inertial_msgs::srv::RawFileConfigRead_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<microstrain_inertial_msgs::srv::RawFileConfigRead_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace microstrain_inertial_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const RawFileConfigRead_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: enable
  {
    out << "enable: ";
    rosidl_generator_traits::value_to_yaml(msg.enable, out);
    out << ", ";
  }

  // member: file_path
  {
    out << "file_path: ";
    rosidl_generator_traits::value_to_yaml(msg.file_path, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RawFileConfigRead_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: enable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enable: ";
    rosidl_generator_traits::value_to_yaml(msg.enable, out);
    out << "\n";
  }

  // member: file_path
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "file_path: ";
    rosidl_generator_traits::value_to_yaml(msg.file_path, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RawFileConfigRead_Response & msg, bool use_flow_style = false)
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
  const microstrain_inertial_msgs::srv::RawFileConfigRead_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  microstrain_inertial_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use microstrain_inertial_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const microstrain_inertial_msgs::srv::RawFileConfigRead_Response & msg)
{
  return microstrain_inertial_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<microstrain_inertial_msgs::srv::RawFileConfigRead_Response>()
{
  return "microstrain_inertial_msgs::srv::RawFileConfigRead_Response";
}

template<>
inline const char * name<microstrain_inertial_msgs::srv::RawFileConfigRead_Response>()
{
  return "microstrain_inertial_msgs/srv/RawFileConfigRead_Response";
}

template<>
struct has_fixed_size<microstrain_inertial_msgs::srv::RawFileConfigRead_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<microstrain_inertial_msgs::srv::RawFileConfigRead_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<microstrain_inertial_msgs::srv::RawFileConfigRead_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<microstrain_inertial_msgs::srv::RawFileConfigRead>()
{
  return "microstrain_inertial_msgs::srv::RawFileConfigRead";
}

template<>
inline const char * name<microstrain_inertial_msgs::srv::RawFileConfigRead>()
{
  return "microstrain_inertial_msgs/srv/RawFileConfigRead";
}

template<>
struct has_fixed_size<microstrain_inertial_msgs::srv::RawFileConfigRead>
  : std::integral_constant<
    bool,
    has_fixed_size<microstrain_inertial_msgs::srv::RawFileConfigRead_Request>::value &&
    has_fixed_size<microstrain_inertial_msgs::srv::RawFileConfigRead_Response>::value
  >
{
};

template<>
struct has_bounded_size<microstrain_inertial_msgs::srv::RawFileConfigRead>
  : std::integral_constant<
    bool,
    has_bounded_size<microstrain_inertial_msgs::srv::RawFileConfigRead_Request>::value &&
    has_bounded_size<microstrain_inertial_msgs::srv::RawFileConfigRead_Response>::value
  >
{
};

template<>
struct is_service<microstrain_inertial_msgs::srv::RawFileConfigRead>
  : std::true_type
{
};

template<>
struct is_service_request<microstrain_inertial_msgs::srv::RawFileConfigRead_Request>
  : std::true_type
{
};

template<>
struct is_service_response<microstrain_inertial_msgs::srv::RawFileConfigRead_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MICROSTRAIN_INERTIAL_MSGS__SRV__DETAIL__RAW_FILE_CONFIG_READ__TRAITS_HPP_
