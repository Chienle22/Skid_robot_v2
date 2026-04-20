// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from microstrain_inertial_msgs:srv/MipBaseGetDeviceInformation.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__SRV__DETAIL__MIP_BASE_GET_DEVICE_INFORMATION__STRUCT_HPP_
#define MICROSTRAIN_INERTIAL_MSGS__SRV__DETAIL__MIP_BASE_GET_DEVICE_INFORMATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__microstrain_inertial_msgs__srv__MipBaseGetDeviceInformation_Request __attribute__((deprecated))
#else
# define DEPRECATED__microstrain_inertial_msgs__srv__MipBaseGetDeviceInformation_Request __declspec(deprecated)
#endif

namespace microstrain_inertial_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MipBaseGetDeviceInformation_Request_
{
  using Type = MipBaseGetDeviceInformation_Request_<ContainerAllocator>;

  explicit MipBaseGetDeviceInformation_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit MipBaseGetDeviceInformation_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    microstrain_inertial_msgs::srv::MipBaseGetDeviceInformation_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const microstrain_inertial_msgs::srv::MipBaseGetDeviceInformation_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<microstrain_inertial_msgs::srv::MipBaseGetDeviceInformation_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<microstrain_inertial_msgs::srv::MipBaseGetDeviceInformation_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      microstrain_inertial_msgs::srv::MipBaseGetDeviceInformation_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<microstrain_inertial_msgs::srv::MipBaseGetDeviceInformation_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      microstrain_inertial_msgs::srv::MipBaseGetDeviceInformation_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<microstrain_inertial_msgs::srv::MipBaseGetDeviceInformation_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<microstrain_inertial_msgs::srv::MipBaseGetDeviceInformation_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<microstrain_inertial_msgs::srv::MipBaseGetDeviceInformation_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__microstrain_inertial_msgs__srv__MipBaseGetDeviceInformation_Request
    std::shared_ptr<microstrain_inertial_msgs::srv::MipBaseGetDeviceInformation_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__microstrain_inertial_msgs__srv__MipBaseGetDeviceInformation_Request
    std::shared_ptr<microstrain_inertial_msgs::srv::MipBaseGetDeviceInformation_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MipBaseGetDeviceInformation_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const MipBaseGetDeviceInformation_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MipBaseGetDeviceInformation_Request_

// alias to use template instance with default allocator
using MipBaseGetDeviceInformation_Request =
  microstrain_inertial_msgs::srv::MipBaseGetDeviceInformation_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace microstrain_inertial_msgs


// Include directives for member types
// Member 'device_info'
#include "microstrain_inertial_msgs/msg/detail/mip_base_device_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__microstrain_inertial_msgs__srv__MipBaseGetDeviceInformation_Response __attribute__((deprecated))
#else
# define DEPRECATED__microstrain_inertial_msgs__srv__MipBaseGetDeviceInformation_Response __declspec(deprecated)
#endif

namespace microstrain_inertial_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MipBaseGetDeviceInformation_Response_
{
  using Type = MipBaseGetDeviceInformation_Response_<ContainerAllocator>;

  explicit MipBaseGetDeviceInformation_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : device_info(_init)
  {
    (void)_init;
  }

  explicit MipBaseGetDeviceInformation_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : device_info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _device_info_type =
    microstrain_inertial_msgs::msg::MipBaseDeviceInfo_<ContainerAllocator>;
  _device_info_type device_info;

  // setters for named parameter idiom
  Type & set__device_info(
    const microstrain_inertial_msgs::msg::MipBaseDeviceInfo_<ContainerAllocator> & _arg)
  {
    this->device_info = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    microstrain_inertial_msgs::srv::MipBaseGetDeviceInformation_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const microstrain_inertial_msgs::srv::MipBaseGetDeviceInformation_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<microstrain_inertial_msgs::srv::MipBaseGetDeviceInformation_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<microstrain_inertial_msgs::srv::MipBaseGetDeviceInformation_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      microstrain_inertial_msgs::srv::MipBaseGetDeviceInformation_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<microstrain_inertial_msgs::srv::MipBaseGetDeviceInformation_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      microstrain_inertial_msgs::srv::MipBaseGetDeviceInformation_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<microstrain_inertial_msgs::srv::MipBaseGetDeviceInformation_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<microstrain_inertial_msgs::srv::MipBaseGetDeviceInformation_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<microstrain_inertial_msgs::srv::MipBaseGetDeviceInformation_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__microstrain_inertial_msgs__srv__MipBaseGetDeviceInformation_Response
    std::shared_ptr<microstrain_inertial_msgs::srv::MipBaseGetDeviceInformation_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__microstrain_inertial_msgs__srv__MipBaseGetDeviceInformation_Response
    std::shared_ptr<microstrain_inertial_msgs::srv::MipBaseGetDeviceInformation_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MipBaseGetDeviceInformation_Response_ & other) const
  {
    if (this->device_info != other.device_info) {
      return false;
    }
    return true;
  }
  bool operator!=(const MipBaseGetDeviceInformation_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MipBaseGetDeviceInformation_Response_

// alias to use template instance with default allocator
using MipBaseGetDeviceInformation_Response =
  microstrain_inertial_msgs::srv::MipBaseGetDeviceInformation_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace microstrain_inertial_msgs

namespace microstrain_inertial_msgs
{

namespace srv
{

struct MipBaseGetDeviceInformation
{
  using Request = microstrain_inertial_msgs::srv::MipBaseGetDeviceInformation_Request;
  using Response = microstrain_inertial_msgs::srv::MipBaseGetDeviceInformation_Response;
};

}  // namespace srv

}  // namespace microstrain_inertial_msgs

#endif  // MICROSTRAIN_INERTIAL_MSGS__SRV__DETAIL__MIP_BASE_GET_DEVICE_INFORMATION__STRUCT_HPP_
