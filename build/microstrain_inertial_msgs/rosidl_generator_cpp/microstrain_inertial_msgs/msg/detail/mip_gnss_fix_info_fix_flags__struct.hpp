// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from microstrain_inertial_msgs:msg/MipGnssFixInfoFixFlags.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GNSS_FIX_INFO_FIX_FLAGS__STRUCT_HPP_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GNSS_FIX_INFO_FIX_FLAGS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__microstrain_inertial_msgs__msg__MipGnssFixInfoFixFlags __attribute__((deprecated))
#else
# define DEPRECATED__microstrain_inertial_msgs__msg__MipGnssFixInfoFixFlags __declspec(deprecated)
#endif

namespace microstrain_inertial_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MipGnssFixInfoFixFlags_
{
  using Type = MipGnssFixInfoFixFlags_<ContainerAllocator>;

  explicit MipGnssFixInfoFixFlags_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sbas_used = false;
      this->dgnss_used = false;
    }
  }

  explicit MipGnssFixInfoFixFlags_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sbas_used = false;
      this->dgnss_used = false;
    }
  }

  // field types and members
  using _sbas_used_type =
    bool;
  _sbas_used_type sbas_used;
  using _dgnss_used_type =
    bool;
  _dgnss_used_type dgnss_used;

  // setters for named parameter idiom
  Type & set__sbas_used(
    const bool & _arg)
  {
    this->sbas_used = _arg;
    return *this;
  }
  Type & set__dgnss_used(
    const bool & _arg)
  {
    this->dgnss_used = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    microstrain_inertial_msgs::msg::MipGnssFixInfoFixFlags_<ContainerAllocator> *;
  using ConstRawPtr =
    const microstrain_inertial_msgs::msg::MipGnssFixInfoFixFlags_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<microstrain_inertial_msgs::msg::MipGnssFixInfoFixFlags_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<microstrain_inertial_msgs::msg::MipGnssFixInfoFixFlags_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      microstrain_inertial_msgs::msg::MipGnssFixInfoFixFlags_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<microstrain_inertial_msgs::msg::MipGnssFixInfoFixFlags_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      microstrain_inertial_msgs::msg::MipGnssFixInfoFixFlags_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<microstrain_inertial_msgs::msg::MipGnssFixInfoFixFlags_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<microstrain_inertial_msgs::msg::MipGnssFixInfoFixFlags_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<microstrain_inertial_msgs::msg::MipGnssFixInfoFixFlags_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__microstrain_inertial_msgs__msg__MipGnssFixInfoFixFlags
    std::shared_ptr<microstrain_inertial_msgs::msg::MipGnssFixInfoFixFlags_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__microstrain_inertial_msgs__msg__MipGnssFixInfoFixFlags
    std::shared_ptr<microstrain_inertial_msgs::msg::MipGnssFixInfoFixFlags_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MipGnssFixInfoFixFlags_ & other) const
  {
    if (this->sbas_used != other.sbas_used) {
      return false;
    }
    if (this->dgnss_used != other.dgnss_used) {
      return false;
    }
    return true;
  }
  bool operator!=(const MipGnssFixInfoFixFlags_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MipGnssFixInfoFixFlags_

// alias to use template instance with default allocator
using MipGnssFixInfoFixFlags =
  microstrain_inertial_msgs::msg::MipGnssFixInfoFixFlags_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace microstrain_inertial_msgs

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GNSS_FIX_INFO_FIX_FLAGS__STRUCT_HPP_
