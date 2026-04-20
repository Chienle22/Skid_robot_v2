// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from microstrain_inertial_msgs:msg/MipFilterAidingMeasurementSummary.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_AIDING_MEASUREMENT_SUMMARY__STRUCT_HPP_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_AIDING_MEASUREMENT_SUMMARY__STRUCT_HPP_

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
// Member 'indicator'
#include "microstrain_inertial_msgs/msg/detail/mip_filter_aiding_measurement_summary_indicator__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary __attribute__((deprecated))
#else
# define DEPRECATED__microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary __declspec(deprecated)
#endif

namespace microstrain_inertial_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MipFilterAidingMeasurementSummary_
{
  using Type = MipFilterAidingMeasurementSummary_<ContainerAllocator>;

  explicit MipFilterAidingMeasurementSummary_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    indicator(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_of_week = 0.0;
      this->source = 0;
      this->type = 0;
    }
  }

  explicit MipFilterAidingMeasurementSummary_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    indicator(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_of_week = 0.0;
      this->source = 0;
      this->type = 0;
    }
  }

  // field types and members
  using _header_type =
    microstrain_inertial_msgs::msg::MipHeader_<ContainerAllocator>;
  _header_type header;
  using _time_of_week_type =
    double;
  _time_of_week_type time_of_week;
  using _source_type =
    uint8_t;
  _source_type source;
  using _type_type =
    uint8_t;
  _type_type type;
  using _indicator_type =
    microstrain_inertial_msgs::msg::MipFilterAidingMeasurementSummaryIndicator_<ContainerAllocator>;
  _indicator_type indicator;

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
  Type & set__source(
    const uint8_t & _arg)
  {
    this->source = _arg;
    return *this;
  }
  Type & set__type(
    const uint8_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__indicator(
    const microstrain_inertial_msgs::msg::MipFilterAidingMeasurementSummaryIndicator_<ContainerAllocator> & _arg)
  {
    this->indicator = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t TYPE_GNSS =
    1u;
  static constexpr uint8_t TYPE_DUAL_ANTENNA =
    2u;
  static constexpr uint8_t TYPE_HEADING =
    3u;
  static constexpr uint8_t TYPE_PRESSURE =
    4u;
  static constexpr uint8_t TYPE_MAGNETOMETER =
    5u;
  static constexpr uint8_t TYPE_SPEED =
    6u;

  // pointer types
  using RawPtr =
    microstrain_inertial_msgs::msg::MipFilterAidingMeasurementSummary_<ContainerAllocator> *;
  using ConstRawPtr =
    const microstrain_inertial_msgs::msg::MipFilterAidingMeasurementSummary_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<microstrain_inertial_msgs::msg::MipFilterAidingMeasurementSummary_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<microstrain_inertial_msgs::msg::MipFilterAidingMeasurementSummary_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      microstrain_inertial_msgs::msg::MipFilterAidingMeasurementSummary_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<microstrain_inertial_msgs::msg::MipFilterAidingMeasurementSummary_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      microstrain_inertial_msgs::msg::MipFilterAidingMeasurementSummary_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<microstrain_inertial_msgs::msg::MipFilterAidingMeasurementSummary_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<microstrain_inertial_msgs::msg::MipFilterAidingMeasurementSummary_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<microstrain_inertial_msgs::msg::MipFilterAidingMeasurementSummary_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary
    std::shared_ptr<microstrain_inertial_msgs::msg::MipFilterAidingMeasurementSummary_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__microstrain_inertial_msgs__msg__MipFilterAidingMeasurementSummary
    std::shared_ptr<microstrain_inertial_msgs::msg::MipFilterAidingMeasurementSummary_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MipFilterAidingMeasurementSummary_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->time_of_week != other.time_of_week) {
      return false;
    }
    if (this->source != other.source) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->indicator != other.indicator) {
      return false;
    }
    return true;
  }
  bool operator!=(const MipFilterAidingMeasurementSummary_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MipFilterAidingMeasurementSummary_

// alias to use template instance with default allocator
using MipFilterAidingMeasurementSummary =
  microstrain_inertial_msgs::msg::MipFilterAidingMeasurementSummary_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MipFilterAidingMeasurementSummary_<ContainerAllocator>::TYPE_GNSS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MipFilterAidingMeasurementSummary_<ContainerAllocator>::TYPE_DUAL_ANTENNA;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MipFilterAidingMeasurementSummary_<ContainerAllocator>::TYPE_HEADING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MipFilterAidingMeasurementSummary_<ContainerAllocator>::TYPE_PRESSURE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MipFilterAidingMeasurementSummary_<ContainerAllocator>::TYPE_MAGNETOMETER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MipFilterAidingMeasurementSummary_<ContainerAllocator>::TYPE_SPEED;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace microstrain_inertial_msgs

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_AIDING_MEASUREMENT_SUMMARY__STRUCT_HPP_
