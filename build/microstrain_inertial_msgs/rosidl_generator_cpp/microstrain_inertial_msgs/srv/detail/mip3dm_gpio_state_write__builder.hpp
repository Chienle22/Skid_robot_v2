// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from microstrain_inertial_msgs:srv/Mip3dmGpioStateWrite.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__SRV__DETAIL__MIP3DM_GPIO_STATE_WRITE__BUILDER_HPP_
#define MICROSTRAIN_INERTIAL_MSGS__SRV__DETAIL__MIP3DM_GPIO_STATE_WRITE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "microstrain_inertial_msgs/srv/detail/mip3dm_gpio_state_write__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace microstrain_inertial_msgs
{

namespace srv
{

namespace builder
{

class Init_Mip3dmGpioStateWrite_Request_state
{
public:
  explicit Init_Mip3dmGpioStateWrite_Request_state(::microstrain_inertial_msgs::srv::Mip3dmGpioStateWrite_Request & msg)
  : msg_(msg)
  {}
  ::microstrain_inertial_msgs::srv::Mip3dmGpioStateWrite_Request state(::microstrain_inertial_msgs::srv::Mip3dmGpioStateWrite_Request::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::microstrain_inertial_msgs::srv::Mip3dmGpioStateWrite_Request msg_;
};

class Init_Mip3dmGpioStateWrite_Request_pin
{
public:
  Init_Mip3dmGpioStateWrite_Request_pin()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Mip3dmGpioStateWrite_Request_state pin(::microstrain_inertial_msgs::srv::Mip3dmGpioStateWrite_Request::_pin_type arg)
  {
    msg_.pin = std::move(arg);
    return Init_Mip3dmGpioStateWrite_Request_state(msg_);
  }

private:
  ::microstrain_inertial_msgs::srv::Mip3dmGpioStateWrite_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::microstrain_inertial_msgs::srv::Mip3dmGpioStateWrite_Request>()
{
  return microstrain_inertial_msgs::srv::builder::Init_Mip3dmGpioStateWrite_Request_pin();
}

}  // namespace microstrain_inertial_msgs


namespace microstrain_inertial_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::microstrain_inertial_msgs::srv::Mip3dmGpioStateWrite_Response>()
{
  return ::microstrain_inertial_msgs::srv::Mip3dmGpioStateWrite_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace microstrain_inertial_msgs

#endif  // MICROSTRAIN_INERTIAL_MSGS__SRV__DETAIL__MIP3DM_GPIO_STATE_WRITE__BUILDER_HPP_
