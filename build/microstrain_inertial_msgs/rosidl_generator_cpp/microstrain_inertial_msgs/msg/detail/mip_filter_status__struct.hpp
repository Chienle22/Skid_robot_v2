// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from microstrain_inertial_msgs:msg/MipFilterStatus.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_STATUS__STRUCT_HPP_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "microstrain_inertial_msgs/msg/detail/mip_header__struct.hpp"
// Member 'gx5_status_flags'
#include "microstrain_inertial_msgs/msg/detail/mip_filter_status_gx5_status_flags__struct.hpp"
// Member 'gq7_status_flags'
#include "microstrain_inertial_msgs/msg/detail/mip_filter_status_gq7_status_flags__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__microstrain_inertial_msgs__msg__MipFilterStatus __attribute__((deprecated))
#else
# define DEPRECATED__microstrain_inertial_msgs__msg__MipFilterStatus __declspec(deprecated)
#endif

namespace microstrain_inertial_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MipFilterStatus_
{
  using Type = MipFilterStatus_<ContainerAllocator>;

  explicit MipFilterStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    gx5_status_flags(_init),
    gq7_status_flags(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->filter_state = 0;
      this->dynamics_mode = 0;
    }
  }

  explicit MipFilterStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    gx5_status_flags(_alloc, _init),
    gq7_status_flags(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->filter_state = 0;
      this->dynamics_mode = 0;
    }
  }

  // field types and members
  using _header_type =
    microstrain_inertial_msgs::msg::MipHeader_<ContainerAllocator>;
  _header_type header;
  using _filter_state_type =
    uint16_t;
  _filter_state_type filter_state;
  using _dynamics_mode_type =
    uint16_t;
  _dynamics_mode_type dynamics_mode;
  using _gx5_status_flags_type =
    microstrain_inertial_msgs::msg::MipFilterStatusGx5StatusFlags_<ContainerAllocator>;
  _gx5_status_flags_type gx5_status_flags;
  using _gq7_status_flags_type =
    microstrain_inertial_msgs::msg::MipFilterStatusGq7StatusFlags_<ContainerAllocator>;
  _gq7_status_flags_type gq7_status_flags;

  // setters for named parameter idiom
  Type & set__header(
    const microstrain_inertial_msgs::msg::MipHeader_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__filter_state(
    const uint16_t & _arg)
  {
    this->filter_state = _arg;
    return *this;
  }
  Type & set__dynamics_mode(
    const uint16_t & _arg)
  {
    this->dynamics_mode = _arg;
    return *this;
  }
  Type & set__gx5_status_flags(
    const microstrain_inertial_msgs::msg::MipFilterStatusGx5StatusFlags_<ContainerAllocator> & _arg)
  {
    this->gx5_status_flags = _arg;
    return *this;
  }
  Type & set__gq7_status_flags(
    const microstrain_inertial_msgs::msg::MipFilterStatusGq7StatusFlags_<ContainerAllocator> & _arg)
  {
    this->gq7_status_flags = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint16_t FILTER_STATE_GX5_STARTUP =
    0u;
  static constexpr uint16_t FILTER_STATE_GX5_INIT =
    1u;
  static constexpr uint16_t FILTER_STATE_GX5_RUN_SOLUTION_VALID =
    2u;
  static constexpr uint16_t FILTER_STATE_GX5_RUN_SOLUTION_ERROR =
    3u;
  static constexpr uint16_t FILTER_STATE_GQ7_INIT =
    1u;
  static constexpr uint16_t FILTER_STATE_GQ7_VERT_GYRO =
    2u;
  static constexpr uint16_t FILTER_STATE_GQ7_AHRS =
    3u;
  static constexpr uint16_t FILTER_STATE_GQ7_FULL_NAV =
    4u;
  static constexpr uint16_t DYNAMICS_MODE_GX5_PORTABLE =
    1u;
  static constexpr uint16_t DYNAMICS_MODE_GX5_AUTOMOTIVE =
    2u;
  static constexpr uint16_t DYNAMICS_MODE_GX5_AIRBORNE =
    3u;
  static constexpr uint16_t DYNAMICS_MODE_GQ7_DEFAULT =
    1u;

  // pointer types
  using RawPtr =
    microstrain_inertial_msgs::msg::MipFilterStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const microstrain_inertial_msgs::msg::MipFilterStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<microstrain_inertial_msgs::msg::MipFilterStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<microstrain_inertial_msgs::msg::MipFilterStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      microstrain_inertial_msgs::msg::MipFilterStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<microstrain_inertial_msgs::msg::MipFilterStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      microstrain_inertial_msgs::msg::MipFilterStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<microstrain_inertial_msgs::msg::MipFilterStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<microstrain_inertial_msgs::msg::MipFilterStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<microstrain_inertial_msgs::msg::MipFilterStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__microstrain_inertial_msgs__msg__MipFilterStatus
    std::shared_ptr<microstrain_inertial_msgs::msg::MipFilterStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__microstrain_inertial_msgs__msg__MipFilterStatus
    std::shared_ptr<microstrain_inertial_msgs::msg::MipFilterStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MipFilterStatus_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->filter_state != other.filter_state) {
      return false;
    }
    if (this->dynamics_mode != other.dynamics_mode) {
      return false;
    }
    if (this->gx5_status_flags != other.gx5_status_flags) {
      return false;
    }
    if (this->gq7_status_flags != other.gq7_status_flags) {
      return false;
    }
    return true;
  }
  bool operator!=(const MipFilterStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MipFilterStatus_

// alias to use template instance with default allocator
using MipFilterStatus =
  microstrain_inertial_msgs::msg::MipFilterStatus_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t MipFilterStatus_<ContainerAllocator>::FILTER_STATE_GX5_STARTUP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t MipFilterStatus_<ContainerAllocator>::FILTER_STATE_GX5_INIT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t MipFilterStatus_<ContainerAllocator>::FILTER_STATE_GX5_RUN_SOLUTION_VALID;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t MipFilterStatus_<ContainerAllocator>::FILTER_STATE_GX5_RUN_SOLUTION_ERROR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t MipFilterStatus_<ContainerAllocator>::FILTER_STATE_GQ7_INIT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t MipFilterStatus_<ContainerAllocator>::FILTER_STATE_GQ7_VERT_GYRO;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t MipFilterStatus_<ContainerAllocator>::FILTER_STATE_GQ7_AHRS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t MipFilterStatus_<ContainerAllocator>::FILTER_STATE_GQ7_FULL_NAV;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t MipFilterStatus_<ContainerAllocator>::DYNAMICS_MODE_GX5_PORTABLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t MipFilterStatus_<ContainerAllocator>::DYNAMICS_MODE_GX5_AUTOMOTIVE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t MipFilterStatus_<ContainerAllocator>::DYNAMICS_MODE_GX5_AIRBORNE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t MipFilterStatus_<ContainerAllocator>::DYNAMICS_MODE_GQ7_DEFAULT;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace microstrain_inertial_msgs

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_STATUS__STRUCT_HPP_
