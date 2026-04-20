// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from microstrain_inertial_msgs:msg/MipSensorTemperatureStatistics.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_SENSOR_TEMPERATURE_STATISTICS__STRUCT_HPP_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_SENSOR_TEMPERATURE_STATISTICS__STRUCT_HPP_

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
# define DEPRECATED__microstrain_inertial_msgs__msg__MipSensorTemperatureStatistics __attribute__((deprecated))
#else
# define DEPRECATED__microstrain_inertial_msgs__msg__MipSensorTemperatureStatistics __declspec(deprecated)
#endif

namespace microstrain_inertial_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MipSensorTemperatureStatistics_
{
  using Type = MipSensorTemperatureStatistics_<ContainerAllocator>;

  explicit MipSensorTemperatureStatistics_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->min_temp = 0.0f;
      this->max_temp = 0.0f;
      this->mean_temp = 0.0f;
    }
  }

  explicit MipSensorTemperatureStatistics_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->min_temp = 0.0f;
      this->max_temp = 0.0f;
      this->mean_temp = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    microstrain_inertial_msgs::msg::MipHeader_<ContainerAllocator>;
  _header_type header;
  using _min_temp_type =
    float;
  _min_temp_type min_temp;
  using _max_temp_type =
    float;
  _max_temp_type max_temp;
  using _mean_temp_type =
    float;
  _mean_temp_type mean_temp;

  // setters for named parameter idiom
  Type & set__header(
    const microstrain_inertial_msgs::msg::MipHeader_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__min_temp(
    const float & _arg)
  {
    this->min_temp = _arg;
    return *this;
  }
  Type & set__max_temp(
    const float & _arg)
  {
    this->max_temp = _arg;
    return *this;
  }
  Type & set__mean_temp(
    const float & _arg)
  {
    this->mean_temp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    microstrain_inertial_msgs::msg::MipSensorTemperatureStatistics_<ContainerAllocator> *;
  using ConstRawPtr =
    const microstrain_inertial_msgs::msg::MipSensorTemperatureStatistics_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<microstrain_inertial_msgs::msg::MipSensorTemperatureStatistics_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<microstrain_inertial_msgs::msg::MipSensorTemperatureStatistics_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      microstrain_inertial_msgs::msg::MipSensorTemperatureStatistics_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<microstrain_inertial_msgs::msg::MipSensorTemperatureStatistics_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      microstrain_inertial_msgs::msg::MipSensorTemperatureStatistics_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<microstrain_inertial_msgs::msg::MipSensorTemperatureStatistics_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<microstrain_inertial_msgs::msg::MipSensorTemperatureStatistics_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<microstrain_inertial_msgs::msg::MipSensorTemperatureStatistics_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__microstrain_inertial_msgs__msg__MipSensorTemperatureStatistics
    std::shared_ptr<microstrain_inertial_msgs::msg::MipSensorTemperatureStatistics_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__microstrain_inertial_msgs__msg__MipSensorTemperatureStatistics
    std::shared_ptr<microstrain_inertial_msgs::msg::MipSensorTemperatureStatistics_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MipSensorTemperatureStatistics_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->min_temp != other.min_temp) {
      return false;
    }
    if (this->max_temp != other.max_temp) {
      return false;
    }
    if (this->mean_temp != other.mean_temp) {
      return false;
    }
    return true;
  }
  bool operator!=(const MipSensorTemperatureStatistics_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MipSensorTemperatureStatistics_

// alias to use template instance with default allocator
using MipSensorTemperatureStatistics =
  microstrain_inertial_msgs::msg::MipSensorTemperatureStatistics_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace microstrain_inertial_msgs

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_SENSOR_TEMPERATURE_STATISTICS__STRUCT_HPP_
