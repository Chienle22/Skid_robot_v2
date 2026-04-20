// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from microstrain_inertial_msgs:msg/MipFilterGnssPositionAidingStatusStatus.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_GNSS_POSITION_AIDING_STATUS_STATUS__STRUCT_HPP_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_GNSS_POSITION_AIDING_STATUS_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatusStatus __attribute__((deprecated))
#else
# define DEPRECATED__microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatusStatus __declspec(deprecated)
#endif

namespace microstrain_inertial_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MipFilterGnssPositionAidingStatusStatus_
{
  using Type = MipFilterGnssPositionAidingStatusStatus_<ContainerAllocator>;

  explicit MipFilterGnssPositionAidingStatusStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tight_coupling = false;
      this->differential = false;
      this->integer_fix = false;
      this->gps_l1 = false;
      this->gps_l2 = false;
      this->gps_l5 = false;
      this->glo_l1 = false;
      this->glo_l2 = false;
      this->gal_e1 = false;
      this->gal_e5 = false;
      this->gal_e6 = false;
      this->bei_b1 = false;
      this->bei_b2 = false;
      this->bei_b3 = false;
      this->no_fix = false;
      this->config_error = false;
    }
  }

  explicit MipFilterGnssPositionAidingStatusStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tight_coupling = false;
      this->differential = false;
      this->integer_fix = false;
      this->gps_l1 = false;
      this->gps_l2 = false;
      this->gps_l5 = false;
      this->glo_l1 = false;
      this->glo_l2 = false;
      this->gal_e1 = false;
      this->gal_e5 = false;
      this->gal_e6 = false;
      this->bei_b1 = false;
      this->bei_b2 = false;
      this->bei_b3 = false;
      this->no_fix = false;
      this->config_error = false;
    }
  }

  // field types and members
  using _tight_coupling_type =
    bool;
  _tight_coupling_type tight_coupling;
  using _differential_type =
    bool;
  _differential_type differential;
  using _integer_fix_type =
    bool;
  _integer_fix_type integer_fix;
  using _gps_l1_type =
    bool;
  _gps_l1_type gps_l1;
  using _gps_l2_type =
    bool;
  _gps_l2_type gps_l2;
  using _gps_l5_type =
    bool;
  _gps_l5_type gps_l5;
  using _glo_l1_type =
    bool;
  _glo_l1_type glo_l1;
  using _glo_l2_type =
    bool;
  _glo_l2_type glo_l2;
  using _gal_e1_type =
    bool;
  _gal_e1_type gal_e1;
  using _gal_e5_type =
    bool;
  _gal_e5_type gal_e5;
  using _gal_e6_type =
    bool;
  _gal_e6_type gal_e6;
  using _bei_b1_type =
    bool;
  _bei_b1_type bei_b1;
  using _bei_b2_type =
    bool;
  _bei_b2_type bei_b2;
  using _bei_b3_type =
    bool;
  _bei_b3_type bei_b3;
  using _no_fix_type =
    bool;
  _no_fix_type no_fix;
  using _config_error_type =
    bool;
  _config_error_type config_error;

  // setters for named parameter idiom
  Type & set__tight_coupling(
    const bool & _arg)
  {
    this->tight_coupling = _arg;
    return *this;
  }
  Type & set__differential(
    const bool & _arg)
  {
    this->differential = _arg;
    return *this;
  }
  Type & set__integer_fix(
    const bool & _arg)
  {
    this->integer_fix = _arg;
    return *this;
  }
  Type & set__gps_l1(
    const bool & _arg)
  {
    this->gps_l1 = _arg;
    return *this;
  }
  Type & set__gps_l2(
    const bool & _arg)
  {
    this->gps_l2 = _arg;
    return *this;
  }
  Type & set__gps_l5(
    const bool & _arg)
  {
    this->gps_l5 = _arg;
    return *this;
  }
  Type & set__glo_l1(
    const bool & _arg)
  {
    this->glo_l1 = _arg;
    return *this;
  }
  Type & set__glo_l2(
    const bool & _arg)
  {
    this->glo_l2 = _arg;
    return *this;
  }
  Type & set__gal_e1(
    const bool & _arg)
  {
    this->gal_e1 = _arg;
    return *this;
  }
  Type & set__gal_e5(
    const bool & _arg)
  {
    this->gal_e5 = _arg;
    return *this;
  }
  Type & set__gal_e6(
    const bool & _arg)
  {
    this->gal_e6 = _arg;
    return *this;
  }
  Type & set__bei_b1(
    const bool & _arg)
  {
    this->bei_b1 = _arg;
    return *this;
  }
  Type & set__bei_b2(
    const bool & _arg)
  {
    this->bei_b2 = _arg;
    return *this;
  }
  Type & set__bei_b3(
    const bool & _arg)
  {
    this->bei_b3 = _arg;
    return *this;
  }
  Type & set__no_fix(
    const bool & _arg)
  {
    this->no_fix = _arg;
    return *this;
  }
  Type & set__config_error(
    const bool & _arg)
  {
    this->config_error = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatusStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatusStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatusStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatusStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatusStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatusStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatusStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatusStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatusStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatusStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatusStatus
    std::shared_ptr<microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatusStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__microstrain_inertial_msgs__msg__MipFilterGnssPositionAidingStatusStatus
    std::shared_ptr<microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatusStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MipFilterGnssPositionAidingStatusStatus_ & other) const
  {
    if (this->tight_coupling != other.tight_coupling) {
      return false;
    }
    if (this->differential != other.differential) {
      return false;
    }
    if (this->integer_fix != other.integer_fix) {
      return false;
    }
    if (this->gps_l1 != other.gps_l1) {
      return false;
    }
    if (this->gps_l2 != other.gps_l2) {
      return false;
    }
    if (this->gps_l5 != other.gps_l5) {
      return false;
    }
    if (this->glo_l1 != other.glo_l1) {
      return false;
    }
    if (this->glo_l2 != other.glo_l2) {
      return false;
    }
    if (this->gal_e1 != other.gal_e1) {
      return false;
    }
    if (this->gal_e5 != other.gal_e5) {
      return false;
    }
    if (this->gal_e6 != other.gal_e6) {
      return false;
    }
    if (this->bei_b1 != other.bei_b1) {
      return false;
    }
    if (this->bei_b2 != other.bei_b2) {
      return false;
    }
    if (this->bei_b3 != other.bei_b3) {
      return false;
    }
    if (this->no_fix != other.no_fix) {
      return false;
    }
    if (this->config_error != other.config_error) {
      return false;
    }
    return true;
  }
  bool operator!=(const MipFilterGnssPositionAidingStatusStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MipFilterGnssPositionAidingStatusStatus_

// alias to use template instance with default allocator
using MipFilterGnssPositionAidingStatusStatus =
  microstrain_inertial_msgs::msg::MipFilterGnssPositionAidingStatusStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace microstrain_inertial_msgs

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_GNSS_POSITION_AIDING_STATUS_STATUS__STRUCT_HPP_
