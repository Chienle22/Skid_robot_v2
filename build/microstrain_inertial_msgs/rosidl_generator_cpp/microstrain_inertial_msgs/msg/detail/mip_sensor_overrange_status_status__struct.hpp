// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from microstrain_inertial_msgs:msg/MipSensorOverrangeStatusStatus.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_SENSOR_OVERRANGE_STATUS_STATUS__STRUCT_HPP_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_SENSOR_OVERRANGE_STATUS_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__microstrain_inertial_msgs__msg__MipSensorOverrangeStatusStatus __attribute__((deprecated))
#else
# define DEPRECATED__microstrain_inertial_msgs__msg__MipSensorOverrangeStatusStatus __declspec(deprecated)
#endif

namespace microstrain_inertial_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MipSensorOverrangeStatusStatus_
{
  using Type = MipSensorOverrangeStatusStatus_<ContainerAllocator>;

  explicit MipSensorOverrangeStatusStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accel_x = false;
      this->accel_y = false;
      this->accel_z = false;
      this->gyro_x = false;
      this->gyro_y = false;
      this->gyro_z = false;
      this->mag_x = false;
      this->mag_y = false;
      this->mag_z = false;
      this->press = false;
    }
  }

  explicit MipSensorOverrangeStatusStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accel_x = false;
      this->accel_y = false;
      this->accel_z = false;
      this->gyro_x = false;
      this->gyro_y = false;
      this->gyro_z = false;
      this->mag_x = false;
      this->mag_y = false;
      this->mag_z = false;
      this->press = false;
    }
  }

  // field types and members
  using _accel_x_type =
    bool;
  _accel_x_type accel_x;
  using _accel_y_type =
    bool;
  _accel_y_type accel_y;
  using _accel_z_type =
    bool;
  _accel_z_type accel_z;
  using _gyro_x_type =
    bool;
  _gyro_x_type gyro_x;
  using _gyro_y_type =
    bool;
  _gyro_y_type gyro_y;
  using _gyro_z_type =
    bool;
  _gyro_z_type gyro_z;
  using _mag_x_type =
    bool;
  _mag_x_type mag_x;
  using _mag_y_type =
    bool;
  _mag_y_type mag_y;
  using _mag_z_type =
    bool;
  _mag_z_type mag_z;
  using _press_type =
    bool;
  _press_type press;

  // setters for named parameter idiom
  Type & set__accel_x(
    const bool & _arg)
  {
    this->accel_x = _arg;
    return *this;
  }
  Type & set__accel_y(
    const bool & _arg)
  {
    this->accel_y = _arg;
    return *this;
  }
  Type & set__accel_z(
    const bool & _arg)
  {
    this->accel_z = _arg;
    return *this;
  }
  Type & set__gyro_x(
    const bool & _arg)
  {
    this->gyro_x = _arg;
    return *this;
  }
  Type & set__gyro_y(
    const bool & _arg)
  {
    this->gyro_y = _arg;
    return *this;
  }
  Type & set__gyro_z(
    const bool & _arg)
  {
    this->gyro_z = _arg;
    return *this;
  }
  Type & set__mag_x(
    const bool & _arg)
  {
    this->mag_x = _arg;
    return *this;
  }
  Type & set__mag_y(
    const bool & _arg)
  {
    this->mag_y = _arg;
    return *this;
  }
  Type & set__mag_z(
    const bool & _arg)
  {
    this->mag_z = _arg;
    return *this;
  }
  Type & set__press(
    const bool & _arg)
  {
    this->press = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    microstrain_inertial_msgs::msg::MipSensorOverrangeStatusStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const microstrain_inertial_msgs::msg::MipSensorOverrangeStatusStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<microstrain_inertial_msgs::msg::MipSensorOverrangeStatusStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<microstrain_inertial_msgs::msg::MipSensorOverrangeStatusStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      microstrain_inertial_msgs::msg::MipSensorOverrangeStatusStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<microstrain_inertial_msgs::msg::MipSensorOverrangeStatusStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      microstrain_inertial_msgs::msg::MipSensorOverrangeStatusStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<microstrain_inertial_msgs::msg::MipSensorOverrangeStatusStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<microstrain_inertial_msgs::msg::MipSensorOverrangeStatusStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<microstrain_inertial_msgs::msg::MipSensorOverrangeStatusStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__microstrain_inertial_msgs__msg__MipSensorOverrangeStatusStatus
    std::shared_ptr<microstrain_inertial_msgs::msg::MipSensorOverrangeStatusStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__microstrain_inertial_msgs__msg__MipSensorOverrangeStatusStatus
    std::shared_ptr<microstrain_inertial_msgs::msg::MipSensorOverrangeStatusStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MipSensorOverrangeStatusStatus_ & other) const
  {
    if (this->accel_x != other.accel_x) {
      return false;
    }
    if (this->accel_y != other.accel_y) {
      return false;
    }
    if (this->accel_z != other.accel_z) {
      return false;
    }
    if (this->gyro_x != other.gyro_x) {
      return false;
    }
    if (this->gyro_y != other.gyro_y) {
      return false;
    }
    if (this->gyro_z != other.gyro_z) {
      return false;
    }
    if (this->mag_x != other.mag_x) {
      return false;
    }
    if (this->mag_y != other.mag_y) {
      return false;
    }
    if (this->mag_z != other.mag_z) {
      return false;
    }
    if (this->press != other.press) {
      return false;
    }
    return true;
  }
  bool operator!=(const MipSensorOverrangeStatusStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MipSensorOverrangeStatusStatus_

// alias to use template instance with default allocator
using MipSensorOverrangeStatusStatus =
  microstrain_inertial_msgs::msg::MipSensorOverrangeStatusStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace microstrain_inertial_msgs

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_SENSOR_OVERRANGE_STATUS_STATUS__STRUCT_HPP_
