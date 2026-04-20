// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from microstrain_inertial_msgs:msg/MipSystemTimeSyncStatus.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_SYSTEM_TIME_SYNC_STATUS__STRUCT_HPP_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_SYSTEM_TIME_SYNC_STATUS__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__microstrain_inertial_msgs__msg__MipSystemTimeSyncStatus __attribute__((deprecated))
#else
# define DEPRECATED__microstrain_inertial_msgs__msg__MipSystemTimeSyncStatus __declspec(deprecated)
#endif

namespace microstrain_inertial_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MipSystemTimeSyncStatus_
{
  using Type = MipSystemTimeSyncStatus_<ContainerAllocator>;

  explicit MipSystemTimeSyncStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_sync = false;
      this->last_pps_rcvd = 0;
    }
  }

  explicit MipSystemTimeSyncStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_sync = false;
      this->last_pps_rcvd = 0;
    }
  }

  // field types and members
  using _header_type =
    microstrain_inertial_msgs::msg::MipHeader_<ContainerAllocator>;
  _header_type header;
  using _time_sync_type =
    bool;
  _time_sync_type time_sync;
  using _last_pps_rcvd_type =
    uint8_t;
  _last_pps_rcvd_type last_pps_rcvd;

  // setters for named parameter idiom
  Type & set__header(
    const microstrain_inertial_msgs::msg::MipHeader_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__time_sync(
    const bool & _arg)
  {
    this->time_sync = _arg;
    return *this;
  }
  Type & set__last_pps_rcvd(
    const uint8_t & _arg)
  {
    this->last_pps_rcvd = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    microstrain_inertial_msgs::msg::MipSystemTimeSyncStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const microstrain_inertial_msgs::msg::MipSystemTimeSyncStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<microstrain_inertial_msgs::msg::MipSystemTimeSyncStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<microstrain_inertial_msgs::msg::MipSystemTimeSyncStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      microstrain_inertial_msgs::msg::MipSystemTimeSyncStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<microstrain_inertial_msgs::msg::MipSystemTimeSyncStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      microstrain_inertial_msgs::msg::MipSystemTimeSyncStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<microstrain_inertial_msgs::msg::MipSystemTimeSyncStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<microstrain_inertial_msgs::msg::MipSystemTimeSyncStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<microstrain_inertial_msgs::msg::MipSystemTimeSyncStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__microstrain_inertial_msgs__msg__MipSystemTimeSyncStatus
    std::shared_ptr<microstrain_inertial_msgs::msg::MipSystemTimeSyncStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__microstrain_inertial_msgs__msg__MipSystemTimeSyncStatus
    std::shared_ptr<microstrain_inertial_msgs::msg::MipSystemTimeSyncStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MipSystemTimeSyncStatus_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->time_sync != other.time_sync) {
      return false;
    }
    if (this->last_pps_rcvd != other.last_pps_rcvd) {
      return false;
    }
    return true;
  }
  bool operator!=(const MipSystemTimeSyncStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MipSystemTimeSyncStatus_

// alias to use template instance with default allocator
using MipSystemTimeSyncStatus =
  microstrain_inertial_msgs::msg::MipSystemTimeSyncStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace microstrain_inertial_msgs

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_SYSTEM_TIME_SYNC_STATUS__STRUCT_HPP_
