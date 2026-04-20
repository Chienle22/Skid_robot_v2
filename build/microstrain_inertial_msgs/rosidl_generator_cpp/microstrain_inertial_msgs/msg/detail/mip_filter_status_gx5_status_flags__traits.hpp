// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from microstrain_inertial_msgs:msg/MipFilterStatusGx5StatusFlags.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_STATUS_GX5_STATUS_FLAGS__TRAITS_HPP_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_STATUS_GX5_STATUS_FLAGS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "microstrain_inertial_msgs/msg/detail/mip_filter_status_gx5_status_flags__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace microstrain_inertial_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MipFilterStatusGx5StatusFlags & msg,
  std::ostream & out)
{
  out << "{";
  // member: init_no_attitude
  {
    out << "init_no_attitude: ";
    rosidl_generator_traits::value_to_yaml(msg.init_no_attitude, out);
    out << ", ";
  }

  // member: init_no_position_velocity
  {
    out << "init_no_position_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.init_no_position_velocity, out);
    out << ", ";
  }

  // member: run_imu_unavailable
  {
    out << "run_imu_unavailable: ";
    rosidl_generator_traits::value_to_yaml(msg.run_imu_unavailable, out);
    out << ", ";
  }

  // member: run_gps_unavailable
  {
    out << "run_gps_unavailable: ";
    rosidl_generator_traits::value_to_yaml(msg.run_gps_unavailable, out);
    out << ", ";
  }

  // member: run_matrix_singularity
  {
    out << "run_matrix_singularity: ";
    rosidl_generator_traits::value_to_yaml(msg.run_matrix_singularity, out);
    out << ", ";
  }

  // member: run_position_covariance_warning
  {
    out << "run_position_covariance_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.run_position_covariance_warning, out);
    out << ", ";
  }

  // member: run_velocity_covariance_warning
  {
    out << "run_velocity_covariance_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.run_velocity_covariance_warning, out);
    out << ", ";
  }

  // member: run_attitude_covariance_warning
  {
    out << "run_attitude_covariance_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.run_attitude_covariance_warning, out);
    out << ", ";
  }

  // member: run_nan_in_solution_warning
  {
    out << "run_nan_in_solution_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.run_nan_in_solution_warning, out);
    out << ", ";
  }

  // member: run_gyro_bias_est_high_warning
  {
    out << "run_gyro_bias_est_high_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.run_gyro_bias_est_high_warning, out);
    out << ", ";
  }

  // member: run_accel_bias_est_high_warning
  {
    out << "run_accel_bias_est_high_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.run_accel_bias_est_high_warning, out);
    out << ", ";
  }

  // member: run_gyro_scale_factor_est_high_warning
  {
    out << "run_gyro_scale_factor_est_high_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.run_gyro_scale_factor_est_high_warning, out);
    out << ", ";
  }

  // member: run_accel_scale_factor_est_high_warning
  {
    out << "run_accel_scale_factor_est_high_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.run_accel_scale_factor_est_high_warning, out);
    out << ", ";
  }

  // member: run_mag_bias_est_high_warning
  {
    out << "run_mag_bias_est_high_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.run_mag_bias_est_high_warning, out);
    out << ", ";
  }

  // member: run_ant_offset_correction_est_high_warning
  {
    out << "run_ant_offset_correction_est_high_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.run_ant_offset_correction_est_high_warning, out);
    out << ", ";
  }

  // member: run_mag_hard_iron_est_high_warning
  {
    out << "run_mag_hard_iron_est_high_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.run_mag_hard_iron_est_high_warning, out);
    out << ", ";
  }

  // member: run_mag_soft_iron_est_high_warning
  {
    out << "run_mag_soft_iron_est_high_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.run_mag_soft_iron_est_high_warning, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MipFilterStatusGx5StatusFlags & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: init_no_attitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "init_no_attitude: ";
    rosidl_generator_traits::value_to_yaml(msg.init_no_attitude, out);
    out << "\n";
  }

  // member: init_no_position_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "init_no_position_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.init_no_position_velocity, out);
    out << "\n";
  }

  // member: run_imu_unavailable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "run_imu_unavailable: ";
    rosidl_generator_traits::value_to_yaml(msg.run_imu_unavailable, out);
    out << "\n";
  }

  // member: run_gps_unavailable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "run_gps_unavailable: ";
    rosidl_generator_traits::value_to_yaml(msg.run_gps_unavailable, out);
    out << "\n";
  }

  // member: run_matrix_singularity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "run_matrix_singularity: ";
    rosidl_generator_traits::value_to_yaml(msg.run_matrix_singularity, out);
    out << "\n";
  }

  // member: run_position_covariance_warning
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "run_position_covariance_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.run_position_covariance_warning, out);
    out << "\n";
  }

  // member: run_velocity_covariance_warning
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "run_velocity_covariance_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.run_velocity_covariance_warning, out);
    out << "\n";
  }

  // member: run_attitude_covariance_warning
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "run_attitude_covariance_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.run_attitude_covariance_warning, out);
    out << "\n";
  }

  // member: run_nan_in_solution_warning
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "run_nan_in_solution_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.run_nan_in_solution_warning, out);
    out << "\n";
  }

  // member: run_gyro_bias_est_high_warning
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "run_gyro_bias_est_high_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.run_gyro_bias_est_high_warning, out);
    out << "\n";
  }

  // member: run_accel_bias_est_high_warning
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "run_accel_bias_est_high_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.run_accel_bias_est_high_warning, out);
    out << "\n";
  }

  // member: run_gyro_scale_factor_est_high_warning
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "run_gyro_scale_factor_est_high_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.run_gyro_scale_factor_est_high_warning, out);
    out << "\n";
  }

  // member: run_accel_scale_factor_est_high_warning
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "run_accel_scale_factor_est_high_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.run_accel_scale_factor_est_high_warning, out);
    out << "\n";
  }

  // member: run_mag_bias_est_high_warning
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "run_mag_bias_est_high_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.run_mag_bias_est_high_warning, out);
    out << "\n";
  }

  // member: run_ant_offset_correction_est_high_warning
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "run_ant_offset_correction_est_high_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.run_ant_offset_correction_est_high_warning, out);
    out << "\n";
  }

  // member: run_mag_hard_iron_est_high_warning
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "run_mag_hard_iron_est_high_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.run_mag_hard_iron_est_high_warning, out);
    out << "\n";
  }

  // member: run_mag_soft_iron_est_high_warning
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "run_mag_soft_iron_est_high_warning: ";
    rosidl_generator_traits::value_to_yaml(msg.run_mag_soft_iron_est_high_warning, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MipFilterStatusGx5StatusFlags & msg, bool use_flow_style = false)
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
  const microstrain_inertial_msgs::msg::MipFilterStatusGx5StatusFlags & msg,
  std::ostream & out, size_t indentation = 0)
{
  microstrain_inertial_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use microstrain_inertial_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const microstrain_inertial_msgs::msg::MipFilterStatusGx5StatusFlags & msg)
{
  return microstrain_inertial_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<microstrain_inertial_msgs::msg::MipFilterStatusGx5StatusFlags>()
{
  return "microstrain_inertial_msgs::msg::MipFilterStatusGx5StatusFlags";
}

template<>
inline const char * name<microstrain_inertial_msgs::msg::MipFilterStatusGx5StatusFlags>()
{
  return "microstrain_inertial_msgs/msg/MipFilterStatusGx5StatusFlags";
}

template<>
struct has_fixed_size<microstrain_inertial_msgs::msg::MipFilterStatusGx5StatusFlags>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<microstrain_inertial_msgs::msg::MipFilterStatusGx5StatusFlags>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<microstrain_inertial_msgs::msg::MipFilterStatusGx5StatusFlags>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_STATUS_GX5_STATUS_FLAGS__TRAITS_HPP_
