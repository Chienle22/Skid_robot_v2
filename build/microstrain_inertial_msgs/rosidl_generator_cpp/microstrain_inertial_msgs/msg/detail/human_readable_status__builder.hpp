// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from microstrain_inertial_msgs:msg/HumanReadableStatus.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__HUMAN_READABLE_STATUS__BUILDER_HPP_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__HUMAN_READABLE_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "microstrain_inertial_msgs/msg/detail/human_readable_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace microstrain_inertial_msgs
{

namespace msg
{

namespace builder
{

class Init_HumanReadableStatus_continuous_bit_flags
{
public:
  explicit Init_HumanReadableStatus_continuous_bit_flags(::microstrain_inertial_msgs::msg::HumanReadableStatus & msg)
  : msg_(msg)
  {}
  ::microstrain_inertial_msgs::msg::HumanReadableStatus continuous_bit_flags(::microstrain_inertial_msgs::msg::HumanReadableStatus::_continuous_bit_flags_type arg)
  {
    msg_.continuous_bit_flags = std::move(arg);
    return std::move(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::HumanReadableStatus msg_;
};

class Init_HumanReadableStatus_status_flags
{
public:
  explicit Init_HumanReadableStatus_status_flags(::microstrain_inertial_msgs::msg::HumanReadableStatus & msg)
  : msg_(msg)
  {}
  Init_HumanReadableStatus_continuous_bit_flags status_flags(::microstrain_inertial_msgs::msg::HumanReadableStatus::_status_flags_type arg)
  {
    msg_.status_flags = std::move(arg);
    return Init_HumanReadableStatus_continuous_bit_flags(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::HumanReadableStatus msg_;
};

class Init_HumanReadableStatus_filter_state
{
public:
  explicit Init_HumanReadableStatus_filter_state(::microstrain_inertial_msgs::msg::HumanReadableStatus & msg)
  : msg_(msg)
  {}
  Init_HumanReadableStatus_status_flags filter_state(::microstrain_inertial_msgs::msg::HumanReadableStatus::_filter_state_type arg)
  {
    msg_.filter_state = std::move(arg);
    return Init_HumanReadableStatus_status_flags(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::HumanReadableStatus msg_;
};

class Init_HumanReadableStatus_dual_antenna_fix_type
{
public:
  explicit Init_HumanReadableStatus_dual_antenna_fix_type(::microstrain_inertial_msgs::msg::HumanReadableStatus & msg)
  : msg_(msg)
  {}
  Init_HumanReadableStatus_filter_state dual_antenna_fix_type(::microstrain_inertial_msgs::msg::HumanReadableStatus::_dual_antenna_fix_type_type arg)
  {
    msg_.dual_antenna_fix_type = std::move(arg);
    return Init_HumanReadableStatus_filter_state(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::HumanReadableStatus msg_;
};

class Init_HumanReadableStatus_gnss_state
{
public:
  explicit Init_HumanReadableStatus_gnss_state(::microstrain_inertial_msgs::msg::HumanReadableStatus & msg)
  : msg_(msg)
  {}
  Init_HumanReadableStatus_dual_antenna_fix_type gnss_state(::microstrain_inertial_msgs::msg::HumanReadableStatus::_gnss_state_type arg)
  {
    msg_.gnss_state = std::move(arg);
    return Init_HumanReadableStatus_dual_antenna_fix_type(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::HumanReadableStatus msg_;
};

class Init_HumanReadableStatus_device_info
{
public:
  explicit Init_HumanReadableStatus_device_info(::microstrain_inertial_msgs::msg::HumanReadableStatus & msg)
  : msg_(msg)
  {}
  Init_HumanReadableStatus_gnss_state device_info(::microstrain_inertial_msgs::msg::HumanReadableStatus::_device_info_type arg)
  {
    msg_.device_info = std::move(arg);
    return Init_HumanReadableStatus_gnss_state(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::HumanReadableStatus msg_;
};

class Init_HumanReadableStatus_header
{
public:
  Init_HumanReadableStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HumanReadableStatus_device_info header(::microstrain_inertial_msgs::msg::HumanReadableStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_HumanReadableStatus_device_info(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::HumanReadableStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::microstrain_inertial_msgs::msg::HumanReadableStatus>()
{
  return microstrain_inertial_msgs::msg::builder::Init_HumanReadableStatus_header();
}

}  // namespace microstrain_inertial_msgs

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__HUMAN_READABLE_STATUS__BUILDER_HPP_
