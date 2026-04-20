// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from microstrain_inertial_msgs:msg/MipGnssCorrectionsRtkCorrectionsStatusEpochStatus.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GNSS_CORRECTIONS_RTK_CORRECTIONS_STATUS_EPOCH_STATUS__STRUCT_HPP_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GNSS_CORRECTIONS_RTK_CORRECTIONS_STATUS_EPOCH_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusEpochStatus __attribute__((deprecated))
#else
# define DEPRECATED__microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusEpochStatus __declspec(deprecated)
#endif

namespace microstrain_inertial_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MipGnssCorrectionsRtkCorrectionsStatusEpochStatus_
{
  using Type = MipGnssCorrectionsRtkCorrectionsStatusEpochStatus_<ContainerAllocator>;

  explicit MipGnssCorrectionsRtkCorrectionsStatusEpochStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->antenna_location_received = false;
      this->antenna_description_received = false;
      this->gps_received = false;
      this->galileo_received = false;
      this->glonass_received = false;
      this->beidou_received = false;
      this->using_gps_msm_messages = false;
      this->using_glonass_msm_messages = false;
      this->dongle_status_read_failed = false;
    }
  }

  explicit MipGnssCorrectionsRtkCorrectionsStatusEpochStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->antenna_location_received = false;
      this->antenna_description_received = false;
      this->gps_received = false;
      this->galileo_received = false;
      this->glonass_received = false;
      this->beidou_received = false;
      this->using_gps_msm_messages = false;
      this->using_glonass_msm_messages = false;
      this->dongle_status_read_failed = false;
    }
  }

  // field types and members
  using _antenna_location_received_type =
    bool;
  _antenna_location_received_type antenna_location_received;
  using _antenna_description_received_type =
    bool;
  _antenna_description_received_type antenna_description_received;
  using _gps_received_type =
    bool;
  _gps_received_type gps_received;
  using _galileo_received_type =
    bool;
  _galileo_received_type galileo_received;
  using _glonass_received_type =
    bool;
  _glonass_received_type glonass_received;
  using _beidou_received_type =
    bool;
  _beidou_received_type beidou_received;
  using _using_gps_msm_messages_type =
    bool;
  _using_gps_msm_messages_type using_gps_msm_messages;
  using _using_glonass_msm_messages_type =
    bool;
  _using_glonass_msm_messages_type using_glonass_msm_messages;
  using _dongle_status_read_failed_type =
    bool;
  _dongle_status_read_failed_type dongle_status_read_failed;

  // setters for named parameter idiom
  Type & set__antenna_location_received(
    const bool & _arg)
  {
    this->antenna_location_received = _arg;
    return *this;
  }
  Type & set__antenna_description_received(
    const bool & _arg)
  {
    this->antenna_description_received = _arg;
    return *this;
  }
  Type & set__gps_received(
    const bool & _arg)
  {
    this->gps_received = _arg;
    return *this;
  }
  Type & set__galileo_received(
    const bool & _arg)
  {
    this->galileo_received = _arg;
    return *this;
  }
  Type & set__glonass_received(
    const bool & _arg)
  {
    this->glonass_received = _arg;
    return *this;
  }
  Type & set__beidou_received(
    const bool & _arg)
  {
    this->beidou_received = _arg;
    return *this;
  }
  Type & set__using_gps_msm_messages(
    const bool & _arg)
  {
    this->using_gps_msm_messages = _arg;
    return *this;
  }
  Type & set__using_glonass_msm_messages(
    const bool & _arg)
  {
    this->using_glonass_msm_messages = _arg;
    return *this;
  }
  Type & set__dongle_status_read_failed(
    const bool & _arg)
  {
    this->dongle_status_read_failed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusEpochStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusEpochStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusEpochStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusEpochStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusEpochStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusEpochStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusEpochStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusEpochStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusEpochStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusEpochStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusEpochStatus
    std::shared_ptr<microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusEpochStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusEpochStatus
    std::shared_ptr<microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusEpochStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MipGnssCorrectionsRtkCorrectionsStatusEpochStatus_ & other) const
  {
    if (this->antenna_location_received != other.antenna_location_received) {
      return false;
    }
    if (this->antenna_description_received != other.antenna_description_received) {
      return false;
    }
    if (this->gps_received != other.gps_received) {
      return false;
    }
    if (this->galileo_received != other.galileo_received) {
      return false;
    }
    if (this->glonass_received != other.glonass_received) {
      return false;
    }
    if (this->beidou_received != other.beidou_received) {
      return false;
    }
    if (this->using_gps_msm_messages != other.using_gps_msm_messages) {
      return false;
    }
    if (this->using_glonass_msm_messages != other.using_glonass_msm_messages) {
      return false;
    }
    if (this->dongle_status_read_failed != other.dongle_status_read_failed) {
      return false;
    }
    return true;
  }
  bool operator!=(const MipGnssCorrectionsRtkCorrectionsStatusEpochStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MipGnssCorrectionsRtkCorrectionsStatusEpochStatus_

// alias to use template instance with default allocator
using MipGnssCorrectionsRtkCorrectionsStatusEpochStatus =
  microstrain_inertial_msgs::msg::MipGnssCorrectionsRtkCorrectionsStatusEpochStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace microstrain_inertial_msgs

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GNSS_CORRECTIONS_RTK_CORRECTIONS_STATUS_EPOCH_STATUS__STRUCT_HPP_
