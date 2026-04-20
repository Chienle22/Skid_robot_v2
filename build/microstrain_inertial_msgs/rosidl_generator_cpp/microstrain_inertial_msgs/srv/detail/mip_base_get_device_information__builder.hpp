// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from microstrain_inertial_msgs:srv/MipBaseGetDeviceInformation.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__SRV__DETAIL__MIP_BASE_GET_DEVICE_INFORMATION__BUILDER_HPP_
#define MICROSTRAIN_INERTIAL_MSGS__SRV__DETAIL__MIP_BASE_GET_DEVICE_INFORMATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "microstrain_inertial_msgs/srv/detail/mip_base_get_device_information__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace microstrain_inertial_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::microstrain_inertial_msgs::srv::MipBaseGetDeviceInformation_Request>()
{
  return ::microstrain_inertial_msgs::srv::MipBaseGetDeviceInformation_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace microstrain_inertial_msgs


namespace microstrain_inertial_msgs
{

namespace srv
{

namespace builder
{

class Init_MipBaseGetDeviceInformation_Response_device_info
{
public:
  Init_MipBaseGetDeviceInformation_Response_device_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::microstrain_inertial_msgs::srv::MipBaseGetDeviceInformation_Response device_info(::microstrain_inertial_msgs::srv::MipBaseGetDeviceInformation_Response::_device_info_type arg)
  {
    msg_.device_info = std::move(arg);
    return std::move(msg_);
  }

private:
  ::microstrain_inertial_msgs::srv::MipBaseGetDeviceInformation_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::microstrain_inertial_msgs::srv::MipBaseGetDeviceInformation_Response>()
{
  return microstrain_inertial_msgs::srv::builder::Init_MipBaseGetDeviceInformation_Response_device_info();
}

}  // namespace microstrain_inertial_msgs

#endif  // MICROSTRAIN_INERTIAL_MSGS__SRV__DETAIL__MIP_BASE_GET_DEVICE_INFORMATION__BUILDER_HPP_
