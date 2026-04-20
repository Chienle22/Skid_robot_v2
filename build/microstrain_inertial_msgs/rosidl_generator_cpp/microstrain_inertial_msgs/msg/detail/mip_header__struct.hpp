// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from microstrain_inertial_msgs:msg/MipHeader.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_HEADER__STRUCT_HPP_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_HEADER__STRUCT_HPP_

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
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'gps_timestamp'
#include "microstrain_inertial_msgs/msg/detail/mip_gps_timestamp__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__microstrain_inertial_msgs__msg__MipHeader __attribute__((deprecated))
#else
# define DEPRECATED__microstrain_inertial_msgs__msg__MipHeader __declspec(deprecated)
#endif

namespace microstrain_inertial_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MipHeader_
{
  using Type = MipHeader_<ContainerAllocator>;

  explicit MipHeader_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    gps_timestamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->event_source = 0;
      this->reference_timestamp = 0ull;
    }
  }

  explicit MipHeader_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    gps_timestamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->event_source = 0;
      this->reference_timestamp = 0ull;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _event_source_type =
    uint8_t;
  _event_source_type event_source;
  using _reference_timestamp_type =
    uint64_t;
  _reference_timestamp_type reference_timestamp;
  using _gps_timestamp_type =
    microstrain_inertial_msgs::msg::MipGpsTimestamp_<ContainerAllocator>;
  _gps_timestamp_type gps_timestamp;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__event_source(
    const uint8_t & _arg)
  {
    this->event_source = _arg;
    return *this;
  }
  Type & set__reference_timestamp(
    const uint64_t & _arg)
  {
    this->reference_timestamp = _arg;
    return *this;
  }
  Type & set__gps_timestamp(
    const microstrain_inertial_msgs::msg::MipGpsTimestamp_<ContainerAllocator> & _arg)
  {
    this->gps_timestamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    microstrain_inertial_msgs::msg::MipHeader_<ContainerAllocator> *;
  using ConstRawPtr =
    const microstrain_inertial_msgs::msg::MipHeader_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<microstrain_inertial_msgs::msg::MipHeader_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<microstrain_inertial_msgs::msg::MipHeader_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      microstrain_inertial_msgs::msg::MipHeader_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<microstrain_inertial_msgs::msg::MipHeader_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      microstrain_inertial_msgs::msg::MipHeader_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<microstrain_inertial_msgs::msg::MipHeader_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<microstrain_inertial_msgs::msg::MipHeader_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<microstrain_inertial_msgs::msg::MipHeader_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__microstrain_inertial_msgs__msg__MipHeader
    std::shared_ptr<microstrain_inertial_msgs::msg::MipHeader_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__microstrain_inertial_msgs__msg__MipHeader
    std::shared_ptr<microstrain_inertial_msgs::msg::MipHeader_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MipHeader_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->event_source != other.event_source) {
      return false;
    }
    if (this->reference_timestamp != other.reference_timestamp) {
      return false;
    }
    if (this->gps_timestamp != other.gps_timestamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const MipHeader_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MipHeader_

// alias to use template instance with default allocator
using MipHeader =
  microstrain_inertial_msgs::msg::MipHeader_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace microstrain_inertial_msgs

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_HEADER__STRUCT_HPP_
