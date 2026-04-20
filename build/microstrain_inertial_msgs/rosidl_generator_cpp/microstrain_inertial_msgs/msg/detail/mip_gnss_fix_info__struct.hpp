// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from microstrain_inertial_msgs:msg/MipGnssFixInfo.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GNSS_FIX_INFO__STRUCT_HPP_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GNSS_FIX_INFO__STRUCT_HPP_

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
// Member 'fix_flags'
#include "microstrain_inertial_msgs/msg/detail/mip_gnss_fix_info_fix_flags__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__microstrain_inertial_msgs__msg__MipGnssFixInfo __attribute__((deprecated))
#else
# define DEPRECATED__microstrain_inertial_msgs__msg__MipGnssFixInfo __declspec(deprecated)
#endif

namespace microstrain_inertial_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MipGnssFixInfo_
{
  using Type = MipGnssFixInfo_<ContainerAllocator>;

  explicit MipGnssFixInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    fix_flags(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fix_type = 0;
      this->num_sv = 0;
    }
  }

  explicit MipGnssFixInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    fix_flags(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fix_type = 0;
      this->num_sv = 0;
    }
  }

  // field types and members
  using _header_type =
    microstrain_inertial_msgs::msg::MipHeader_<ContainerAllocator>;
  _header_type header;
  using _fix_type_type =
    uint8_t;
  _fix_type_type fix_type;
  using _num_sv_type =
    uint8_t;
  _num_sv_type num_sv;
  using _fix_flags_type =
    microstrain_inertial_msgs::msg::MipGnssFixInfoFixFlags_<ContainerAllocator>;
  _fix_flags_type fix_flags;

  // setters for named parameter idiom
  Type & set__header(
    const microstrain_inertial_msgs::msg::MipHeader_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__fix_type(
    const uint8_t & _arg)
  {
    this->fix_type = _arg;
    return *this;
  }
  Type & set__num_sv(
    const uint8_t & _arg)
  {
    this->num_sv = _arg;
    return *this;
  }
  Type & set__fix_flags(
    const microstrain_inertial_msgs::msg::MipGnssFixInfoFixFlags_<ContainerAllocator> & _arg)
  {
    this->fix_flags = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t FIX_TYPE_FIX_3D =
    0u;
  static constexpr uint8_t FIX_TYPE_FIX_2D =
    1u;
  static constexpr uint8_t FIX_TYPE_FIX_TIME_ONLY =
    2u;
  static constexpr uint8_t FIX_TYPE_FIX_NONE =
    3u;
  static constexpr uint8_t FIX_TYPE_FIX_INVALID =
    4u;
  static constexpr uint8_t FIX_TYPE_FIX_RTK_FLOAT =
    5u;
  static constexpr uint8_t FIX_TYPE_FIX_RTK_FIXED =
    6u;

  // pointer types
  using RawPtr =
    microstrain_inertial_msgs::msg::MipGnssFixInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const microstrain_inertial_msgs::msg::MipGnssFixInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<microstrain_inertial_msgs::msg::MipGnssFixInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<microstrain_inertial_msgs::msg::MipGnssFixInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      microstrain_inertial_msgs::msg::MipGnssFixInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<microstrain_inertial_msgs::msg::MipGnssFixInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      microstrain_inertial_msgs::msg::MipGnssFixInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<microstrain_inertial_msgs::msg::MipGnssFixInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<microstrain_inertial_msgs::msg::MipGnssFixInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<microstrain_inertial_msgs::msg::MipGnssFixInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__microstrain_inertial_msgs__msg__MipGnssFixInfo
    std::shared_ptr<microstrain_inertial_msgs::msg::MipGnssFixInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__microstrain_inertial_msgs__msg__MipGnssFixInfo
    std::shared_ptr<microstrain_inertial_msgs::msg::MipGnssFixInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MipGnssFixInfo_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->fix_type != other.fix_type) {
      return false;
    }
    if (this->num_sv != other.num_sv) {
      return false;
    }
    if (this->fix_flags != other.fix_flags) {
      return false;
    }
    return true;
  }
  bool operator!=(const MipGnssFixInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MipGnssFixInfo_

// alias to use template instance with default allocator
using MipGnssFixInfo =
  microstrain_inertial_msgs::msg::MipGnssFixInfo_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MipGnssFixInfo_<ContainerAllocator>::FIX_TYPE_FIX_3D;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MipGnssFixInfo_<ContainerAllocator>::FIX_TYPE_FIX_2D;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MipGnssFixInfo_<ContainerAllocator>::FIX_TYPE_FIX_TIME_ONLY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MipGnssFixInfo_<ContainerAllocator>::FIX_TYPE_FIX_NONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MipGnssFixInfo_<ContainerAllocator>::FIX_TYPE_FIX_INVALID;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MipGnssFixInfo_<ContainerAllocator>::FIX_TYPE_FIX_RTK_FLOAT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MipGnssFixInfo_<ContainerAllocator>::FIX_TYPE_FIX_RTK_FIXED;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace microstrain_inertial_msgs

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GNSS_FIX_INFO__STRUCT_HPP_
