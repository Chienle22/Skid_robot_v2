// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from microstrain_inertial_msgs:srv/Mip3dmCaptureGyroBias.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__SRV__DETAIL__MIP3DM_CAPTURE_GYRO_BIAS__BUILDER_HPP_
#define MICROSTRAIN_INERTIAL_MSGS__SRV__DETAIL__MIP3DM_CAPTURE_GYRO_BIAS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "microstrain_inertial_msgs/srv/detail/mip3dm_capture_gyro_bias__struct.hpp"
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
auto build<::microstrain_inertial_msgs::srv::Mip3dmCaptureGyroBias_Request>()
{
  return ::microstrain_inertial_msgs::srv::Mip3dmCaptureGyroBias_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace microstrain_inertial_msgs


namespace microstrain_inertial_msgs
{

namespace srv
{

namespace builder
{

class Init_Mip3dmCaptureGyroBias_Response_bias
{
public:
  Init_Mip3dmCaptureGyroBias_Response_bias()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::microstrain_inertial_msgs::srv::Mip3dmCaptureGyroBias_Response bias(::microstrain_inertial_msgs::srv::Mip3dmCaptureGyroBias_Response::_bias_type arg)
  {
    msg_.bias = std::move(arg);
    return std::move(msg_);
  }

private:
  ::microstrain_inertial_msgs::srv::Mip3dmCaptureGyroBias_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::microstrain_inertial_msgs::srv::Mip3dmCaptureGyroBias_Response>()
{
  return microstrain_inertial_msgs::srv::builder::Init_Mip3dmCaptureGyroBias_Response_bias();
}

}  // namespace microstrain_inertial_msgs

#endif  // MICROSTRAIN_INERTIAL_MSGS__SRV__DETAIL__MIP3DM_CAPTURE_GYRO_BIAS__BUILDER_HPP_
