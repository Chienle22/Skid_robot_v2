// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from microstrain_inertial_msgs:msg/MipGnssRfErrorDetection.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GNSS_RF_ERROR_DETECTION__STRUCT_HPP_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GNSS_RF_ERROR_DETECTION__STRUCT_HPP_

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
# define DEPRECATED__microstrain_inertial_msgs__msg__MipGnssRfErrorDetection __attribute__((deprecated))
#else
# define DEPRECATED__microstrain_inertial_msgs__msg__MipGnssRfErrorDetection __declspec(deprecated)
#endif

namespace microstrain_inertial_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MipGnssRfErrorDetection_
{
  using Type = MipGnssRfErrorDetection_<ContainerAllocator>;

  explicit MipGnssRfErrorDetection_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rf_band = 0;
      this->jamming_state = 0;
      this->spoofing_state = 0;
    }
  }

  explicit MipGnssRfErrorDetection_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rf_band = 0;
      this->jamming_state = 0;
      this->spoofing_state = 0;
    }
  }

  // field types and members
  using _header_type =
    microstrain_inertial_msgs::msg::MipHeader_<ContainerAllocator>;
  _header_type header;
  using _rf_band_type =
    uint8_t;
  _rf_band_type rf_band;
  using _jamming_state_type =
    uint8_t;
  _jamming_state_type jamming_state;
  using _spoofing_state_type =
    uint8_t;
  _spoofing_state_type spoofing_state;

  // setters for named parameter idiom
  Type & set__header(
    const microstrain_inertial_msgs::msg::MipHeader_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__rf_band(
    const uint8_t & _arg)
  {
    this->rf_band = _arg;
    return *this;
  }
  Type & set__jamming_state(
    const uint8_t & _arg)
  {
    this->jamming_state = _arg;
    return *this;
  }
  Type & set__spoofing_state(
    const uint8_t & _arg)
  {
    this->spoofing_state = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t RF_BAND_UNKNOWN =
    0u;
  static constexpr uint8_t RF_BAND_L1 =
    1u;
  static constexpr uint8_t RF_BAND_L2 =
    2u;
  static constexpr uint8_t RF_BAND_L5 =
    5u;
  static constexpr uint8_t JAMMING_STATE_UNKNOWN =
    0u;
  static constexpr uint8_t JAMMING_STATE_NONE =
    1u;
  static constexpr uint8_t JAMMING_STATE_PARTIAL =
    2u;
  static constexpr uint8_t JAMMING_STATE_SIGNIFICANT =
    3u;
  static constexpr uint8_t SPOOFING_STATE_UNKNOWN =
    0u;
  static constexpr uint8_t SPOOFING_STATE_NONE =
    1u;
  static constexpr uint8_t SPOOFING_STATE_PARTIAL =
    2u;
  static constexpr uint8_t SPOOFING_STATE_SIGNIFICANT =
    3u;

  // pointer types
  using RawPtr =
    microstrain_inertial_msgs::msg::MipGnssRfErrorDetection_<ContainerAllocator> *;
  using ConstRawPtr =
    const microstrain_inertial_msgs::msg::MipGnssRfErrorDetection_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<microstrain_inertial_msgs::msg::MipGnssRfErrorDetection_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<microstrain_inertial_msgs::msg::MipGnssRfErrorDetection_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      microstrain_inertial_msgs::msg::MipGnssRfErrorDetection_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<microstrain_inertial_msgs::msg::MipGnssRfErrorDetection_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      microstrain_inertial_msgs::msg::MipGnssRfErrorDetection_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<microstrain_inertial_msgs::msg::MipGnssRfErrorDetection_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<microstrain_inertial_msgs::msg::MipGnssRfErrorDetection_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<microstrain_inertial_msgs::msg::MipGnssRfErrorDetection_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__microstrain_inertial_msgs__msg__MipGnssRfErrorDetection
    std::shared_ptr<microstrain_inertial_msgs::msg::MipGnssRfErrorDetection_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__microstrain_inertial_msgs__msg__MipGnssRfErrorDetection
    std::shared_ptr<microstrain_inertial_msgs::msg::MipGnssRfErrorDetection_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MipGnssRfErrorDetection_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->rf_band != other.rf_band) {
      return false;
    }
    if (this->jamming_state != other.jamming_state) {
      return false;
    }
    if (this->spoofing_state != other.spoofing_state) {
      return false;
    }
    return true;
  }
  bool operator!=(const MipGnssRfErrorDetection_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MipGnssRfErrorDetection_

// alias to use template instance with default allocator
using MipGnssRfErrorDetection =
  microstrain_inertial_msgs::msg::MipGnssRfErrorDetection_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MipGnssRfErrorDetection_<ContainerAllocator>::RF_BAND_UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MipGnssRfErrorDetection_<ContainerAllocator>::RF_BAND_L1;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MipGnssRfErrorDetection_<ContainerAllocator>::RF_BAND_L2;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MipGnssRfErrorDetection_<ContainerAllocator>::RF_BAND_L5;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MipGnssRfErrorDetection_<ContainerAllocator>::JAMMING_STATE_UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MipGnssRfErrorDetection_<ContainerAllocator>::JAMMING_STATE_NONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MipGnssRfErrorDetection_<ContainerAllocator>::JAMMING_STATE_PARTIAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MipGnssRfErrorDetection_<ContainerAllocator>::JAMMING_STATE_SIGNIFICANT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MipGnssRfErrorDetection_<ContainerAllocator>::SPOOFING_STATE_UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MipGnssRfErrorDetection_<ContainerAllocator>::SPOOFING_STATE_NONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MipGnssRfErrorDetection_<ContainerAllocator>::SPOOFING_STATE_PARTIAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MipGnssRfErrorDetection_<ContainerAllocator>::SPOOFING_STATE_SIGNIFICANT;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace microstrain_inertial_msgs

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GNSS_RF_ERROR_DETECTION__STRUCT_HPP_
