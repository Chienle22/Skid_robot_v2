// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from microstrain_inertial_msgs:msg/MipGpsTimestampValidFlags.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GPS_TIMESTAMP_VALID_FLAGS__STRUCT_HPP_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GPS_TIMESTAMP_VALID_FLAGS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__microstrain_inertial_msgs__msg__MipGpsTimestampValidFlags __attribute__((deprecated))
#else
# define DEPRECATED__microstrain_inertial_msgs__msg__MipGpsTimestampValidFlags __declspec(deprecated)
#endif

namespace microstrain_inertial_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MipGpsTimestampValidFlags_
{
  using Type = MipGpsTimestampValidFlags_<ContainerAllocator>;

  explicit MipGpsTimestampValidFlags_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tow = false;
      this->week_number = false;
      this->time_valid = false;
    }
  }

  explicit MipGpsTimestampValidFlags_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tow = false;
      this->week_number = false;
      this->time_valid = false;
    }
  }

  // field types and members
  using _tow_type =
    bool;
  _tow_type tow;
  using _week_number_type =
    bool;
  _week_number_type week_number;
  using _time_valid_type =
    bool;
  _time_valid_type time_valid;

  // setters for named parameter idiom
  Type & set__tow(
    const bool & _arg)
  {
    this->tow = _arg;
    return *this;
  }
  Type & set__week_number(
    const bool & _arg)
  {
    this->week_number = _arg;
    return *this;
  }
  Type & set__time_valid(
    const bool & _arg)
  {
    this->time_valid = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    microstrain_inertial_msgs::msg::MipGpsTimestampValidFlags_<ContainerAllocator> *;
  using ConstRawPtr =
    const microstrain_inertial_msgs::msg::MipGpsTimestampValidFlags_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<microstrain_inertial_msgs::msg::MipGpsTimestampValidFlags_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<microstrain_inertial_msgs::msg::MipGpsTimestampValidFlags_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      microstrain_inertial_msgs::msg::MipGpsTimestampValidFlags_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<microstrain_inertial_msgs::msg::MipGpsTimestampValidFlags_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      microstrain_inertial_msgs::msg::MipGpsTimestampValidFlags_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<microstrain_inertial_msgs::msg::MipGpsTimestampValidFlags_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<microstrain_inertial_msgs::msg::MipGpsTimestampValidFlags_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<microstrain_inertial_msgs::msg::MipGpsTimestampValidFlags_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__microstrain_inertial_msgs__msg__MipGpsTimestampValidFlags
    std::shared_ptr<microstrain_inertial_msgs::msg::MipGpsTimestampValidFlags_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__microstrain_inertial_msgs__msg__MipGpsTimestampValidFlags
    std::shared_ptr<microstrain_inertial_msgs::msg::MipGpsTimestampValidFlags_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MipGpsTimestampValidFlags_ & other) const
  {
    if (this->tow != other.tow) {
      return false;
    }
    if (this->week_number != other.week_number) {
      return false;
    }
    if (this->time_valid != other.time_valid) {
      return false;
    }
    return true;
  }
  bool operator!=(const MipGpsTimestampValidFlags_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MipGpsTimestampValidFlags_

// alias to use template instance with default allocator
using MipGpsTimestampValidFlags =
  microstrain_inertial_msgs::msg::MipGpsTimestampValidFlags_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace microstrain_inertial_msgs

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GPS_TIMESTAMP_VALID_FLAGS__STRUCT_HPP_
