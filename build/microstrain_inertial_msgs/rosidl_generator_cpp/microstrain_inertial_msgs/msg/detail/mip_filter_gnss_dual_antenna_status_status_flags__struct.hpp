// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from microstrain_inertial_msgs:msg/MipFilterGnssDualAntennaStatusStatusFlags.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_GNSS_DUAL_ANTENNA_STATUS_STATUS_FLAGS__STRUCT_HPP_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_GNSS_DUAL_ANTENNA_STATUS_STATUS_FLAGS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatusStatusFlags __attribute__((deprecated))
#else
# define DEPRECATED__microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatusStatusFlags __declspec(deprecated)
#endif

namespace microstrain_inertial_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MipFilterGnssDualAntennaStatusStatusFlags_
{
  using Type = MipFilterGnssDualAntennaStatusStatusFlags_<ContainerAllocator>;

  explicit MipFilterGnssDualAntennaStatusStatusFlags_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rcv_1_data_valid = false;
      this->rcv_2_data_valid = false;
      this->antenna_offsets_valid = false;
    }
  }

  explicit MipFilterGnssDualAntennaStatusStatusFlags_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rcv_1_data_valid = false;
      this->rcv_2_data_valid = false;
      this->antenna_offsets_valid = false;
    }
  }

  // field types and members
  using _rcv_1_data_valid_type =
    bool;
  _rcv_1_data_valid_type rcv_1_data_valid;
  using _rcv_2_data_valid_type =
    bool;
  _rcv_2_data_valid_type rcv_2_data_valid;
  using _antenna_offsets_valid_type =
    bool;
  _antenna_offsets_valid_type antenna_offsets_valid;

  // setters for named parameter idiom
  Type & set__rcv_1_data_valid(
    const bool & _arg)
  {
    this->rcv_1_data_valid = _arg;
    return *this;
  }
  Type & set__rcv_2_data_valid(
    const bool & _arg)
  {
    this->rcv_2_data_valid = _arg;
    return *this;
  }
  Type & set__antenna_offsets_valid(
    const bool & _arg)
  {
    this->antenna_offsets_valid = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    microstrain_inertial_msgs::msg::MipFilterGnssDualAntennaStatusStatusFlags_<ContainerAllocator> *;
  using ConstRawPtr =
    const microstrain_inertial_msgs::msg::MipFilterGnssDualAntennaStatusStatusFlags_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<microstrain_inertial_msgs::msg::MipFilterGnssDualAntennaStatusStatusFlags_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<microstrain_inertial_msgs::msg::MipFilterGnssDualAntennaStatusStatusFlags_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      microstrain_inertial_msgs::msg::MipFilterGnssDualAntennaStatusStatusFlags_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<microstrain_inertial_msgs::msg::MipFilterGnssDualAntennaStatusStatusFlags_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      microstrain_inertial_msgs::msg::MipFilterGnssDualAntennaStatusStatusFlags_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<microstrain_inertial_msgs::msg::MipFilterGnssDualAntennaStatusStatusFlags_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<microstrain_inertial_msgs::msg::MipFilterGnssDualAntennaStatusStatusFlags_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<microstrain_inertial_msgs::msg::MipFilterGnssDualAntennaStatusStatusFlags_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatusStatusFlags
    std::shared_ptr<microstrain_inertial_msgs::msg::MipFilterGnssDualAntennaStatusStatusFlags_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__microstrain_inertial_msgs__msg__MipFilterGnssDualAntennaStatusStatusFlags
    std::shared_ptr<microstrain_inertial_msgs::msg::MipFilterGnssDualAntennaStatusStatusFlags_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MipFilterGnssDualAntennaStatusStatusFlags_ & other) const
  {
    if (this->rcv_1_data_valid != other.rcv_1_data_valid) {
      return false;
    }
    if (this->rcv_2_data_valid != other.rcv_2_data_valid) {
      return false;
    }
    if (this->antenna_offsets_valid != other.antenna_offsets_valid) {
      return false;
    }
    return true;
  }
  bool operator!=(const MipFilterGnssDualAntennaStatusStatusFlags_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MipFilterGnssDualAntennaStatusStatusFlags_

// alias to use template instance with default allocator
using MipFilterGnssDualAntennaStatusStatusFlags =
  microstrain_inertial_msgs::msg::MipFilterGnssDualAntennaStatusStatusFlags_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace microstrain_inertial_msgs

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_GNSS_DUAL_ANTENNA_STATUS_STATUS_FLAGS__STRUCT_HPP_
