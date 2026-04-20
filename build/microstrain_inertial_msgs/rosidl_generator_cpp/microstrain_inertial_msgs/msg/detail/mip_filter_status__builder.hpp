// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from microstrain_inertial_msgs:msg/MipFilterStatus.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_STATUS__BUILDER_HPP_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "microstrain_inertial_msgs/msg/detail/mip_filter_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace microstrain_inertial_msgs
{

namespace msg
{

namespace builder
{

class Init_MipFilterStatus_gq7_status_flags
{
public:
  explicit Init_MipFilterStatus_gq7_status_flags(::microstrain_inertial_msgs::msg::MipFilterStatus & msg)
  : msg_(msg)
  {}
  ::microstrain_inertial_msgs::msg::MipFilterStatus gq7_status_flags(::microstrain_inertial_msgs::msg::MipFilterStatus::_gq7_status_flags_type arg)
  {
    msg_.gq7_status_flags = std::move(arg);
    return std::move(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipFilterStatus msg_;
};

class Init_MipFilterStatus_gx5_status_flags
{
public:
  explicit Init_MipFilterStatus_gx5_status_flags(::microstrain_inertial_msgs::msg::MipFilterStatus & msg)
  : msg_(msg)
  {}
  Init_MipFilterStatus_gq7_status_flags gx5_status_flags(::microstrain_inertial_msgs::msg::MipFilterStatus::_gx5_status_flags_type arg)
  {
    msg_.gx5_status_flags = std::move(arg);
    return Init_MipFilterStatus_gq7_status_flags(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipFilterStatus msg_;
};

class Init_MipFilterStatus_dynamics_mode
{
public:
  explicit Init_MipFilterStatus_dynamics_mode(::microstrain_inertial_msgs::msg::MipFilterStatus & msg)
  : msg_(msg)
  {}
  Init_MipFilterStatus_gx5_status_flags dynamics_mode(::microstrain_inertial_msgs::msg::MipFilterStatus::_dynamics_mode_type arg)
  {
    msg_.dynamics_mode = std::move(arg);
    return Init_MipFilterStatus_gx5_status_flags(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipFilterStatus msg_;
};

class Init_MipFilterStatus_filter_state
{
public:
  explicit Init_MipFilterStatus_filter_state(::microstrain_inertial_msgs::msg::MipFilterStatus & msg)
  : msg_(msg)
  {}
  Init_MipFilterStatus_dynamics_mode filter_state(::microstrain_inertial_msgs::msg::MipFilterStatus::_filter_state_type arg)
  {
    msg_.filter_state = std::move(arg);
    return Init_MipFilterStatus_dynamics_mode(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipFilterStatus msg_;
};

class Init_MipFilterStatus_header
{
public:
  Init_MipFilterStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MipFilterStatus_filter_state header(::microstrain_inertial_msgs::msg::MipFilterStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MipFilterStatus_filter_state(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipFilterStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::microstrain_inertial_msgs::msg::MipFilterStatus>()
{
  return microstrain_inertial_msgs::msg::builder::Init_MipFilterStatus_header();
}

}  // namespace microstrain_inertial_msgs

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_STATUS__BUILDER_HPP_
