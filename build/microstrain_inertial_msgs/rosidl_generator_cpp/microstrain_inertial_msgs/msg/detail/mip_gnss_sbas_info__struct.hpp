// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from microstrain_inertial_msgs:msg/MipGnssSbasInfo.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GNSS_SBAS_INFO__STRUCT_HPP_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GNSS_SBAS_INFO__STRUCT_HPP_

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
// Member 'sbas_status'
#include "microstrain_inertial_msgs/msg/detail/mip_gnss_sbas_info_sbas_status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__microstrain_inertial_msgs__msg__MipGnssSbasInfo __attribute__((deprecated))
#else
# define DEPRECATED__microstrain_inertial_msgs__msg__MipGnssSbasInfo __declspec(deprecated)
#endif

namespace microstrain_inertial_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MipGnssSbasInfo_
{
  using Type = MipGnssSbasInfo_<ContainerAllocator>;

  explicit MipGnssSbasInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    sbas_status(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_of_week = 0.0;
      this->week_number = 0;
      this->sbas_system = 0;
      this->sbas_id = 0;
      this->count = 0;
    }
  }

  explicit MipGnssSbasInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    sbas_status(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_of_week = 0.0;
      this->week_number = 0;
      this->sbas_system = 0;
      this->sbas_id = 0;
      this->count = 0;
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
  using _sbas_system_type =
    uint8_t;
  _sbas_system_type sbas_system;
  using _sbas_id_type =
    uint8_t;
  _sbas_id_type sbas_id;
  using _count_type =
    uint8_t;
  _count_type count;
  using _sbas_status_type =
    microstrain_inertial_msgs::msg::MipGnssSbasInfoSbasStatus_<ContainerAllocator>;
  _sbas_status_type sbas_status;

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
  Type & set__sbas_system(
    const uint8_t & _arg)
  {
    this->sbas_system = _arg;
    return *this;
  }
  Type & set__sbas_id(
    const uint8_t & _arg)
  {
    this->sbas_id = _arg;
    return *this;
  }
  Type & set__count(
    const uint8_t & _arg)
  {
    this->count = _arg;
    return *this;
  }
  Type & set__sbas_status(
    const microstrain_inertial_msgs::msg::MipGnssSbasInfoSbasStatus_<ContainerAllocator> & _arg)
  {
    this->sbas_status = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t SBAS_SYSTEM_UNKNOWN =
    0u;
  static constexpr uint8_t SBAS_SYSTEM_WAAS =
    1u;
  static constexpr uint8_t SBAS_SYSTEM_EGNOS =
    2u;
  static constexpr uint8_t SBAS_SYSTEM_MSAS =
    3u;
  static constexpr uint8_t SBAS_SYSTEM_GAGAN =
    4u;

  // pointer types
  using RawPtr =
    microstrain_inertial_msgs::msg::MipGnssSbasInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const microstrain_inertial_msgs::msg::MipGnssSbasInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<microstrain_inertial_msgs::msg::MipGnssSbasInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<microstrain_inertial_msgs::msg::MipGnssSbasInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      microstrain_inertial_msgs::msg::MipGnssSbasInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<microstrain_inertial_msgs::msg::MipGnssSbasInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      microstrain_inertial_msgs::msg::MipGnssSbasInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<microstrain_inertial_msgs::msg::MipGnssSbasInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<microstrain_inertial_msgs::msg::MipGnssSbasInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<microstrain_inertial_msgs::msg::MipGnssSbasInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__microstrain_inertial_msgs__msg__MipGnssSbasInfo
    std::shared_ptr<microstrain_inertial_msgs::msg::MipGnssSbasInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__microstrain_inertial_msgs__msg__MipGnssSbasInfo
    std::shared_ptr<microstrain_inertial_msgs::msg::MipGnssSbasInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MipGnssSbasInfo_ & other) const
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
    if (this->sbas_system != other.sbas_system) {
      return false;
    }
    if (this->sbas_id != other.sbas_id) {
      return false;
    }
    if (this->count != other.count) {
      return false;
    }
    if (this->sbas_status != other.sbas_status) {
      return false;
    }
    return true;
  }
  bool operator!=(const MipGnssSbasInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MipGnssSbasInfo_

// alias to use template instance with default allocator
using MipGnssSbasInfo =
  microstrain_inertial_msgs::msg::MipGnssSbasInfo_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MipGnssSbasInfo_<ContainerAllocator>::SBAS_SYSTEM_UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MipGnssSbasInfo_<ContainerAllocator>::SBAS_SYSTEM_WAAS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MipGnssSbasInfo_<ContainerAllocator>::SBAS_SYSTEM_EGNOS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MipGnssSbasInfo_<ContainerAllocator>::SBAS_SYSTEM_MSAS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MipGnssSbasInfo_<ContainerAllocator>::SBAS_SYSTEM_GAGAN;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace microstrain_inertial_msgs

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GNSS_SBAS_INFO__STRUCT_HPP_
