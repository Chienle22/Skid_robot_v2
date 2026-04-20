// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from microstrain_inertial_msgs:msg/MipFilterStatusGq7StatusFlags.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_STATUS_GQ7_STATUS_FLAGS__STRUCT_HPP_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_STATUS_GQ7_STATUS_FLAGS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__microstrain_inertial_msgs__msg__MipFilterStatusGq7StatusFlags __attribute__((deprecated))
#else
# define DEPRECATED__microstrain_inertial_msgs__msg__MipFilterStatusGq7StatusFlags __declspec(deprecated)
#endif

namespace microstrain_inertial_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MipFilterStatusGq7StatusFlags_
{
  using Type = MipFilterStatusGq7StatusFlags_<ContainerAllocator>;

  explicit MipFilterStatusGq7StatusFlags_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->filter_condition = 0;
      this->roll_pitch_warning = false;
      this->heading_warning = false;
      this->position_warning = false;
      this->velocity_warning = false;
      this->imu_bias_warning = false;
      this->gnss_clk_warning = false;
      this->antenna_lever_arm_warning = false;
      this->mounting_transform_warning = false;
      this->time_sync_warning = false;
      this->solution_error = false;
    }
  }

  explicit MipFilterStatusGq7StatusFlags_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->filter_condition = 0;
      this->roll_pitch_warning = false;
      this->heading_warning = false;
      this->position_warning = false;
      this->velocity_warning = false;
      this->imu_bias_warning = false;
      this->gnss_clk_warning = false;
      this->antenna_lever_arm_warning = false;
      this->mounting_transform_warning = false;
      this->time_sync_warning = false;
      this->solution_error = false;
    }
  }

  // field types and members
  using _filter_condition_type =
    uint8_t;
  _filter_condition_type filter_condition;
  using _roll_pitch_warning_type =
    bool;
  _roll_pitch_warning_type roll_pitch_warning;
  using _heading_warning_type =
    bool;
  _heading_warning_type heading_warning;
  using _position_warning_type =
    bool;
  _position_warning_type position_warning;
  using _velocity_warning_type =
    bool;
  _velocity_warning_type velocity_warning;
  using _imu_bias_warning_type =
    bool;
  _imu_bias_warning_type imu_bias_warning;
  using _gnss_clk_warning_type =
    bool;
  _gnss_clk_warning_type gnss_clk_warning;
  using _antenna_lever_arm_warning_type =
    bool;
  _antenna_lever_arm_warning_type antenna_lever_arm_warning;
  using _mounting_transform_warning_type =
    bool;
  _mounting_transform_warning_type mounting_transform_warning;
  using _time_sync_warning_type =
    bool;
  _time_sync_warning_type time_sync_warning;
  using _solution_error_type =
    bool;
  _solution_error_type solution_error;

  // setters for named parameter idiom
  Type & set__filter_condition(
    const uint8_t & _arg)
  {
    this->filter_condition = _arg;
    return *this;
  }
  Type & set__roll_pitch_warning(
    const bool & _arg)
  {
    this->roll_pitch_warning = _arg;
    return *this;
  }
  Type & set__heading_warning(
    const bool & _arg)
  {
    this->heading_warning = _arg;
    return *this;
  }
  Type & set__position_warning(
    const bool & _arg)
  {
    this->position_warning = _arg;
    return *this;
  }
  Type & set__velocity_warning(
    const bool & _arg)
  {
    this->velocity_warning = _arg;
    return *this;
  }
  Type & set__imu_bias_warning(
    const bool & _arg)
  {
    this->imu_bias_warning = _arg;
    return *this;
  }
  Type & set__gnss_clk_warning(
    const bool & _arg)
  {
    this->gnss_clk_warning = _arg;
    return *this;
  }
  Type & set__antenna_lever_arm_warning(
    const bool & _arg)
  {
    this->antenna_lever_arm_warning = _arg;
    return *this;
  }
  Type & set__mounting_transform_warning(
    const bool & _arg)
  {
    this->mounting_transform_warning = _arg;
    return *this;
  }
  Type & set__time_sync_warning(
    const bool & _arg)
  {
    this->time_sync_warning = _arg;
    return *this;
  }
  Type & set__solution_error(
    const bool & _arg)
  {
    this->solution_error = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t FILTER_CONDITION_STABLE =
    1u;
  static constexpr uint8_t FILTER_CONDITION_CONVERGING =
    2u;
  static constexpr uint8_t FILTER_CONDITION_UNSTABLE =
    3u;

  // pointer types
  using RawPtr =
    microstrain_inertial_msgs::msg::MipFilterStatusGq7StatusFlags_<ContainerAllocator> *;
  using ConstRawPtr =
    const microstrain_inertial_msgs::msg::MipFilterStatusGq7StatusFlags_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<microstrain_inertial_msgs::msg::MipFilterStatusGq7StatusFlags_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<microstrain_inertial_msgs::msg::MipFilterStatusGq7StatusFlags_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      microstrain_inertial_msgs::msg::MipFilterStatusGq7StatusFlags_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<microstrain_inertial_msgs::msg::MipFilterStatusGq7StatusFlags_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      microstrain_inertial_msgs::msg::MipFilterStatusGq7StatusFlags_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<microstrain_inertial_msgs::msg::MipFilterStatusGq7StatusFlags_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<microstrain_inertial_msgs::msg::MipFilterStatusGq7StatusFlags_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<microstrain_inertial_msgs::msg::MipFilterStatusGq7StatusFlags_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__microstrain_inertial_msgs__msg__MipFilterStatusGq7StatusFlags
    std::shared_ptr<microstrain_inertial_msgs::msg::MipFilterStatusGq7StatusFlags_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__microstrain_inertial_msgs__msg__MipFilterStatusGq7StatusFlags
    std::shared_ptr<microstrain_inertial_msgs::msg::MipFilterStatusGq7StatusFlags_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MipFilterStatusGq7StatusFlags_ & other) const
  {
    if (this->filter_condition != other.filter_condition) {
      return false;
    }
    if (this->roll_pitch_warning != other.roll_pitch_warning) {
      return false;
    }
    if (this->heading_warning != other.heading_warning) {
      return false;
    }
    if (this->position_warning != other.position_warning) {
      return false;
    }
    if (this->velocity_warning != other.velocity_warning) {
      return false;
    }
    if (this->imu_bias_warning != other.imu_bias_warning) {
      return false;
    }
    if (this->gnss_clk_warning != other.gnss_clk_warning) {
      return false;
    }
    if (this->antenna_lever_arm_warning != other.antenna_lever_arm_warning) {
      return false;
    }
    if (this->mounting_transform_warning != other.mounting_transform_warning) {
      return false;
    }
    if (this->time_sync_warning != other.time_sync_warning) {
      return false;
    }
    if (this->solution_error != other.solution_error) {
      return false;
    }
    return true;
  }
  bool operator!=(const MipFilterStatusGq7StatusFlags_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MipFilterStatusGq7StatusFlags_

// alias to use template instance with default allocator
using MipFilterStatusGq7StatusFlags =
  microstrain_inertial_msgs::msg::MipFilterStatusGq7StatusFlags_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MipFilterStatusGq7StatusFlags_<ContainerAllocator>::FILTER_CONDITION_STABLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MipFilterStatusGq7StatusFlags_<ContainerAllocator>::FILTER_CONDITION_CONVERGING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MipFilterStatusGq7StatusFlags_<ContainerAllocator>::FILTER_CONDITION_UNSTABLE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace microstrain_inertial_msgs

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_STATUS_GQ7_STATUS_FLAGS__STRUCT_HPP_
