// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from microstrain_inertial_msgs:msg/MipGnssCorrectionsRtkCorrectionsStatus.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GNSS_CORRECTIONS_RTK_CORRECTIONS_STATUS__STRUCT_HPP_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GNSS_CORRECTIONS_RTK_CORRECTIONS_STATUS__STRUCT_HPP_

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
// Member 'epoch_status'
#include "microstrain_inertial_msgs/msg/detail/mip_gnss_corrections_rtk_corrections_status_epoch_status__struct.hpp"
// Member 'dongle_status'
#include "microstrain_inertial_msgs/msg/detail/mip_gnss_corrections_rtk_corrections_status_dongle_status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus __attribute__((deprecated))
#else
# define DEPRECATED__microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus __declspec(deprecated)
#endif

namespace microstrain_inertial_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MipGnssCorrectionsRtkCorrectionsStatus_
{
  using Type = MipGnssCorrectionsRtkCorrectionsStatus_<ContainerAllocator>;

  explicit MipGnssCorrectionsRtkCorrectionsStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    epoch_status(_init),
    dongle_status(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_of_week = 0.0;
      this->week_number = 0;
      this->gps_correction_latency = 0.0f;
      this->glonass_correction_latency = 0.0f;
      this->galileo_correction_latency = 0.0f;
      this->beidou_correction_latency = 0.0f;
    }
  }

  explicit MipGnssCorrectionsRtkCorrectionsStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    epoch_status(_alloc, _init),
    dongle_status(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_of_week = 0.0;
      this->week_number = 0;
      this->gps_correction_latency = 0.0f;
      this->glonass_correction_latency = 0.0f;
      this->galileo_correction_latency = 0.0f;
      this->beidou_correction_latency = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    microstrain_inertial_msgs::msg::MipHeader_<ContainerAllocator>;
  _header_type header;
  using _time_of_week_type =
    double;
  _time_of_week_type time_of_week;
  using _week_number_type =
    uint16_t;
  _week_number_type week_number;
  using _epoch_status_type =
    microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusEpochStatus_<ContainerAllocator>;
  _epoch_status_type epoch_status;
  using _dongle_status_type =
    microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusDongleStatus_<ContainerAllocator>;
  _dongle_status_type dongle_status;
  using _gps_correction_latency_type =
    float;
  _gps_correction_latency_type gps_correction_latency;
  using _glonass_correction_latency_type =
    float;
  _glonass_correction_latency_type glonass_correction_latency;
  using _galileo_correction_latency_type =
    float;
  _galileo_correction_latency_type galileo_correction_latency;
  using _beidou_correction_latency_type =
    float;
  _beidou_correction_latency_type beidou_correction_latency;

  // setters for named parameter idiom
  Type & set__header(
    const microstrain_inertial_msgs::msg::MipHeader_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__time_of_week(
    const double & _arg)
  {
    this->time_of_week = _arg;
    return *this;
  }
  Type & set__week_number(
    const uint16_t & _arg)
  {
    this->week_number = _arg;
    return *this;
  }
  Type & set__epoch_status(
    const microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusEpochStatus_<ContainerAllocator> & _arg)
  {
    this->epoch_status = _arg;
    return *this;
  }
  Type & set__dongle_status(
    const microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusDongleStatus_<ContainerAllocator> & _arg)
  {
    this->dongle_status = _arg;
    return *this;
  }
  Type & set__gps_correction_latency(
    const float & _arg)
  {
    this->gps_correction_latency = _arg;
    return *this;
  }
  Type & set__glonass_correction_latency(
    const float & _arg)
  {
    this->glonass_correction_latency = _arg;
    return *this;
  }
  Type & set__galileo_correction_latency(
    const float & _arg)
  {
    this->galileo_correction_latency = _arg;
    return *this;
  }
  Type & set__beidou_correction_latency(
    const float & _arg)
  {
    this->beidou_correction_latency = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus
    std::shared_ptr<microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatus
    std::shared_ptr<microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MipGnssCorrectionsRtkCorrectionsStatus_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->time_of_week != other.time_of_week) {
      return false;
    }
    if (this->week_number != other.week_number) {
      return false;
    }
    if (this->epoch_status != other.epoch_status) {
      return false;
    }
    if (this->dongle_status != other.dongle_status) {
      return false;
    }
    if (this->gps_correction_latency != other.gps_correction_latency) {
      return false;
    }
    if (this->glonass_correction_latency != other.glonass_correction_latency) {
      return false;
    }
    if (this->galileo_correction_latency != other.galileo_correction_latency) {
      return false;
    }
    if (this->beidou_correction_latency != other.beidou_correction_latency) {
      return false;
    }
    return true;
  }
  bool operator!=(const MipGnssCorrectionsRtkCorrectionsStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MipGnssCorrectionsRtkCorrectionsStatus_

// alias to use template instance with default allocator
using MipGnssCorrectionsRtkCorrectionsStatus =
  microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace microstrain_inertial_msgs

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GNSS_CORRECTIONS_RTK_CORRECTIONS_STATUS__STRUCT_HPP_
