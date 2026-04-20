// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from microstrain_inertial_msgs:msg/MipGnssSbasInfoSbasStatus.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GNSS_SBAS_INFO_SBAS_STATUS__BUILDER_HPP_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GNSS_SBAS_INFO_SBAS_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "microstrain_inertial_msgs/msg/detail/mip_gnss_sbas_info_sbas_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace microstrain_inertial_msgs
{

namespace msg
{

namespace builder
{

class Init_MipGnssSbasInfoSbasStatus_test_mode
{
public:
  explicit Init_MipGnssSbasInfoSbasStatus_test_mode(::microstrain_inertial_msgs::msg::MipGnssSbasInfoSbasStatus & msg)
  : msg_(msg)
  {}
  ::microstrain_inertial_msgs::msg::MipGnssSbasInfoSbasStatus test_mode(::microstrain_inertial_msgs::msg::MipGnssSbasInfoSbasStatus::_test_mode_type arg)
  {
    msg_.test_mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipGnssSbasInfoSbasStatus msg_;
};

class Init_MipGnssSbasInfoSbasStatus_integrity_available
{
public:
  explicit Init_MipGnssSbasInfoSbasStatus_integrity_available(::microstrain_inertial_msgs::msg::MipGnssSbasInfoSbasStatus & msg)
  : msg_(msg)
  {}
  Init_MipGnssSbasInfoSbasStatus_test_mode integrity_available(::microstrain_inertial_msgs::msg::MipGnssSbasInfoSbasStatus::_integrity_available_type arg)
  {
    msg_.integrity_available = std::move(arg);
    return Init_MipGnssSbasInfoSbasStatus_test_mode(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipGnssSbasInfoSbasStatus msg_;
};

class Init_MipGnssSbasInfoSbasStatus_corrections_available
{
public:
  explicit Init_MipGnssSbasInfoSbasStatus_corrections_available(::microstrain_inertial_msgs::msg::MipGnssSbasInfoSbasStatus & msg)
  : msg_(msg)
  {}
  Init_MipGnssSbasInfoSbasStatus_integrity_available corrections_available(::microstrain_inertial_msgs::msg::MipGnssSbasInfoSbasStatus::_corrections_available_type arg)
  {
    msg_.corrections_available = std::move(arg);
    return Init_MipGnssSbasInfoSbasStatus_integrity_available(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipGnssSbasInfoSbasStatus msg_;
};

class Init_MipGnssSbasInfoSbasStatus_range_available
{
public:
  Init_MipGnssSbasInfoSbasStatus_range_available()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MipGnssSbasInfoSbasStatus_corrections_available range_available(::microstrain_inertial_msgs::msg::MipGnssSbasInfoSbasStatus::_range_available_type arg)
  {
    msg_.range_available = std::move(arg);
    return Init_MipGnssSbasInfoSbasStatus_corrections_available(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipGnssSbasInfoSbasStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::microstrain_inertial_msgs::msg::MipGnssSbasInfoSbasStatus>()
{
  return microstrain_inertial_msgs::msg::builder::Init_MipGnssSbasInfoSbasStatus_range_available();
}

}  // namespace microstrain_inertial_msgs

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GNSS_SBAS_INFO_SBAS_STATUS__BUILDER_HPP_
