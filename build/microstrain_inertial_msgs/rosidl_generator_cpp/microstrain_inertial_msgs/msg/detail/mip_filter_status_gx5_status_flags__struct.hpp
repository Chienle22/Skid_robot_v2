// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from microstrain_inertial_msgs:msg/MipFilterStatusGx5StatusFlags.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_STATUS_GX5_STATUS_FLAGS__STRUCT_HPP_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_STATUS_GX5_STATUS_FLAGS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags __attribute__((deprecated))
#else
# define DEPRECATED__microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags __declspec(deprecated)
#endif

namespace microstrain_inertial_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MipFilterStatusGx5StatusFlags_
{
  using Type = MipFilterStatusGx5StatusFlags_<ContainerAllocator>;

  explicit MipFilterStatusGx5StatusFlags_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->init_no_attitude = false;
      this->init_no_position_velocity = false;
      this->run_imu_unavailable = false;
      this->run_gps_unavailable = false;
      this->run_matrix_singularity = false;
      this->run_position_covariance_warning = false;
      this->run_velocity_covariance_warning = false;
      this->run_attitude_covariance_warning = false;
      this->run_nan_in_solution_warning = false;
      this->run_gyro_bias_est_high_warning = false;
      this->run_accel_bias_est_high_warning = false;
      this->run_gyro_scale_factor_est_high_warning = false;
      this->run_accel_scale_factor_est_high_warning = false;
      this->run_mag_bias_est_high_warning = false;
      this->run_ant_offset_correction_est_high_warning = false;
      this->run_mag_hard_iron_est_high_warning = false;
      this->run_mag_soft_iron_est_high_warning = false;
    }
  }

  explicit MipFilterStatusGx5StatusFlags_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->init_no_attitude = false;
      this->init_no_position_velocity = false;
      this->run_imu_unavailable = false;
      this->run_gps_unavailable = false;
      this->run_matrix_singularity = false;
      this->run_position_covariance_warning = false;
      this->run_velocity_covariance_warning = false;
      this->run_attitude_covariance_warning = false;
      this->run_nan_in_solution_warning = false;
      this->run_gyro_bias_est_high_warning = false;
      this->run_accel_bias_est_high_warning = false;
      this->run_gyro_scale_factor_est_high_warning = false;
      this->run_accel_scale_factor_est_high_warning = false;
      this->run_mag_bias_est_high_warning = false;
      this->run_ant_offset_correction_est_high_warning = false;
      this->run_mag_hard_iron_est_high_warning = false;
      this->run_mag_soft_iron_est_high_warning = false;
    }
  }

  // field types and members
  using _init_no_attitude_type =
    bool;
  _init_no_attitude_type init_no_attitude;
  using _init_no_position_velocity_type =
    bool;
  _init_no_position_velocity_type init_no_position_velocity;
  using _run_imu_unavailable_type =
    bool;
  _run_imu_unavailable_type run_imu_unavailable;
  using _run_gps_unavailable_type =
    bool;
  _run_gps_unavailable_type run_gps_unavailable;
  using _run_matrix_singularity_type =
    bool;
  _run_matrix_singularity_type run_matrix_singularity;
  using _run_position_covariance_warning_type =
    bool;
  _run_position_covariance_warning_type run_position_covariance_warning;
  using _run_velocity_covariance_warning_type =
    bool;
  _run_velocity_covariance_warning_type run_velocity_covariance_warning;
  using _run_attitude_covariance_warning_type =
    bool;
  _run_attitude_covariance_warning_type run_attitude_covariance_warning;
  using _run_nan_in_solution_warning_type =
    bool;
  _run_nan_in_solution_warning_type run_nan_in_solution_warning;
  using _run_gyro_bias_est_high_warning_type =
    bool;
  _run_gyro_bias_est_high_warning_type run_gyro_bias_est_high_warning;
  using _run_accel_bias_est_high_warning_type =
    bool;
  _run_accel_bias_est_high_warning_type run_accel_bias_est_high_warning;
  using _run_gyro_scale_factor_est_high_warning_type =
    bool;
  _run_gyro_scale_factor_est_high_warning_type run_gyro_scale_factor_est_high_warning;
  using _run_accel_scale_factor_est_high_warning_type =
    bool;
  _run_accel_scale_factor_est_high_warning_type run_accel_scale_factor_est_high_warning;
  using _run_mag_bias_est_high_warning_type =
    bool;
  _run_mag_bias_est_high_warning_type run_mag_bias_est_high_warning;
  using _run_ant_offset_correction_est_high_warning_type =
    bool;
  _run_ant_offset_correction_est_high_warning_type run_ant_offset_correction_est_high_warning;
  using _run_mag_hard_iron_est_high_warning_type =
    bool;
  _run_mag_hard_iron_est_high_warning_type run_mag_hard_iron_est_high_warning;
  using _run_mag_soft_iron_est_high_warning_type =
    bool;
  _run_mag_soft_iron_est_high_warning_type run_mag_soft_iron_est_high_warning;

  // setters for named parameter idiom
  Type & set__init_no_attitude(
    const bool & _arg)
  {
    this->init_no_attitude = _arg;
    return *this;
  }
  Type & set__init_no_position_velocity(
    const bool & _arg)
  {
    this->init_no_position_velocity = _arg;
    return *this;
  }
  Type & set__run_imu_unavailable(
    const bool & _arg)
  {
    this->run_imu_unavailable = _arg;
    return *this;
  }
  Type & set__run_gps_unavailable(
    const bool & _arg)
  {
    this->run_gps_unavailable = _arg;
    return *this;
  }
  Type & set__run_matrix_singularity(
    const bool & _arg)
  {
    this->run_matrix_singularity = _arg;
    return *this;
  }
  Type & set__run_position_covariance_warning(
    const bool & _arg)
  {
    this->run_position_covariance_warning = _arg;
    return *this;
  }
  Type & set__run_velocity_covariance_warning(
    const bool & _arg)
  {
    this->run_velocity_covariance_warning = _arg;
    return *this;
  }
  Type & set__run_attitude_covariance_warning(
    const bool & _arg)
  {
    this->run_attitude_covariance_warning = _arg;
    return *this;
  }
  Type & set__run_nan_in_solution_warning(
    const bool & _arg)
  {
    this->run_nan_in_solution_warning = _arg;
    return *this;
  }
  Type & set__run_gyro_bias_est_high_warning(
    const bool & _arg)
  {
    this->run_gyro_bias_est_high_warning = _arg;
    return *this;
  }
  Type & set__run_accel_bias_est_high_warning(
    const bool & _arg)
  {
    this->run_accel_bias_est_high_warning = _arg;
    return *this;
  }
  Type & set__run_gyro_scale_factor_est_high_warning(
    const bool & _arg)
  {
    this->run_gyro_scale_factor_est_high_warning = _arg;
    return *this;
  }
  Type & set__run_accel_scale_factor_est_high_warning(
    const bool & _arg)
  {
    this->run_accel_scale_factor_est_high_warning = _arg;
    return *this;
  }
  Type & set__run_mag_bias_est_high_warning(
    const bool & _arg)
  {
    this->run_mag_bias_est_high_warning = _arg;
    return *this;
  }
  Type & set__run_ant_offset_correction_est_high_warning(
    const bool & _arg)
  {
    this->run_ant_offset_correction_est_high_warning = _arg;
    return *this;
  }
  Type & set__run_mag_hard_iron_est_high_warning(
    const bool & _arg)
  {
    this->run_mag_hard_iron_est_high_warning = _arg;
    return *this;
  }
  Type & set__run_mag_soft_iron_est_high_warning(
    const bool & _arg)
  {
    this->run_mag_soft_iron_est_high_warning = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    microstrain_inertial_msgs::msg::MipFilterStatusGx5StatusFlags_<ContainerAllocator> *;
  using ConstRawPtr =
    const microstrain_inertial_msgs::msg::MipFilterStatusGx5StatusFlags_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<microstrain_inertial_msgs::msg::MipFilterStatusGx5StatusFlags_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<microstrain_inertial_msgs::msg::MipFilterStatusGx5StatusFlags_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      microstrain_inertial_msgs::msg::MipFilterStatusGx5StatusFlags_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<microstrain_inertial_msgs::msg::MipFilterStatusGx5StatusFlags_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      microstrain_inertial_msgs::msg::MipFilterStatusGx5StatusFlags_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<microstrain_inertial_msgs::msg::MipFilterStatusGx5StatusFlags_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<microstrain_inertial_msgs::msg::MipFilterStatusGx5StatusFlags_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<microstrain_inertial_msgs::msg::MipFilterStatusGx5StatusFlags_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags
    std::shared_ptr<microstrain_inertial_msgs::msg::MipFilterStatusGx5StatusFlags_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__microstrain_inertial_msgs__msg__MipFilterStatusGx5StatusFlags
    std::shared_ptr<microstrain_inertial_msgs::msg::MipFilterStatusGx5StatusFlags_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MipFilterStatusGx5StatusFlags_ & other) const
  {
    if (this->init_no_attitude != other.init_no_attitude) {
      return false;
    }
    if (this->init_no_position_velocity != other.init_no_position_velocity) {
      return false;
    }
    if (this->run_imu_unavailable != other.run_imu_unavailable) {
      return false;
    }
    if (this->run_gps_unavailable != other.run_gps_unavailable) {
      return false;
    }
    if (this->run_matrix_singularity != other.run_matrix_singularity) {
      return false;
    }
    if (this->run_position_covariance_warning != other.run_position_covariance_warning) {
      return false;
    }
    if (this->run_velocity_covariance_warning != other.run_velocity_covariance_warning) {
      return false;
    }
    if (this->run_attitude_covariance_warning != other.run_attitude_covariance_warning) {
      return false;
    }
    if (this->run_nan_in_solution_warning != other.run_nan_in_solution_warning) {
      return false;
    }
    if (this->run_gyro_bias_est_high_warning != other.run_gyro_bias_est_high_warning) {
      return false;
    }
    if (this->run_accel_bias_est_high_warning != other.run_accel_bias_est_high_warning) {
      return false;
    }
    if (this->run_gyro_scale_factor_est_high_warning != other.run_gyro_scale_factor_est_high_warning) {
      return false;
    }
    if (this->run_accel_scale_factor_est_high_warning != other.run_accel_scale_factor_est_high_warning) {
      return false;
    }
    if (this->run_mag_bias_est_high_warning != other.run_mag_bias_est_high_warning) {
      return false;
    }
    if (this->run_ant_offset_correction_est_high_warning != other.run_ant_offset_correction_est_high_warning) {
      return false;
    }
    if (this->run_mag_hard_iron_est_high_warning != other.run_mag_hard_iron_est_high_warning) {
      return false;
    }
    if (this->run_mag_soft_iron_est_high_warning != other.run_mag_soft_iron_est_high_warning) {
      return false;
    }
    return true;
  }
  bool operator!=(const MipFilterStatusGx5StatusFlags_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MipFilterStatusGx5StatusFlags_

// alias to use template instance with default allocator
using MipFilterStatusGx5StatusFlags =
  microstrain_inertial_msgs::msg::MipFilterStatusGx5StatusFlags_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace microstrain_inertial_msgs

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_STATUS_GX5_STATUS_FLAGS__STRUCT_HPP_
