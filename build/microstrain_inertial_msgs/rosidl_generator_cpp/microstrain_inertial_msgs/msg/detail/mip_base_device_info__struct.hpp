// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from microstrain_inertial_msgs:msg/MipBaseDeviceInfo.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_BASE_DEVICE_INFO__STRUCT_HPP_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_BASE_DEVICE_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__microstrain_inertial_msgs__msg__MipBaseDeviceInfo __attribute__((deprecated))
#else
# define DEPRECATED__microstrain_inertial_msgs__msg__MipBaseDeviceInfo __declspec(deprecated)
#endif

namespace microstrain_inertial_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MipBaseDeviceInfo_
{
  using Type = MipBaseDeviceInfo_<ContainerAllocator>;

  explicit MipBaseDeviceInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->firmware_version = "";
      this->model_name = "";
      this->model_number = "";
      this->serial_number = "";
      this->lot_number = "";
      this->device_options = "";
    }
  }

  explicit MipBaseDeviceInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : firmware_version(_alloc),
    model_name(_alloc),
    model_number(_alloc),
    serial_number(_alloc),
    lot_number(_alloc),
    device_options(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->firmware_version = "";
      this->model_name = "";
      this->model_number = "";
      this->serial_number = "";
      this->lot_number = "";
      this->device_options = "";
    }
  }

  // field types and members
  using _firmware_version_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _firmware_version_type firmware_version;
  using _model_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _model_name_type model_name;
  using _model_number_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _model_number_type model_number;
  using _serial_number_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _serial_number_type serial_number;
  using _lot_number_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _lot_number_type lot_number;
  using _device_options_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _device_options_type device_options;

  // setters for named parameter idiom
  Type & set__firmware_version(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->firmware_version = _arg;
    return *this;
  }
  Type & set__model_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->model_name = _arg;
    return *this;
  }
  Type & set__model_number(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->model_number = _arg;
    return *this;
  }
  Type & set__serial_number(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->serial_number = _arg;
    return *this;
  }
  Type & set__lot_number(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->lot_number = _arg;
    return *this;
  }
  Type & set__device_options(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->device_options = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    microstrain_inertial_msgs::msg::MipBaseDeviceInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const microstrain_inertial_msgs::msg::MipBaseDeviceInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<microstrain_inertial_msgs::msg::MipBaseDeviceInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<microstrain_inertial_msgs::msg::MipBaseDeviceInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      microstrain_inertial_msgs::msg::MipBaseDeviceInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<microstrain_inertial_msgs::msg::MipBaseDeviceInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      microstrain_inertial_msgs::msg::MipBaseDeviceInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<microstrain_inertial_msgs::msg::MipBaseDeviceInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<microstrain_inertial_msgs::msg::MipBaseDeviceInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<microstrain_inertial_msgs::msg::MipBaseDeviceInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__microstrain_inertial_msgs__msg__MipBaseDeviceInfo
    std::shared_ptr<microstrain_inertial_msgs::msg::MipBaseDeviceInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__microstrain_inertial_msgs__msg__MipBaseDeviceInfo
    std::shared_ptr<microstrain_inertial_msgs::msg::MipBaseDeviceInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MipBaseDeviceInfo_ & other) const
  {
    if (this->firmware_version != other.firmware_version) {
      return false;
    }
    if (this->model_name != other.model_name) {
      return false;
    }
    if (this->model_number != other.model_number) {
      return false;
    }
    if (this->serial_number != other.serial_number) {
      return false;
    }
    if (this->lot_number != other.lot_number) {
      return false;
    }
    if (this->device_options != other.device_options) {
      return false;
    }
    return true;
  }
  bool operator!=(const MipBaseDeviceInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MipBaseDeviceInfo_

// alias to use template instance with default allocator
using MipBaseDeviceInfo =
  microstrain_inertial_msgs::msg::MipBaseDeviceInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace microstrain_inertial_msgs

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_BASE_DEVICE_INFO__STRUCT_HPP_
