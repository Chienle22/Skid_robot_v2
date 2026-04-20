// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from microstrain_inertial_msgs:msg/MipGnssSbasInfoSbasStatus.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GNSS_SBAS_INFO_SBAS_STATUS__STRUCT_HPP_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GNSS_SBAS_INFO_SBAS_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__microstrain_inertial_msgs__msg__MipGnssSbasInfoSbasStatus __attribute__((deprecated))
#else
# define DEPRECATED__microstrain_inertial_msgs__msg__MipGnssSbasInfoSbasStatus __declspec(deprecated)
#endif

namespace microstrain_inertial_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MipGnssSbasInfoSbasStatus_
{
  using Type = MipGnssSbasInfoSbasStatus_<ContainerAllocator>;

  explicit MipGnssSbasInfoSbasStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->range_available = false;
      this->corrections_available = false;
      this->integrity_available = false;
      this->test_mode = false;
    }
  }

  explicit MipGnssSbasInfoSbasStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->range_available = false;
      this->corrections_available = false;
      this->integrity_available = false;
      this->test_mode = false;
    }
  }

  // field types and members
  using _range_available_type =
    bool;
  _range_available_type range_available;
  using _corrections_available_type =
    bool;
  _corrections_available_type corrections_available;
  using _integrity_available_type =
    bool;
  _integrity_available_type integrity_available;
  using _test_mode_type =
    bool;
  _test_mode_type test_mode;

  // setters for named parameter idiom
  Type & set__range_available(
    const bool & _arg)
  {
    this->range_available = _arg;
    return *this;
  }
  Type & set__corrections_available(
    const bool & _arg)
  {
    this->corrections_available = _arg;
    return *this;
  }
  Type & set__integrity_available(
    const bool & _arg)
  {
    this->integrity_available = _arg;
    return *this;
  }
  Type & set__test_mode(
    const bool & _arg)
  {
    this->test_mode = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    microstrain_inertial_msgs::msg::MipGnssSbasInfoSbasStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const microstrain_inertial_msgs::msg::MipGnssSbasInfoSbasStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<microstrain_inertial_msgs::msg::MipGnssSbasInfoSbasStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<microstrain_inertial_msgs::msg::MipGnssSbasInfoSbasStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      microstrain_inertial_msgs::msg::MipGnssSbasInfoSbasStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<microstrain_inertial_msgs::msg::MipGnssSbasInfoSbasStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      microstrain_inertial_msgs::msg::MipGnssSbasInfoSbasStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<microstrain_inertial_msgs::msg::MipGnssSbasInfoSbasStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<microstrain_inertial_msgs::msg::MipGnssSbasInfoSbasStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<microstrain_inertial_msgs::msg::MipGnssSbasInfoSbasStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__microstrain_inertial_msgs__msg__MipGnssSbasInfoSbasStatus
    std::shared_ptr<microstrain_inertial_msgs::msg::MipGnssSbasInfoSbasStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__microstrain_inertial_msgs__msg__MipGnssSbasInfoSbasStatus
    std::shared_ptr<microstrain_inertial_msgs::msg::MipGnssSbasInfoSbasStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MipGnssSbasInfoSbasStatus_ & other) const
  {
    if (this->range_available != other.range_available) {
      return false;
    }
    if (this->corrections_available != other.corrections_available) {
      return false;
    }
    if (this->integrity_available != other.integrity_available) {
      return false;
    }
    if (this->test_mode != other.test_mode) {
      return false;
    }
    return true;
  }
  bool operator!=(const MipGnssSbasInfoSbasStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MipGnssSbasInfoSbasStatus_

// alias to use template instance with default allocator
using MipGnssSbasInfoSbasStatus =
  microstrain_inertial_msgs::msg::MipGnssSbasInfoSbasStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace microstrain_inertial_msgs

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GNSS_SBAS_INFO_SBAS_STATUS__STRUCT_HPP_
