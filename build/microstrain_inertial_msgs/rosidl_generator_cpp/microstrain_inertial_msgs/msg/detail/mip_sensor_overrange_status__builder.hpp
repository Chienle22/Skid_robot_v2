// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from microstrain_inertial_msgs:msg/MipSensorOverrangeStatus.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_SENSOR_OVERRANGE_STATUS__BUILDER_HPP_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_SENSOR_OVERRANGE_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "microstrain_inertial_msgs/msg/detail/mip_sensor_overrange_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace microstrain_inertial_msgs
{

namespace msg
{

namespace builder
{

class Init_MipSensorOverrangeStatus_status
{
public:
  explicit Init_MipSensorOverrangeStatus_status(::microstrain_inertial_msgs::msg::MipSensorOverrangeStatus & msg)
  : msg_(msg)
  {}
  ::microstrain_inertial_msgs::msg::MipSensorOverrangeStatus status(::microstrain_inertial_msgs::msg::MipSensorOverrangeStatus::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipSensorOverrangeStatus msg_;
};

class Init_MipSensorOverrangeStatus_header
{
public:
  Init_MipSensorOverrangeStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MipSensorOverrangeStatus_status header(::microstrain_inertial_msgs::msg::MipSensorOverrangeStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MipSensorOverrangeStatus_status(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipSensorOverrangeStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::microstrain_inertial_msgs::msg::MipSensorOverrangeStatus>()
{
  return microstrain_inertial_msgs::msg::builder::Init_MipSensorOverrangeStatus_header();
}

}  // namespace microstrain_inertial_msgs

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_SENSOR_OVERRANGE_STATUS__BUILDER_HPP_
