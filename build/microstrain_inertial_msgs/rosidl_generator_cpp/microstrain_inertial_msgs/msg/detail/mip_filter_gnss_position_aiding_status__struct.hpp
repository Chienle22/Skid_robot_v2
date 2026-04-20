// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from microstrain_inertial_msgs:msg/MipFilterGnssPositionAidingStatus.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_GNSS_POSITION_AIDING_STATUS__STRUCT_HPP_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_GNSS_POSITION_AIDING_STATUS__STRUCT_HPP_

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
// Member 'status'
#include "microstrain_inertial_msgs/msg/detail/mip_filter_gnss_position_aiding_status_status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatus __attribute__((deprecated))
#else
# define DEPRECATED__microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatus __declspec(deprecated)
#endif

namespace microstrain_inertial_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MipFilterGnssPositionAidingStatus_
{
  using Type = MipFilterGnssPositionAidingStatus_<ContainerAllocator>;

  explicit MipFilterGnssPositionAidingStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    status(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->receiver_id = 0;
      this->time_of_week = 0.0;
    }
  }

  explicit MipFilterGnssPositionAidingStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    status(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->receiver_id = 0;
      this->time_of_week = 0.0;
    }
  }

  // field types and members
  using _header_type =
    microstrain_inertial_msgs::msg::MipHeader_<ContainerAllocator>;
  _header_type header;
  using _receiver_id_type =
    uint8_t;
  _receiver_id_type receiver_id;
  using _time_of_week_type =
    double;
  _time_of_week_type time_of_week;
  using _status_type =
    microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatusStatus_<ContainerAllocator>;
  _status_type status;

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
  Type & set__time_of_week(
    const double & _arg)
  {
    this->time_of_week = _arg;
    return *this;
  }
  Type & set__status(
    const microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatusStatus_<ContainerAllocator> & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatus
    std::shared_ptr<microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatus
    std::shared_ptr<microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MipFilterGnssPositionAidingStatus_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->receiver_id != other.receiver_id) {
      return false;
    }
    if (this->time_of_week != other.time_of_week) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const MipFilterGnssPositionAidingStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MipFilterGnssPositionAidingStatus_

// alias to use template instance with default allocator
using MipFilterGnssPositionAidingStatus =
  microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace microstrain_inertial_msgs

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_GNSS_POSITION_AIDING_STATUS__STRUCT_HPP_
