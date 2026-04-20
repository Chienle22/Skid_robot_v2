// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from microstrain_inertial_msgs:msg/MipFilterAidingMeasurementSummaryIndicator.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_AIDING_MEASUREMENT_SUMMARY_INDICATOR__STRUCT_HPP_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_AIDING_MEASUREMENT_SUMMARY_INDICATOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummaryIndicator __attribute__((deprecated))
#else
# define DEPRECATED__microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummaryIndicator __declspec(deprecated)
#endif

namespace microstrain_inertial_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MipFilterAidingMeasurementSummaryIndicator_
{
  using Type = MipFilterAidingMeasurementSummaryIndicator_<ContainerAllocator>;

  explicit MipFilterAidingMeasurementSummaryIndicator_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->enabled = false;
      this->used = false;
      this->residual_high_warning = false;
      this->sample_time_warning = false;
      this->configuration_error = false;
      this->max_num_meas_exceeded = false;
    }
  }

  explicit MipFilterAidingMeasurementSummaryIndicator_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->enabled = false;
      this->used = false;
      this->residual_high_warning = false;
      this->sample_time_warning = false;
      this->configuration_error = false;
      this->max_num_meas_exceeded = false;
    }
  }

  // field types and members
  using _enabled_type =
    bool;
  _enabled_type enabled;
  using _used_type =
    bool;
  _used_type used;
  using _residual_high_warning_type =
    bool;
  _residual_high_warning_type residual_high_warning;
  using _sample_time_warning_type =
    bool;
  _sample_time_warning_type sample_time_warning;
  using _configuration_error_type =
    bool;
  _configuration_error_type configuration_error;
  using _max_num_meas_exceeded_type =
    bool;
  _max_num_meas_exceeded_type max_num_meas_exceeded;

  // setters for named parameter idiom
  Type & set__enabled(
    const bool & _arg)
  {
    this->enabled = _arg;
    return *this;
  }
  Type & set__used(
    const bool & _arg)
  {
    this->used = _arg;
    return *this;
  }
  Type & set__residual_high_warning(
    const bool & _arg)
  {
    this->residual_high_warning = _arg;
    return *this;
  }
  Type & set__sample_time_warning(
    const bool & _arg)
  {
    this->sample_time_warning = _arg;
    return *this;
  }
  Type & set__configuration_error(
    const bool & _arg)
  {
    this->configuration_error = _arg;
    return *this;
  }
  Type & set__max_num_meas_exceeded(
    const bool & _arg)
  {
    this->max_num_meas_exceeded = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    microstrain_inertial_msgs::msg::MipFilterAidingMeasurementSummaryIndicator_<ContainerAllocator> *;
  using ConstRawPtr =
    const microstrain_inertial_msgs::msg::MipFilterAidingMeasurementSummaryIndicator_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<microstrain_inertial_msgs::msg::MipFilterAidingMeasurementSummaryIndicator_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<microstrain_inertial_msgs::msg::MipFilterAidingMeasurementSummaryIndicator_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      microstrain_inertial_msgs::msg::MipFilterAidingMeasurementSummaryIndicator_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<microstrain_inertial_msgs::msg::MipFilterAidingMeasurementSummaryIndicator_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      microstrain_inertial_msgs::msg::MipFilterAidingMeasurementSummaryIndicator_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<microstrain_inertial_msgs::msg::MipFilterAidingMeasurementSummaryIndicator_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<microstrain_inertial_msgs::msg::MipFilterAidingMeasurementSummaryIndicator_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<microstrain_inertial_msgs::msg::MipFilterAidingMeasurementSummaryIndicator_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummaryIndicator
    std::shared_ptr<microstrain_inertial_msgs::msg::MipFilterAidingMeasurementSummaryIndicator_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummaryIndicator
    std::shared_ptr<microstrain_inertial_msgs::msg::MipFilterAidingMeasurementSummaryIndicator_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MipFilterAidingMeasurementSummaryIndicator_ & other) const
  {
    if (this->enabled != other.enabled) {
      return false;
    }
    if (this->used != other.used) {
      return false;
    }
    if (this->residual_high_warning != other.residual_high_warning) {
      return false;
    }
    if (this->sample_time_warning != other.sample_time_warning) {
      return false;
    }
    if (this->configuration_error != other.configuration_error) {
      return false;
    }
    if (this->max_num_meas_exceeded != other.max_num_meas_exceeded) {
      return false;
    }
    return true;
  }
  bool operator!=(const MipFilterAidingMeasurementSummaryIndicator_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MipFilterAidingMeasurementSummaryIndicator_

// alias to use template instance with default allocator
using MipFilterAidingMeasurementSummaryIndicator =
  microstrain_inertial_msgs::msg::MipFilterAidingMeasurementSummaryIndicator_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace microstrain_inertial_msgs

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_AIDING_MEASUREMENT_SUMMARY_INDICATOR__STRUCT_HPP_
