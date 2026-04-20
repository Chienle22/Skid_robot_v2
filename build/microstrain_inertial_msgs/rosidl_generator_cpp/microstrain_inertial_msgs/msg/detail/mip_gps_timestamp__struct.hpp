// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from microstrain_inertial_msgs:msg/MipGpsTimestamp.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GPS_TIMESTAMP__STRUCT_HPP_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GPS_TIMESTAMP__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'valid_flags'
#include "microstrain_inertial_msgs/msg/detail/mip_gps_timestamp_valid_flags__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__microstrain_inertial_msgs__msg__MipGpsTimestamp __attribute__((deprecated))
#else
# define DEPRECATED__microstrain_inertial_msgs__msg__MipGpsTimestamp __declspec(deprecated)
#endif

namespace microstrain_inertial_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MipGpsTimestamp_
{
  using Type = MipGpsTimestamp_<ContainerAllocator>;

  explicit MipGpsTimestamp_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : valid_flags(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tow = 0.0;
      this->week_number = 0;
    }
  }

  explicit MipGpsTimestamp_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : valid_flags(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tow = 0.0;
      this->week_number = 0;
    }
  }

  // field types and members
  using _tow_type =
    double;
  _tow_type tow;
  using _week_number_type =
    uint16_t;
  _week_number_type week_number;
  using _valid_flags_type =
    microstrain_inertial_msgs::msg::MipGpsTimestampValidFlags_<ContainerAllocator>;
  _valid_flags_type valid_flags;

  // setters for named parameter idiom
  Type & set__tow(
    const double & _arg)
  {
    this->tow = _arg;
    return *this;
  }
  Type & set__week_number(
    const uint16_t & _arg)
  {
    this->week_number = _arg;
    return *this;
  }
  Type & set__valid_flags(
    const microstrain_inertial_msgs::msg::MipGpsTimestampValidFlags_<ContainerAllocator> & _arg)
  {
    this->valid_flags = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    microstrain_inertial_msgs::msg::MipGpsTimestamp_<ContainerAllocator> *;
  using ConstRawPtr =
    const microstrain_inertial_msgs::msg::MipGpsTimestamp_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<microstrain_inertial_msgs::msg::MipGpsTimestamp_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<microstrain_inertial_msgs::msg::MipGpsTimestamp_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      microstrain_inertial_msgs::msg::MipGpsTimestamp_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<microstrain_inertial_msgs::msg::MipGpsTimestamp_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      microstrain_inertial_msgs::msg::MipGpsTimestamp_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<microstrain_inertial_msgs::msg::MipGpsTimestamp_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<microstrain_inertial_msgs::msg::MipGpsTimestamp_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<microstrain_inertial_msgs::msg::MipGpsTimestamp_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__microstrain_inertial_msgs__msg__MipGpsTimestamp
    std::shared_ptr<microstrain_inertial_msgs::msg::MipGpsTimestamp_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__microstrain_inertial_msgs__msg__MipGpsTimestamp
    std::shared_ptr<microstrain_inertial_msgs::msg::MipGpsTimestamp_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MipGpsTimestamp_ & other) const
  {
    if (this->tow != other.tow) {
      return false;
    }
    if (this->week_number != other.week_number) {
      return false;
    }
    if (this->valid_flags != other.valid_flags) {
      return false;
    }
    return true;
  }
  bool operator!=(const MipGpsTimestamp_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MipGpsTimestamp_

// alias to use template instance with default allocator
using MipGpsTimestamp =
  microstrain_inertial_msgs::msg::MipGpsTimestamp_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace microstrain_inertial_msgs

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GPS_TIMESTAMP__STRUCT_HPP_
