// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from microstrain_inertial_msgs:srv/Mip3dmGpioStateRead.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__SRV__DETAIL__MIP3DM_GPIO_STATE_READ__BUILDER_HPP_
#define MICROSTRAIN_INERTIAL_MSGS__SRV__DETAIL__MIP3DM_GPIO_STATE_READ__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "microstrain_inertial_msgs/srv/detail/mip3dm_gpio_state_read__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace microstrain_inertial_msgs
{

namespace srv
{

namespace builder
{

class Init_Mip3dmGpioStateRead_Request_pin
{
public:
  Init_Mip3dmGpioStateRead_Request_pin()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::microstrain_inertial_msgs::srv::Mip3dmGpioStateRead_Request pin(::microstrain_inertial_msgs::srv::Mip3dmGpioStateRead_Request::_pin_type arg)
  {
    msg_.pin = std::move(arg);
    return std::move(msg_);
  }

private:
  ::microstrain_inertial_msgs::srv::Mip3dmGpioStateRead_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::microstrain_inertial_msgs::srv::Mip3dmGpioStateRead_Request>()
{
  return microstrain_inertial_msgs::srv::builder::Init_Mip3dmGpioStateRead_Request_pin();
}

}  // namespace microstrain_inertial_msgs


namespace microstrain_inertial_msgs
{

namespace srv
{

namespace builder
{

class Init_Mip3dmGpioStateRead_Response_state
{
public:
  explicit Init_Mip3dmGpioStateRead_Response_state(::microstrain_inertial_msgs::srv::Mip3dmGpioStateRead_Response & msg)
  : msg_(msg)
  {}
  ::microstrain_inertial_msgs::srv::Mip3dmGpioStateRead_Response state(::microstrain_inertial_msgs::srv::Mip3dmGpioStateRead_Response::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::microstrain_inertial_msgs::srv::Mip3dmGpioStateRead_Response msg_;
};

class Init_Mip3dmGpioStateRead_Response_pin
{
public:
  Init_Mip3dmGpioStateRead_Response_pin()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Mip3dmGpioStateRead_Response_state pin(::microstrain_inertial_msgs::srv::Mip3dmGpioStateRead_Response::_pin_type arg)
  {
    msg_.pin = std::move(arg);
    return Init_Mip3dmGpioStateRead_Response_state(msg_);
  }

private:
  ::microstrain_inertial_msgs::srv::Mip3dmGpioStateRead_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::microstrain_inertial_msgs::srv::Mip3dmGpioStateRead_Response>()
{
  return microstrain_inertial_msgs::srv::builder::Init_Mip3dmGpioStateRead_Response_pin();
}

}  // namespace microstrain_inertial_msgs

#endif  // MICROSTRAIN_INERTIAL_MSGS__SRV__DETAIL__MIP3DM_GPIO_STATE_READ__BUILDER_HPP_
