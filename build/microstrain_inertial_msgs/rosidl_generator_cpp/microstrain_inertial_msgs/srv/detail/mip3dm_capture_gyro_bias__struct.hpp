// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from microstrain_inertial_msgs:srv/Mip3dmCaptureGyroBias.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__SRV__DETAIL__MIP3DM_CAPTURE_GYRO_BIAS__STRUCT_HPP_
#define MICROSTRAIN_INERTIAL_MSGS__SRV__DETAIL__MIP3DM_CAPTURE_GYRO_BIAS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__microstrain_inertial_msgs__srv__Mip3dmCaptureGyroBias_Request __attribute__((deprecated))
#else
# define DEPRECATED__microstrain_inertial_msgs__srv__Mip3dmCaptureGyroBias_Request __declspec(deprecated)
#endif

namespace microstrain_inertial_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Mip3dmCaptureGyroBias_Request_
{
  using Type = Mip3dmCaptureGyroBias_Request_<ContainerAllocator>;

  explicit Mip3dmCaptureGyroBias_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit Mip3dmCaptureGyroBias_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    microstrain_inertial_msgs::srv::Mip3dmCaptureGyroBias_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const microstrain_inertial_msgs::srv::Mip3dmCaptureGyroBias_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<microstrain_inertial_msgs::srv::Mip3dmCaptureGyroBias_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<microstrain_inertial_msgs::srv::Mip3dmCaptureGyroBias_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      microstrain_inertial_msgs::srv::Mip3dmCaptureGyroBias_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<microstrain_inertial_msgs::srv::Mip3dmCaptureGyroBias_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      microstrain_inertial_msgs::srv::Mip3dmCaptureGyroBias_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<microstrain_inertial_msgs::srv::Mip3dmCaptureGyroBias_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<microstrain_inertial_msgs::srv::Mip3dmCaptureGyroBias_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<microstrain_inertial_msgs::srv::Mip3dmCaptureGyroBias_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__microstrain_inertial_msgs__srv__Mip3dmCaptureGyroBias_Request
    std::shared_ptr<microstrain_inertial_msgs::srv::Mip3dmCaptureGyroBias_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__microstrain_inertial_msgs__srv__Mip3dmCaptureGyroBias_Request
    std::shared_ptr<microstrain_inertial_msgs::srv::Mip3dmCaptureGyroBias_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Mip3dmCaptureGyroBias_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const Mip3dmCaptureGyroBias_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Mip3dmCaptureGyroBias_Request_

// alias to use template instance with default allocator
using Mip3dmCaptureGyroBias_Request =
  microstrain_inertial_msgs::srv::Mip3dmCaptureGyroBias_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace microstrain_inertial_msgs


#ifndef _WIN32
# define DEPRECATED__microstrain_inertial_msgs__srv__Mip3dmCaptureGyroBias_Response __attribute__((deprecated))
#else
# define DEPRECATED__microstrain_inertial_msgs__srv__Mip3dmCaptureGyroBias_Response __declspec(deprecated)
#endif

namespace microstrain_inertial_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Mip3dmCaptureGyroBias_Response_
{
  using Type = Mip3dmCaptureGyroBias_Response_<ContainerAllocator>;

  explicit Mip3dmCaptureGyroBias_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 3>::iterator, float>(this->bias.begin(), this->bias.end(), 0.0f);
    }
  }

  explicit Mip3dmCaptureGyroBias_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : bias(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 3>::iterator, float>(this->bias.begin(), this->bias.end(), 0.0f);
    }
  }

  // field types and members
  using _bias_type =
    std::array<float, 3>;
  _bias_type bias;

  // setters for named parameter idiom
  Type & set__bias(
    const std::array<float, 3> & _arg)
  {
    this->bias = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    microstrain_inertial_msgs::srv::Mip3dmCaptureGyroBias_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const microstrain_inertial_msgs::srv::Mip3dmCaptureGyroBias_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<microstrain_inertial_msgs::srv::Mip3dmCaptureGyroBias_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<microstrain_inertial_msgs::srv::Mip3dmCaptureGyroBias_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      microstrain_inertial_msgs::srv::Mip3dmCaptureGyroBias_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<microstrain_inertial_msgs::srv::Mip3dmCaptureGyroBias_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      microstrain_inertial_msgs::srv::Mip3dmCaptureGyroBias_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<microstrain_inertial_msgs::srv::Mip3dmCaptureGyroBias_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<microstrain_inertial_msgs::srv::Mip3dmCaptureGyroBias_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<microstrain_inertial_msgs::srv::Mip3dmCaptureGyroBias_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__microstrain_inertial_msgs__srv__Mip3dmCaptureGyroBias_Response
    std::shared_ptr<microstrain_inertial_msgs::srv::Mip3dmCaptureGyroBias_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__microstrain_inertial_msgs__srv__Mip3dmCaptureGyroBias_Response
    std::shared_ptr<microstrain_inertial_msgs::srv::Mip3dmCaptureGyroBias_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Mip3dmCaptureGyroBias_Response_ & other) const
  {
    if (this->bias != other.bias) {
      return false;
    }
    return true;
  }
  bool operator!=(const Mip3dmCaptureGyroBias_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Mip3dmCaptureGyroBias_Response_

// alias to use template instance with default allocator
using Mip3dmCaptureGyroBias_Response =
  microstrain_inertial_msgs::srv::Mip3dmCaptureGyroBias_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace microstrain_inertial_msgs

namespace microstrain_inertial_msgs
{

namespace srv
{

struct Mip3dmCaptureGyroBias
{
  using Request = microstrain_inertial_msgs::srv::Mip3dmCaptureGyroBias_Request;
  using Response = microstrain_inertial_msgs::srv::Mip3dmCaptureGyroBias_Response;
};

}  // namespace srv

}  // namespace microstrain_inertial_msgs

#endif  // MICROSTRAIN_INERTIAL_MSGS__SRV__DETAIL__MIP3DM_CAPTURE_GYRO_BIAS__STRUCT_HPP_
