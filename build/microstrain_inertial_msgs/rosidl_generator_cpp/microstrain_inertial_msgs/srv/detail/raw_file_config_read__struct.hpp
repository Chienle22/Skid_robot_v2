// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from microstrain_inertial_msgs:srv/RawFileConfigRead.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__SRV__DETAIL__RAW_FILE_CONFIG_READ__STRUCT_HPP_
#define MICROSTRAIN_INERTIAL_MSGS__SRV__DETAIL__RAW_FILE_CONFIG_READ__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__microstrain_inertial_msgs__srv__RawFileConfigRead_Request __attribute__((deprecated))
#else
# define DEPRECATED__microstrain_inertial_msgs__srv__RawFileConfigRead_Request __declspec(deprecated)
#endif

namespace microstrain_inertial_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RawFileConfigRead_Request_
{
  using Type = RawFileConfigRead_Request_<ContainerAllocator>;

  explicit RawFileConfigRead_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit RawFileConfigRead_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    microstrain_inertial_msgs::srv::RawFileConfigRead_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const microstrain_inertial_msgs::srv::RawFileConfigRead_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<microstrain_inertial_msgs::srv::RawFileConfigRead_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<microstrain_inertial_msgs::srv::RawFileConfigRead_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      microstrain_inertial_msgs::srv::RawFileConfigRead_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<microstrain_inertial_msgs::srv::RawFileConfigRead_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      microstrain_inertial_msgs::srv::RawFileConfigRead_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<microstrain_inertial_msgs::srv::RawFileConfigRead_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<microstrain_inertial_msgs::srv::RawFileConfigRead_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<microstrain_inertial_msgs::srv::RawFileConfigRead_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__microstrain_inertial_msgs__srv__RawFileConfigRead_Request
    std::shared_ptr<microstrain_inertial_msgs::srv::RawFileConfigRead_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__microstrain_inertial_msgs__srv__RawFileConfigRead_Request
    std::shared_ptr<microstrain_inertial_msgs::srv::RawFileConfigRead_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RawFileConfigRead_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const RawFileConfigRead_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RawFileConfigRead_Request_

// alias to use template instance with default allocator
using RawFileConfigRead_Request =
  microstrain_inertial_msgs::srv::RawFileConfigRead_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace microstrain_inertial_msgs


#ifndef _WIN32
# define DEPRECATED__microstrain_inertial_msgs__srv__RawFileConfigRead_Response __attribute__((deprecated))
#else
# define DEPRECATED__microstrain_inertial_msgs__srv__RawFileConfigRead_Response __declspec(deprecated)
#endif

namespace microstrain_inertial_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RawFileConfigRead_Response_
{
  using Type = RawFileConfigRead_Response_<ContainerAllocator>;

  explicit RawFileConfigRead_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->enable = false;
      this->file_path = "";
    }
  }

  explicit RawFileConfigRead_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : file_path(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->enable = false;
      this->file_path = "";
    }
  }

  // field types and members
  using _enable_type =
    bool;
  _enable_type enable;
  using _file_path_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _file_path_type file_path;

  // setters for named parameter idiom
  Type & set__enable(
    const bool & _arg)
  {
    this->enable = _arg;
    return *this;
  }
  Type & set__file_path(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->file_path = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    microstrain_inertial_msgs::srv::RawFileConfigRead_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const microstrain_inertial_msgs::srv::RawFileConfigRead_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<microstrain_inertial_msgs::srv::RawFileConfigRead_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<microstrain_inertial_msgs::srv::RawFileConfigRead_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      microstrain_inertial_msgs::srv::RawFileConfigRead_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<microstrain_inertial_msgs::srv::RawFileConfigRead_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      microstrain_inertial_msgs::srv::RawFileConfigRead_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<microstrain_inertial_msgs::srv::RawFileConfigRead_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<microstrain_inertial_msgs::srv::RawFileConfigRead_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<microstrain_inertial_msgs::srv::RawFileConfigRead_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__microstrain_inertial_msgs__srv__RawFileConfigRead_Response
    std::shared_ptr<microstrain_inertial_msgs::srv::RawFileConfigRead_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__microstrain_inertial_msgs__srv__RawFileConfigRead_Response
    std::shared_ptr<microstrain_inertial_msgs::srv::RawFileConfigRead_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RawFileConfigRead_Response_ & other) const
  {
    if (this->enable != other.enable) {
      return false;
    }
    if (this->file_path != other.file_path) {
      return false;
    }
    return true;
  }
  bool operator!=(const RawFileConfigRead_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RawFileConfigRead_Response_

// alias to use template instance with default allocator
using RawFileConfigRead_Response =
  microstrain_inertial_msgs::srv::RawFileConfigRead_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace microstrain_inertial_msgs

namespace microstrain_inertial_msgs
{

namespace srv
{

struct RawFileConfigRead
{
  using Request = microstrain_inertial_msgs::srv::RawFileConfigRead_Request;
  using Response = microstrain_inertial_msgs::srv::RawFileConfigRead_Response;
};

}  // namespace srv

}  // namespace microstrain_inertial_msgs

#endif  // MICROSTRAIN_INERTIAL_MSGS__SRV__DETAIL__RAW_FILE_CONFIG_READ__STRUCT_HPP_
