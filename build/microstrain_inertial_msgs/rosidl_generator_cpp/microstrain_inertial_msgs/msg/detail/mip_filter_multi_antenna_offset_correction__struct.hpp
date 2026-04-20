// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from microstrain_inertial_msgs:msg/MipFilterMultiAntennaOffsetCorrection.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_MULTI_ANTENNA_OFFSET_CORRECTION__STRUCT_HPP_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_MULTI_ANTENNA_OFFSET_CORRECTION__STRUCT_HPP_

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
# define DEPRECATED__microstrain_inertial_msgs__msg__MipFilterMultiAntennaOffsetCorrection __attribute__((deprecated))
#else
# define DEPRECATED__microstrain_inertial_msgs__msg__MipFilterMultiAntennaOffsetCorrection __declspec(deprecated)
#endif

namespace microstrain_inertial_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MipFilterMultiAntennaOffsetCorrection_
{
  using Type = MipFilterMultiAntennaOffsetCorrection_<ContainerAllocator>;

  explicit MipFilterMultiAntennaOffsetCorrection_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->receiver_id = 0;
      std::fill<typename std::array<float, 3>::iterator, float>(this->offset.begin(), this->offset.end(), 0.0f);
    }
  }

  explicit MipFilterMultiAntennaOffsetCorrection_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    offset(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->receiver_id = 0;
      std::fill<typename std::array<float, 3>::iterator, float>(this->offset.begin(), this->offset.end(), 0.0f);
    }
  }

  // field types and members
  using _header_type =
    microstrain_inertial_msgs::msg::MipHeader_<ContainerAllocator>;
  _header_type header;
  using _receiver_id_type =
    uint8_t;
  _receiver_id_type receiver_id;
  using _offset_type =
    std::array<float, 3>;
  _offset_type offset;

  // setters for named parameter idiom
  Type & set__header(
    const microstrain_inertial_msgs::msg::MipHeader_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__receiver_id(
    const uint8_t & _arg)
  {
    this->receiver_id = _arg;
    return *this;
  }
  Type & set__offset(
    const std::array<float, 3> & _arg)
  {
    this->offset = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    microstrain_inertial_msgs::msg::MipFilterMultiAntennaOffsetCorrection_<ContainerAllocator> *;
  using ConstRawPtr =
    const microstrain_inertial_msgs::msg::MipFilterMultiAntennaOffsetCorrection_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<microstrain_inertial_msgs::msg::MipFilterMultiAntennaOffsetCorrection_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<microstrain_inertial_msgs::msg::MipFilterMultiAntennaOffsetCorrection_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      microstrain_inertial_msgs::msg::MipFilterMultiAntennaOffsetCorrection_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<microstrain_inertial_msgs::msg::MipFilterMultiAntennaOffsetCorrection_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      microstrain_inertial_msgs::msg::MipFilterMultiAntennaOffsetCorrection_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<microstrain_inertial_msgs::msg::MipFilterMultiAntennaOffsetCorrection_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<microstrain_inertial_msgs::msg::MipFilterMultiAntennaOffsetCorrection_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<microstrain_inertial_msgs::msg::MipFilterMultiAntennaOffsetCorrection_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__microstrain_inertial_msgs__msg__MipFilterMultiAntennaOffsetCorrection
    std::shared_ptr<microstrain_inertial_msgs::msg::MipFilterMultiAntennaOffsetCorrection_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__microstrain_inertial_msgs__msg__MipFilterMultiAntennaOffsetCorrection
    std::shared_ptr<microstrain_inertial_msgs::msg::MipFilterMultiAntennaOffsetCorrection_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MipFilterMultiAntennaOffsetCorrection_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->receiver_id != other.receiver_id) {
      return false;
    }
    if (this->offset != other.offset) {
      return false;
    }
    return true;
  }
  bool operator!=(const MipFilterMultiAntennaOffsetCorrection_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MipFilterMultiAntennaOffsetCorrection_

// alias to use template instance with default allocator
using MipFilterMultiAntennaOffsetCorrection =
  microstrain_inertial_msgs::msg::MipFilterMultiAntennaOffsetCorrection_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace microstrain_inertial_msgs

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_MULTI_ANTENNA_OFFSET_CORRECTION__STRUCT_HPP_
