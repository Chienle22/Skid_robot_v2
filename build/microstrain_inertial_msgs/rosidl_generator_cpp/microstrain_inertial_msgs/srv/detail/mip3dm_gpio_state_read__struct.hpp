// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from microstrain_inertial_msgs:srv/Mip3dmGpioStateRead.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__SRV__DETAIL__MIP3DM_GPIO_STATE_READ__STRUCT_HPP_
#define MICROSTRAIN_INERTIAL_MSGS__SRV__DETAIL__MIP3DM_GPIO_STATE_READ__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__microstrain_inertial_msgs__srv__Mip3dmGpioStateRead_Request __attribute__((deprecated))
#else
# define DEPRECATED__microstrain_inertial_msgs__srv__Mip3dmGpioStateRead_Request __declspec(deprecated)
#endif

namespace microstrain_inertial_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Mip3dmGpioStateRead_Request_
{
  using Type = Mip3dmGpioStateRead_Request_<ContainerAllocator>;

  explicit Mip3dmGpioStateRead_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pin = 0;
    }
  }

  explicit Mip3dmGpioStateRead_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pin = 0;
    }
  }

  // field types and members
  using _pin_type =
    uint8_t;
  _pin_type pin;

  // setters for named parameter idiom
  Type & set__pin(
    const uint8_t & _arg)
  {
    this->pin = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    microstrain_inertial_msgs::srv::Mip3dmGpioStateRead_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const microstrain_inertial_msgs::srv::Mip3dmGpioStateRead_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<microstrain_inertial_msgs::srv::Mip3dmGpioStateRead_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<microstrain_inertial_msgs::srv::Mip3dmGpioStateRead_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      microstrain_inertial_msgs::srv::Mip3dmGpioStateRead_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<microstrain_inertial_msgs::srv::Mip3dmGpioStateRead_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      microstrain_inertial_msgs::srv::Mip3dmGpioStateRead_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<microstrain_inertial_msgs::srv::Mip3dmGpioStateRead_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<microstrain_inertial_msgs::srv::Mip3dmGpioStateRead_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<microstrain_inertial_msgs::srv::Mip3dmGpioStateRead_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__microstrain_inertial_msgs__srv__Mip3dmGpioStateRead_Request
    std::shared_ptr<microstrain_inertial_msgs::srv::Mip3dmGpioStateRead_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__microstrain_inertial_msgs__srv__Mip3dmGpioStateRead_Request
    std::shared_ptr<microstrain_inertial_msgs::srv::Mip3dmGpioStateRead_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Mip3dmGpioStateRead_Request_ & other) const
  {
    if (this->pin != other.pin) {
      return false;
    }
    return true;
  }
  bool operator!=(const Mip3dmGpioStateRead_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Mip3dmGpioStateRead_Request_

// alias to use template instance with default allocator
using Mip3dmGpioStateRead_Request =
  microstrain_inertial_msgs::srv::Mip3dmGpioStateRead_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace microstrain_inertial_msgs


#ifndef _WIN32
# define DEPRECATED__microstrain_inertial_msgs__srv__Mip3dmGpioStateRead_Response __attribute__((deprecated))
#else
# define DEPRECATED__microstrain_inertial_msgs__srv__Mip3dmGpioStateRead_Response __declspec(deprecated)
#endif

namespace microstrain_inertial_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Mip3dmGpioStateRead_Response_
{
  using Type = Mip3dmGpioStateRead_Response_<ContainerAllocator>;

  explicit Mip3dmGpioStateRead_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pin = 0;
      this->state = false;
    }
  }

  explicit Mip3dmGpioStateRead_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pin = 0;
      this->state = false;
    }
  }

  // field types and members
  using _pin_type =
    uint8_t;
  _pin_type pin;
  using _state_type =
    bool;
  _state_type state;

  // setters for named parameter idiom
  Type & set__pin(
    const uint8_t & _arg)
  {
    this->pin = _arg;
    return *this;
  }
  Type & set__state(
    const bool & _arg)
  {
    this->state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    microstrain_inertial_msgs::srv::Mip3dmGpioStateRead_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const microstrain_inertial_msgs::srv::Mip3dmGpioStateRead_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<microstrain_inertial_msgs::srv::Mip3dmGpioStateRead_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<microstrain_inertial_msgs::srv::Mip3dmGpioStateRead_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      microstrain_inertial_msgs::srv::Mip3dmGpioStateRead_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<microstrain_inertial_msgs::srv::Mip3dmGpioStateRead_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      microstrain_inertial_msgs::srv::Mip3dmGpioStateRead_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<microstrain_inertial_msgs::srv::Mip3dmGpioStateRead_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<microstrain_inertial_msgs::srv::Mip3dmGpioStateRead_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<microstrain_inertial_msgs::srv::Mip3dmGpioStateRead_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__microstrain_inertial_msgs__srv__Mip3dmGpioStateRead_Response
    std::shared_ptr<microstrain_inertial_msgs::srv::Mip3dmGpioStateRead_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__microstrain_inertial_msgs__srv__Mip3dmGpioStateRead_Response
    std::shared_ptr<microstrain_inertial_msgs::srv::Mip3dmGpioStateRead_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Mip3dmGpioStateRead_Response_ & other) const
  {
    if (this->pin != other.pin) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    return true;
  }
  bool operator!=(const Mip3dmGpioStateRead_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Mip3dmGpioStateRead_Response_

// alias to use template instance with default allocator
using Mip3dmGpioStateRead_Response =
  microstrain_inertial_msgs::srv::Mip3dmGpioStateRead_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace microstrain_inertial_msgs

namespace microstrain_inertial_msgs
{

namespace srv
{

struct Mip3dmGpioStateRead
{
  using Request = microstrain_inertial_msgs::srv::Mip3dmGpioStateRead_Request;
  using Response = microstrain_inertial_msgs::srv::Mip3dmGpioStateRead_Response;
};

}  // namespace srv

}  // namespace microstrain_inertial_msgs

#endif  // MICROSTRAIN_INERTIAL_MSGS__SRV__DETAIL__MIP3DM_GPIO_STATE_READ__STRUCT_HPP_
