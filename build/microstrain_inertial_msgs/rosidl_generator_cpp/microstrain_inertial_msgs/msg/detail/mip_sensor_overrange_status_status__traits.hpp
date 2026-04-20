// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from microstrain_inertial_msgs:msg/MipSensorOverrangeStatusStatus.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_SENSOR_OVERRANGE_STATUS_STATUS__TRAITS_HPP_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_SENSOR_OVERRANGE_STATUS_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "microstrain_inertial_msgs/msg/detail/mip_sensor_overrange_status_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace microstrain_inertial_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MipSensorOverrangeStatusStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: accel_x
  {
    out << "accel_x: ";
    rosidl_generator_traits::value_to_yaml(msg.accel_x, out);
    out << ", ";
  }

  // member: accel_y
  {
    out << "accel_y: ";
    rosidl_generator_traits::value_to_yaml(msg.accel_y, out);
    out << ", ";
  }

  // member: accel_z
  {
    out << "accel_z: ";
    rosidl_generator_traits::value_to_yaml(msg.accel_z, out);
    out << ", ";
  }

  // member: gyro_x
  {
    out << "gyro_x: ";
    rosidl_generator_traits::value_to_yaml(msg.gyro_x, out);
    out << ", ";
  }

  // member: gyro_y
  {
    out << "gyro_y: ";
    rosidl_generator_traits::value_to_yaml(msg.gyro_y, out);
    out << ", ";
  }

  // member: gyro_z
  {
    out << "gyro_z: ";
    rosidl_generator_traits::value_to_yaml(msg.gyro_z, out);
    out << ", ";
  }

  // member: mag_x
  {
    out << "mag_x: ";
    rosidl_generator_traits::value_to_yaml(msg.mag_x, out);
    out << ", ";
  }

  // member: mag_y
  {
    out << "mag_y: ";
    rosidl_generator_traits::value_to_yaml(msg.mag_y, out);
    out << ", ";
  }

  // member: mag_z
  {
    out << "mag_z: ";
    rosidl_generator_traits::value_to_yaml(msg.mag_z, out);
    out << ", ";
  }

  // member: press
  {
    out << "press: ";
    rosidl_generator_traits::value_to_yaml(msg.press, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MipSensorOverrangeStatusStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accel_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accel_x: ";
    rosidl_generator_traits::value_to_yaml(msg.accel_x, out);
    out << "\n";
  }

  // member: accel_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accel_y: ";
    rosidl_generator_traits::value_to_yaml(msg.accel_y, out);
    out << "\n";
  }

  // member: accel_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accel_z: ";
    rosidl_generator_traits::value_to_yaml(msg.accel_z, out);
    out << "\n";
  }

  // member: gyro_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gyro_x: ";
    rosidl_generator_traits::value_to_yaml(msg.gyro_x, out);
    out << "\n";
  }

  // member: gyro_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gyro_y: ";
    rosidl_generator_traits::value_to_yaml(msg.gyro_y, out);
    out << "\n";
  }

  // member: gyro_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gyro_z: ";
    rosidl_generator_traits::value_to_yaml(msg.gyro_z, out);
    out << "\n";
  }

  // member: mag_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mag_x: ";
    rosidl_generator_traits::value_to_yaml(msg.mag_x, out);
    out << "\n";
  }

  // member: mag_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mag_y: ";
    rosidl_generator_traits::value_to_yaml(msg.mag_y, out);
    out << "\n";
  }

  // member: mag_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mag_z: ";
    rosidl_generator_traits::value_to_yaml(msg.mag_z, out);
    out << "\n";
  }

  // member: press
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "press: ";
    rosidl_generator_traits::value_to_yaml(msg.press, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MipSensorOverrangeStatusStatus & msg, bool use_flow_style = false)
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
  const microstrain_inertial_msgs::msg::MipSensorOverrangeStatusStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  microstrain_inertial_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use microstrain_inertial_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const microstrain_inertial_msgs::msg::MipSensorOverrangeStatusStatus & msg)
{
  return microstrain_inertial_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<microstrain_inertial_msgs::msg::MipSensorOverrangeStatusStatus>()
{
  return "microstrain_inertial_msgs::msg::MipSensorOverrangeStatusStatus";
}

template<>
inline const char * name<microstrain_inertial_msgs::msg::MipSensorOverrangeStatusStatus>()
{
  return "microstrain_inertial_msgs/msg/MipSensorOverrangeStatusStatus";
}

template<>
struct has_fixed_size<microstrain_inertial_msgs::msg::MipSensorOverrangeStatusStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<microstrain_inertial_msgs::msg::MipSensorOverrangeStatusStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<microstrain_inertial_msgs::msg::MipSensorOverrangeStatusStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_SENSOR_OVERRANGE_STATUS_STATUS__TRAITS_HPP_
