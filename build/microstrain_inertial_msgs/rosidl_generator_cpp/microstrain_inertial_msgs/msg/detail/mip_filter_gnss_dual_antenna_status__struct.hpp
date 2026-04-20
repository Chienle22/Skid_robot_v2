// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from microstrain_inertial_msgs:msg/MipFilterGnssDualAntennaStatus.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_GNSS_DUAL_ANTENNA_STATUS__STRUCT_HPP_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_GNSS_DUAL_ANTENNA_STATUS__STRUCT_HPP_

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
// Member 'status_flags'
#include "microstrain_inertial_msgs/msg/detail/mip_filter_gnss_dual_antenna_status_status_flags__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus __attribute__((deprecated))
#else
# define DEPRECATED__microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus __declspec(deprecated)
#endif

namespace microstrain_inertial_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MipFilterGnssDualAntennaStatus_
{
  using Type = MipFilterGnssDualAntennaStatus_<ContainerAllocator>;

  explicit MipFilterGnssDualAntennaStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    status_flags(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_of_week = 0.0f;
      this->heading = 0.0f;
      this->heading_unc = 0.0f;
      this->fix_type = 0;
      this->valid_flags = 0;
    }
  }

  explicit MipFilterGnssDualAntennaStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    status_flags(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_of_week = 0.0f;
      this->heading = 0.0f;
      this->heading_unc = 0.0f;
      this->fix_type = 0;
      this->valid_flags = 0;
    }
  }

  // field types and members
  using _header_type =
    microstrain_inertial_msgs::msg::MipHeader_<ContainerAllocator>;
  _header_type header;
  using _time_of_week_type =
    float;
  _time_of_week_type time_of_week;
  using _heading_type =
    float;
  _heading_type heading;
  using _heading_unc_type =
    float;
  _heading_unc_type heading_unc;
  using _fix_type_type =
    uint8_t;
  _fix_type_type fix_type;
  using _status_flags_type =
    microstrain_inertial_msgs::msg::MipFilterGnssDualAntennaStatusStatusFlags_<ContainerAllocator>;
  _status_flags_type status_flags;
  using _valid_flags_type =
    uint16_t;
  _valid_flags_type valid_flags;

  // setters for named parameter idiom
  Type & set__header(
    const microstrain_inertial_msgs::msg::MipHeader_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__time_of_week(
    const float & _arg)
  {
    this->time_of_week = _arg;
    return *this;
  }
  Type & set__heading(
    const float & _arg)
  {
    this->heading = _arg;
    return *this;
  }
  Type & set__heading_unc(
    const float & _arg)
  {
    this->heading_unc = _arg;
    return *this;
  }
  Type & set__fix_type(
    const uint8_t & _arg)
  {
    this->fix_type = _arg;
    return *this;
  }
  Type & set__status_flags(
    const microstrain_inertial_msgs::msg::MipFilterGnssDualAntennaStatusStatusFlags_<ContainerAllocator> & _arg)
  {
    this->status_flags = _arg;
    return *this;
  }
  Type & set__valid_flags(
    const uint16_t & _arg)
  {
    this->valid_flags = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t FIX_TYPE_FIX_NONE =
    0u;
  static constexpr uint8_t FIX_TYPE_FIX_DA_FLOAT =
    1u;
  static constexpr uint8_t FIX_TYPE_FIX_DA_FIXED =
    2u;

  // pointer types
  using RawPtr =
    microstrain_inertial_msgs::msg::MipFilterGnssDualAntennaStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const microstrain_inertial_msgs::msg::MipFilterGnssDualAntennaStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<microstrain_inertial_msgs::msg::MipFilterGnssDualAntennaStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<microstrain_inertial_msgs::msg::MipFilterGnssDualAntennaStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      microstrain_inertial_msgs::msg::MipFilterGnssDualAntennaStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<microstrain_inertial_msgs::msg::MipFilterGnssDualAntennaStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      microstrain_inertial_msgs::msg::MipFilterGnssDualAntennaStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<microstrain_inertial_msgs::msg::MipFilterGnssDualAntennaStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<microstrain_inertial_msgs::msg::MipFilterGnssDualAntennaStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<microstrain_inertial_msgs::msg::MipFilterGnssDualAntennaStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus
    std::shared_ptr<microstrain_inertial_msgs::msg::MipFilterGnssDualAntennaStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatus
    std::shared_ptr<microstrain_inertial_msgs::msg::MipFilterGnssDualAntennaStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MipFilterGnssDualAntennaStatus_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->time_of_week != other.time_of_week) {
      return false;
    }
    if (this->heading != other.heading) {
      return false;
    }
    if (this->heading_unc != other.heading_unc) {
      return false;
    }
    if (this->fix_type != other.fix_type) {
      return false;
    }
    if (this->status_flags != other.status_flags) {
      return false;
    }
    if (this->valid_flags != other.valid_flags) {
      return false;
    }
    return true;
  }
  bool operator!=(const MipFilterGnssDualAntennaStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MipFilterGnssDualAntennaStatus_

// alias to use template instance with default allocator
using MipFilterGnssDualAntennaStatus =
  microstrain_inertial_msgs::msg::MipFilterGnssDualAntennaStatus_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MipFilterGnssDualAntennaStatus_<ContainerAllocator>::FIX_TYPE_FIX_NONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MipFilterGnssDualAntennaStatus_<ContainerAllocator>::FIX_TYPE_FIX_DA_FLOAT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MipFilterGnssDualAntennaStatus_<ContainerAllocator>::FIX_TYPE_FIX_DA_FIXED;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace microstrain_inertial_msgs

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_GNSS_DUAL_ANTENNA_STATUS__STRUCT_HPP_
