// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from microstrain_inertial_msgs:msg/MipFilterStatusGx5StatusFlags.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_STATUS_GX5_STATUS_FLAGS__BUILDER_HPP_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_STATUS_GX5_STATUS_FLAGS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "microstrain_inertial_msgs/msg/detail/mip_filter_status_gx5_status_flags__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace microstrain_inertial_msgs
{

namespace msg
{

namespace builder
{

class Init_MipFilterStatusGx5StatusFlags_run_mag_soft_iron_est_high_warning
{
public:
  explicit Init_MipFilterStatusGx5StatusFlags_run_mag_soft_iron_est_high_warning(::microstrain_inertial_msgs::msg::MipFilterStatusGx5StatusFlags & msg)
  : msg_(msg)
  {}
  ::microstrain_inertial_msgs::msg::MipFilterStatusGx5StatusFlags run_mag_soft_iron_est_high_warning(::microstrain_inertial_msgs::msg::MipFilterStatusGx5StatusFlags::_run_mag_soft_iron_est_high_warning_type arg)
  {
    msg_.run_mag_soft_iron_est_high_warning = std::move(arg);
    return std::move(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipFilterStatusGx5StatusFlags msg_;
};

class Init_MipFilterStatusGx5StatusFlags_run_mag_hard_iron_est_high_warning
{
public:
  explicit Init_MipFilterStatusGx5StatusFlags_run_mag_hard_iron_est_high_warning(::microstrain_inertial_msgs::msg::MipFilterStatusGx5StatusFlags & msg)
  : msg_(msg)
  {}
  Init_MipFilterStatusGx5StatusFlags_run_mag_soft_iron_est_high_warning run_mag_hard_iron_est_high_warning(::microstrain_inertial_msgs::msg::MipFilterStatusGx5StatusFlags::_run_mag_hard_iron_est_high_warning_type arg)
  {
    msg_.run_mag_hard_iron_est_high_warning = std::move(arg);
    return Init_MipFilterStatusGx5StatusFlags_run_mag_soft_iron_est_high_warning(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipFilterStatusGx5StatusFlags msg_;
};

class Init_MipFilterStatusGx5StatusFlags_run_ant_offset_correction_est_high_warning
{
public:
  explicit Init_MipFilterStatusGx5StatusFlags_run_ant_offset_correction_est_high_warning(::microstrain_inertial_msgs::msg::MipFilterStatusGx5StatusFlags & msg)
  : msg_(msg)
  {}
  Init_MipFilterStatusGx5StatusFlags_run_mag_hard_iron_est_high_warning run_ant_offset_correction_est_high_warning(::microstrain_inertial_msgs::msg::MipFilterStatusGx5StatusFlags::_run_ant_offset_correction_est_high_warning_type arg)
  {
    msg_.run_ant_offset_correction_est_high_warning = std::move(arg);
    return Init_MipFilterStatusGx5StatusFlags_run_mag_hard_iron_est_high_warning(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipFilterStatusGx5StatusFlags msg_;
};

class Init_MipFilterStatusGx5StatusFlags_run_mag_bias_est_high_warning
{
public:
  explicit Init_MipFilterStatusGx5StatusFlags_run_mag_bias_est_high_warning(::microstrain_inertial_msgs::msg::MipFilterStatusGx5StatusFlags & msg)
  : msg_(msg)
  {}
  Init_MipFilterStatusGx5StatusFlags_run_ant_offset_correction_est_high_warning run_mag_bias_est_high_warning(::microstrain_inertial_msgs::msg::MipFilterStatusGx5StatusFlags::_run_mag_bias_est_high_warning_type arg)
  {
    msg_.run_mag_bias_est_high_warning = std::move(arg);
    return Init_MipFilterStatusGx5StatusFlags_run_ant_offset_correction_est_high_warning(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipFilterStatusGx5StatusFlags msg_;
};

class Init_MipFilterStatusGx5StatusFlags_run_accel_scale_factor_est_high_warning
{
public:
  explicit Init_MipFilterStatusGx5StatusFlags_run_accel_scale_factor_est_high_warning(::microstrain_inertial_msgs::msg::MipFilterStatusGx5StatusFlags & msg)
  : msg_(msg)
  {}
  Init_MipFilterStatusGx5StatusFlags_run_mag_bias_est_high_warning run_accel_scale_factor_est_high_warning(::microstrain_inertial_msgs::msg::MipFilterStatusGx5StatusFlags::_run_accel_scale_factor_est_high_warning_type arg)
  {
    msg_.run_accel_scale_factor_est_high_warning = std::move(arg);
    return Init_MipFilterStatusGx5StatusFlags_run_mag_bias_est_high_warning(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipFilterStatusGx5StatusFlags msg_;
};

class Init_MipFilterStatusGx5StatusFlags_run_gyro_scale_factor_est_high_warning
{
public:
  explicit Init_MipFilterStatusGx5StatusFlags_run_gyro_scale_factor_est_high_warning(::microstrain_inertial_msgs::msg::MipFilterStatusGx5StatusFlags & msg)
  : msg_(msg)
  {}
  Init_MipFilterStatusGx5StatusFlags_run_accel_scale_factor_est_high_warning run_gyro_scale_factor_est_high_warning(::microstrain_inertial_msgs::msg::MipFilterStatusGx5StatusFlags::_run_gyro_scale_factor_est_high_warning_type arg)
  {
    msg_.run_gyro_scale_factor_est_high_warning = std::move(arg);
    return Init_MipFilterStatusGx5StatusFlags_run_accel_scale_factor_est_high_warning(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipFilterStatusGx5StatusFlags msg_;
};

class Init_MipFilterStatusGx5StatusFlags_run_accel_bias_est_high_warning
{
public:
  explicit Init_MipFilterStatusGx5StatusFlags_run_accel_bias_est_high_warning(::microstrain_inertial_msgs::msg::MipFilterStatusGx5StatusFlags & msg)
  : msg_(msg)
  {}
  Init_MipFilterStatusGx5StatusFlags_run_gyro_scale_factor_est_high_warning run_accel_bias_est_high_warning(::microstrain_inertial_msgs::msg::MipFilterStatusGx5StatusFlags::_run_accel_bias_est_high_warning_type arg)
  {
    msg_.run_accel_bias_est_high_warning = std::move(arg);
    return Init_MipFilterStatusGx5StatusFlags_run_gyro_scale_factor_est_high_warning(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipFilterStatusGx5StatusFlags msg_;
};

class Init_MipFilterStatusGx5StatusFlags_run_gyro_bias_est_high_warning
{
public:
  explicit Init_MipFilterStatusGx5StatusFlags_run_gyro_bias_est_high_warning(::microstrain_inertial_msgs::msg::MipFilterStatusGx5StatusFlags & msg)
  : msg_(msg)
  {}
  Init_MipFilterStatusGx5StatusFlags_run_accel_bias_est_high_warning run_gyro_bias_est_high_warning(::microstrain_inertial_msgs::msg::MipFilterStatusGx5StatusFlags::_run_gyro_bias_est_high_warning_type arg)
  {
    msg_.run_gyro_bias_est_high_warning = std::move(arg);
    return Init_MipFilterStatusGx5StatusFlags_run_accel_bias_est_high_warning(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipFilterStatusGx5StatusFlags msg_;
};

class Init_MipFilterStatusGx5StatusFlags_run_nan_in_solution_warning
{
public:
  explicit Init_MipFilterStatusGx5StatusFlags_run_nan_in_solution_warning(::microstrain_inertial_msgs::msg::MipFilterStatusGx5StatusFlags & msg)
  : msg_(msg)
  {}
  Init_MipFilterStatusGx5StatusFlags_run_gyro_bias_est_high_warning run_nan_in_solution_warning(::microstrain_inertial_msgs::msg::MipFilterStatusGx5StatusFlags::_run_nan_in_solution_warning_type arg)
  {
    msg_.run_nan_in_solution_warning = std::move(arg);
    return Init_MipFilterStatusGx5StatusFlags_run_gyro_bias_est_high_warning(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipFilterStatusGx5StatusFlags msg_;
};

class Init_MipFilterStatusGx5StatusFlags_run_attitude_covariance_warning
{
public:
  explicit Init_MipFilterStatusGx5StatusFlags_run_attitude_covariance_warning(::microstrain_inertial_msgs::msg::MipFilterStatusGx5StatusFlags & msg)
  : msg_(msg)
  {}
  Init_MipFilterStatusGx5StatusFlags_run_nan_in_solution_warning run_attitude_covariance_warning(::microstrain_inertial_msgs::msg::MipFilterStatusGx5StatusFlags::_run_attitude_covariance_warning_type arg)
  {
    msg_.run_attitude_covariance_warning = std::move(arg);
    return Init_MipFilterStatusGx5StatusFlags_run_nan_in_solution_warning(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipFilterStatusGx5StatusFlags msg_;
};

class Init_MipFilterStatusGx5StatusFlags_run_velocity_covariance_warning
{
public:
  explicit Init_MipFilterStatusGx5StatusFlags_run_velocity_covariance_warning(::microstrain_inertial_msgs::msg::MipFilterStatusGx5StatusFlags & msg)
  : msg_(msg)
  {}
  Init_MipFilterStatusGx5StatusFlags_run_attitude_covariance_warning run_velocity_covariance_warning(::microstrain_inertial_msgs::msg::MipFilterStatusGx5StatusFlags::_run_velocity_covariance_warning_type arg)
  {
    msg_.run_velocity_covariance_warning = std::move(arg);
    return Init_MipFilterStatusGx5StatusFlags_run_attitude_covariance_warning(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipFilterStatusGx5StatusFlags msg_;
};

class Init_MipFilterStatusGx5StatusFlags_run_position_covariance_warning
{
public:
  explicit Init_MipFilterStatusGx5StatusFlags_run_position_covariance_warning(::microstrain_inertial_msgs::msg::MipFilterStatusGx5StatusFlags & msg)
  : msg_(msg)
  {}
  Init_MipFilterStatusGx5StatusFlags_run_velocity_covariance_warning run_position_covariance_warning(::microstrain_inertial_msgs::msg::MipFilterStatusGx5StatusFlags::_run_position_covariance_warning_type arg)
  {
    msg_.run_position_covariance_warning = std::move(arg);
    return Init_MipFilterStatusGx5StatusFlags_run_velocity_covariance_warning(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipFilterStatusGx5StatusFlags msg_;
};

class Init_MipFilterStatusGx5StatusFlags_run_matrix_singularity
{
public:
  explicit Init_MipFilterStatusGx5StatusFlags_run_matrix_singularity(::microstrain_inertial_msgs::msg::MipFilterStatusGx5StatusFlags & msg)
  : msg_(msg)
  {}
  Init_MipFilterStatusGx5StatusFlags_run_position_covariance_warning run_matrix_singularity(::microstrain_inertial_msgs::msg::MipFilterStatusGx5StatusFlags::_run_matrix_singularity_type arg)
  {
    msg_.run_matrix_singularity = std::move(arg);
    return Init_MipFilterStatusGx5StatusFlags_run_position_covariance_warning(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipFilterStatusGx5StatusFlags msg_;
};

class Init_MipFilterStatusGx5StatusFlags_run_gps_unavailable
{
public:
  explicit Init_MipFilterStatusGx5StatusFlags_run_gps_unavailable(::microstrain_inertial_msgs::msg::MipFilterStatusGx5StatusFlags & msg)
  : msg_(msg)
  {}
  Init_MipFilterStatusGx5StatusFlags_run_matrix_singularity run_gps_unavailable(::microstrain_inertial_msgs::msg::MipFilterStatusGx5StatusFlags::_run_gps_unavailable_type arg)
  {
    msg_.run_gps_unavailable = std::move(arg);
    return Init_MipFilterStatusGx5StatusFlags_run_matrix_singularity(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipFilterStatusGx5StatusFlags msg_;
};

class Init_MipFilterStatusGx5StatusFlags_run_imu_unavailable
{
public:
  explicit Init_MipFilterStatusGx5StatusFlags_run_imu_unavailable(::microstrain_inertial_msgs::msg::MipFilterStatusGx5StatusFlags & msg)
  : msg_(msg)
  {}
  Init_MipFilterStatusGx5StatusFlags_run_gps_unavailable run_imu_unavailable(::microstrain_inertial_msgs::msg::MipFilterStatusGx5StatusFlags::_run_imu_unavailable_type arg)
  {
    msg_.run_imu_unavailable = std::move(arg);
    return Init_MipFilterStatusGx5StatusFlags_run_gps_unavailable(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipFilterStatusGx5StatusFlags msg_;
};

class Init_MipFilterStatusGx5StatusFlags_init_no_position_velocity
{
public:
  explicit Init_MipFilterStatusGx5StatusFlags_init_no_position_velocity(::microstrain_inertial_msgs::msg::MipFilterStatusGx5StatusFlags & msg)
  : msg_(msg)
  {}
  Init_MipFilterStatusGx5StatusFlags_run_imu_unavailable init_no_position_velocity(::microstrain_inertial_msgs::msg::MipFilterStatusGx5StatusFlags::_init_no_position_velocity_type arg)
  {
    msg_.init_no_position_velocity = std::move(arg);
    return Init_MipFilterStatusGx5StatusFlags_run_imu_unavailable(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipFilterStatusGx5StatusFlags msg_;
};

class Init_MipFilterStatusGx5StatusFlags_init_no_attitude
{
public:
  Init_MipFilterStatusGx5StatusFlags_init_no_attitude()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MipFilterStatusGx5StatusFlags_init_no_position_velocity init_no_attitude(::microstrain_inertial_msgs::msg::MipFilterStatusGx5StatusFlags::_init_no_attitude_type arg)
  {
    msg_.init_no_attitude = std::move(arg);
    return Init_MipFilterStatusGx5StatusFlags_init_no_position_velocity(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipFilterStatusGx5StatusFlags msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::microstrain_inertial_msgs::msg::MipFilterStatusGx5StatusFlags>()
{
  return microstrain_inertial_msgs::msg::builder::Init_MipFilterStatusGx5StatusFlags_init_no_attitude();
}

}  // namespace microstrain_inertial_msgs

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_STATUS_GX5_STATUS_FLAGS__BUILDER_HPP_
