// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from microstrain_inertial_msgs:msg/MipBaseDeviceInfo.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_BASE_DEVICE_INFO__BUILDER_HPP_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_BASE_DEVICE_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "microstrain_inertial_msgs/msg/detail/mip_base_device_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace microstrain_inertial_msgs
{

namespace msg
{

namespace builder
{

class Init_MipBaseDeviceInfo_device_options
{
public:
  explicit Init_MipBaseDeviceInfo_device_options(::microstrain_inertial_msgs::msg::MipBaseDeviceInfo & msg)
  : msg_(msg)
  {}
  ::microstrain_inertial_msgs::msg::MipBaseDeviceInfo device_options(::microstrain_inertial_msgs::msg::MipBaseDeviceInfo::_device_options_type arg)
  {
    msg_.device_options = std::move(arg);
    return std::move(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipBaseDeviceInfo msg_;
};

class Init_MipBaseDeviceInfo_lot_number
{
public:
  explicit Init_MipBaseDeviceInfo_lot_number(::microstrain_inertial_msgs::msg::MipBaseDeviceInfo & msg)
  : msg_(msg)
  {}
  Init_MipBaseDeviceInfo_device_options lot_number(::microstrain_inertial_msgs::msg::MipBaseDeviceInfo::_lot_number_type arg)
  {
    msg_.lot_number = std::move(arg);
    return Init_MipBaseDeviceInfo_device_options(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipBaseDeviceInfo msg_;
};

class Init_MipBaseDeviceInfo_serial_number
{
public:
  explicit Init_MipBaseDeviceInfo_serial_number(::microstrain_inertial_msgs::msg::MipBaseDeviceInfo & msg)
  : msg_(msg)
  {}
  Init_MipBaseDeviceInfo_lot_number serial_number(::microstrain_inertial_msgs::msg::MipBaseDeviceInfo::_serial_number_type arg)
  {
    msg_.serial_number = std::move(arg);
    return Init_MipBaseDeviceInfo_lot_number(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipBaseDeviceInfo msg_;
};

class Init_MipBaseDeviceInfo_model_number
{
public:
  explicit Init_MipBaseDeviceInfo_model_number(::microstrain_inertial_msgs::msg::MipBaseDeviceInfo & msg)
  : msg_(msg)
  {}
  Init_MipBaseDeviceInfo_serial_number model_number(::microstrain_inertial_msgs::msg::MipBaseDeviceInfo::_model_number_type arg)
  {
    msg_.model_number = std::move(arg);
    return Init_MipBaseDeviceInfo_serial_number(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipBaseDeviceInfo msg_;
};

class Init_MipBaseDeviceInfo_model_name
{
public:
  explicit Init_MipBaseDeviceInfo_model_name(::microstrain_inertial_msgs::msg::MipBaseDeviceInfo & msg)
  : msg_(msg)
  {}
  Init_MipBaseDeviceInfo_model_number model_name(::microstrain_inertial_msgs::msg::MipBaseDeviceInfo::_model_name_type arg)
  {
    msg_.model_name = std::move(arg);
    return Init_MipBaseDeviceInfo_model_number(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipBaseDeviceInfo msg_;
};

class Init_MipBaseDeviceInfo_firmware_version
{
public:
  Init_MipBaseDeviceInfo_firmware_version()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MipBaseDeviceInfo_model_name firmware_version(::microstrain_inertial_msgs::msg::MipBaseDeviceInfo::_firmware_version_type arg)
  {
    msg_.firmware_version = std::move(arg);
    return Init_MipBaseDeviceInfo_model_name(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipBaseDeviceInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::microstrain_inertial_msgs::msg::MipBaseDeviceInfo>()
{
  return microstrain_inertial_msgs::msg::builder::Init_MipBaseDeviceInfo_firmware_version();
}

}  // namespace microstrain_inertial_msgs

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_BASE_DEVICE_INFO__BUILDER_HPP_
