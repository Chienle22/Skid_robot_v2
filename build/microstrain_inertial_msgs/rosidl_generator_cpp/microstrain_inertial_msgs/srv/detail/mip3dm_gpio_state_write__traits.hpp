// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from microstrain_inertial_msgs:srv/Mip3dmGpioStateWrite.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__SRV__DETAIL__MIP3DM_GPIO_STATE_WRITE__TRAITS_HPP_
#define MICROSTRAIN_INERTIAL_MSGS__SRV__DETAIL__MIP3DM_GPIO_STATE_WRITE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "microstrain_inertial_msgs/srv/detail/mip3dm_gpio_state_write__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace microstrain_inertial_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const Mip3dmGpioStateWrite_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: pin
  {
    out << "pin: ";
    rosidl_generator_traits::value_to_yaml(msg.pin, out);
    out << ", ";
  }

  // member: state
  {
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Mip3dmGpioStateWrite_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pin
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pin: ";
    rosidl_generator_traits::value_to_yaml(msg.pin, out);
    out << "\n";
  }

  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Mip3dmGpioStateWrite_Request & msg, bool use_flow_style = false)
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
  const microstrain_inertial_msgs::srv::Mip3dmGpioStateWrite_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  microstrain_inertial_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use microstrain_inertial_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const microstrain_inertial_msgs::srv::Mip3dmGpioStateWrite_Request & msg)
{
  return microstrain_inertial_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<microstrain_inertial_msgs::srv::Mip3dmGpioStateWrite_Request>()
{
  return "microstrain_inertial_msgs::srv::Mip3dmGpioStateWrite_Request";
}

template<>
inline const char * name<microstrain_inertial_msgs::srv::Mip3dmGpioStateWrite_Request>()
{
  return "microstrain_inertial_msgs/srv/Mip3dmGpioStateWrite_Request";
}

template<>
struct has_fixed_size<microstrain_inertial_msgs::srv::Mip3dmGpioStateWrite_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<microstrain_inertial_msgs::srv::Mip3dmGpioStateWrite_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<microstrain_inertial_msgs::srv::Mip3dmGpioStateWrite_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace microstrain_inertial_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const Mip3dmGpioStateWrite_Response & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Mip3dmGpioStateWrite_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Mip3dmGpioStateWrite_Response & msg, bool use_flow_style = false)
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
  const microstrain_inertial_msgs::srv::Mip3dmGpioStateWrite_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  microstrain_inertial_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use microstrain_inertial_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const microstrain_inertial_msgs::srv::Mip3dmGpioStateWrite_Response & msg)
{
  return microstrain_inertial_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<microstrain_inertial_msgs::srv::Mip3dmGpioStateWrite_Response>()
{
  return "microstrain_inertial_msgs::srv::Mip3dmGpioStateWrite_Response";
}

template<>
inline const char * name<microstrain_inertial_msgs::srv::Mip3dmGpioStateWrite_Response>()
{
  return "microstrain_inertial_msgs/srv/Mip3dmGpioStateWrite_Response";
}

template<>
struct has_fixed_size<microstrain_inertial_msgs::srv::Mip3dmGpioStateWrite_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<microstrain_inertial_msgs::srv::Mip3dmGpioStateWrite_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<microstrain_inertial_msgs::srv::Mip3dmGpioStateWrite_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<microstrain_inertial_msgs::srv::Mip3dmGpioStateWrite>()
{
  return "microstrain_inertial_msgs::srv::Mip3dmGpioStateWrite";
}

template<>
inline const char * name<microstrain_inertial_msgs::srv::Mip3dmGpioStateWrite>()
{
  return "microstrain_inertial_msgs/srv/Mip3dmGpioStateWrite";
}

template<>
struct has_fixed_size<microstrain_inertial_msgs::srv::Mip3dmGpioStateWrite>
  : std::integral_constant<
    bool,
    has_fixed_size<microstrain_inertial_msgs::srv::Mip3dmGpioStateWrite_Request>::value &&
    has_fixed_size<microstrain_inertial_msgs::srv::Mip3dmGpioStateWrite_Response>::value
  >
{
};

template<>
struct has_bounded_size<microstrain_inertial_msgs::srv::Mip3dmGpioStateWrite>
  : std::integral_constant<
    bool,
    has_bounded_size<microstrain_inertial_msgs::srv::Mip3dmGpioStateWrite_Request>::value &&
    has_bounded_size<microstrain_inertial_msgs::srv::Mip3dmGpioStateWrite_Response>::value
  >
{
};

template<>
struct is_service<microstrain_inertial_msgs::srv::Mip3dmGpioStateWrite>
  : std::true_type
{
};

template<>
struct is_service_request<microstrain_inertial_msgs::srv::Mip3dmGpioStateWrite_Request>
  : std::true_type
{
};

template<>
struct is_service_response<microstrain_inertial_msgs::srv::Mip3dmGpioStateWrite_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MICROSTRAIN_INERTIAL_MSGS__SRV__DETAIL__MIP3DM_GPIO_STATE_WRITE__TRAITS_HPP_
