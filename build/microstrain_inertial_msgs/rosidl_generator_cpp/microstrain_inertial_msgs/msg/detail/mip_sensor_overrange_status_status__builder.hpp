// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from microstrain_inertial_msgs:msg/MipSensorOverrangeStatusStatus.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_SENSOR_OVERRANGE_STATUS_STATUS__BUILDER_HPP_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_SENSOR_OVERRANGE_STATUS_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "microstrain_inertial_msgs/msg/detail/mip_sensor_overrange_status_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace microstrain_inertial_msgs
{

namespace msg
{

namespace builder
{

class Init_MipSensorOverrangeStatusStatus_press
{
public:
  explicit Init_MipSensorOverrangeStatusStatus_press(::microstrain_inertial_msgs::msg::MipSensorOverrangeStatusStatus & msg)
  : msg_(msg)
  {}
  ::microstrain_inertial_msgs::msg::MipSensorOverrangeStatusStatus press(::microstrain_inertial_msgs::msg::MipSensorOverrangeStatusStatus::_press_type arg)
  {
    msg_.press = std::move(arg);
    return std::move(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipSensorOverrangeStatusStatus msg_;
};

class Init_MipSensorOverrangeStatusStatus_mag_z
{
public:
  explicit Init_MipSensorOverrangeStatusStatus_mag_z(::microstrain_inertial_msgs::msg::MipSensorOverrangeStatusStatus & msg)
  : msg_(msg)
  {}
  Init_MipSensorOverrangeStatusStatus_press mag_z(::microstrain_inertial_msgs::msg::MipSensorOverrangeStatusStatus::_mag_z_type arg)
  {
    msg_.mag_z = std::move(arg);
    return Init_MipSensorOverrangeStatusStatus_press(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipSensorOverrangeStatusStatus msg_;
};

class Init_MipSensorOverrangeStatusStatus_mag_y
{
public:
  explicit Init_MipSensorOverrangeStatusStatus_mag_y(::microstrain_inertial_msgs::msg::MipSensorOverrangeStatusStatus & msg)
  : msg_(msg)
  {}
  Init_MipSensorOverrangeStatusStatus_mag_z mag_y(::microstrain_inertial_msgs::msg::MipSensorOverrangeStatusStatus::_mag_y_type arg)
  {
    msg_.mag_y = std::move(arg);
    return Init_MipSensorOverrangeStatusStatus_mag_z(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipSensorOverrangeStatusStatus msg_;
};

class Init_MipSensorOverrangeStatusStatus_mag_x
{
public:
  explicit Init_MipSensorOverrangeStatusStatus_mag_x(::microstrain_inertial_msgs::msg::MipSensorOverrangeStatusStatus & msg)
  : msg_(msg)
  {}
  Init_MipSensorOverrangeStatusStatus_mag_y mag_x(::microstrain_inertial_msgs::msg::MipSensorOverrangeStatusStatus::_mag_x_type arg)
  {
    msg_.mag_x = std::move(arg);
    return Init_MipSensorOverrangeStatusStatus_mag_y(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipSensorOverrangeStatusStatus msg_;
};

class Init_MipSensorOverrangeStatusStatus_gyro_z
{
public:
  explicit Init_MipSensorOverrangeStatusStatus_gyro_z(::microstrain_inertial_msgs::msg::MipSensorOverrangeStatusStatus & msg)
  : msg_(msg)
  {}
  Init_MipSensorOverrangeStatusStatus_mag_x gyro_z(::microstrain_inertial_msgs::msg::MipSensorOverrangeStatusStatus::_gyro_z_type arg)
  {
    msg_.gyro_z = std::move(arg);
    return Init_MipSensorOverrangeStatusStatus_mag_x(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipSensorOverrangeStatusStatus msg_;
};

class Init_MipSensorOverrangeStatusStatus_gyro_y
{
public:
  explicit Init_MipSensorOverrangeStatusStatus_gyro_y(::microstrain_inertial_msgs::msg::MipSensorOverrangeStatusStatus & msg)
  : msg_(msg)
  {}
  Init_MipSensorOverrangeStatusStatus_gyro_z gyro_y(::microstrain_inertial_msgs::msg::MipSensorOverrangeStatusStatus::_gyro_y_type arg)
  {
    msg_.gyro_y = std::move(arg);
    return Init_MipSensorOverrangeStatusStatus_gyro_z(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipSensorOverrangeStatusStatus msg_;
};

class Init_MipSensorOverrangeStatusStatus_gyro_x
{
public:
  explicit Init_MipSensorOverrangeStatusStatus_gyro_x(::microstrain_inertial_msgs::msg::MipSensorOverrangeStatusStatus & msg)
  : msg_(msg)
  {}
  Init_MipSensorOverrangeStatusStatus_gyro_y gyro_x(::microstrain_inertial_msgs::msg::MipSensorOverrangeStatusStatus::_gyro_x_type arg)
  {
    msg_.gyro_x = std::move(arg);
    return Init_MipSensorOverrangeStatusStatus_gyro_y(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipSensorOverrangeStatusStatus msg_;
};

class Init_MipSensorOverrangeStatusStatus_accel_z
{
public:
  explicit Init_MipSensorOverrangeStatusStatus_accel_z(::microstrain_inertial_msgs::msg::MipSensorOverrangeStatusStatus & msg)
  : msg_(msg)
  {}
  Init_MipSensorOverrangeStatusStatus_gyro_x accel_z(::microstrain_inertial_msgs::msg::MipSensorOverrangeStatusStatus::_accel_z_type arg)
  {
    msg_.accel_z = std::move(arg);
    return Init_MipSensorOverrangeStatusStatus_gyro_x(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipSensorOverrangeStatusStatus msg_;
};

class Init_MipSensorOverrangeStatusStatus_accel_y
{
public:
  explicit Init_MipSensorOverrangeStatusStatus_accel_y(::microstrain_inertial_msgs::msg::MipSensorOverrangeStatusStatus & msg)
  : msg_(msg)
  {}
  Init_MipSensorOverrangeStatusStatus_accel_z accel_y(::microstrain_inertial_msgs::msg::MipSensorOverrangeStatusStatus::_accel_y_type arg)
  {
    msg_.accel_y = std::move(arg);
    return Init_MipSensorOverrangeStatusStatus_accel_z(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipSensorOverrangeStatusStatus msg_;
};

class Init_MipSensorOverrangeStatusStatus_accel_x
{
public:
  Init_MipSensorOverrangeStatusStatus_accel_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MipSensorOverrangeStatusStatus_accel_y accel_x(::microstrain_inertial_msgs::msg::MipSensorOverrangeStatusStatus::_accel_x_type arg)
  {
    msg_.accel_x = std::move(arg);
    return Init_MipSensorOverrangeStatusStatus_accel_y(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipSensorOverrangeStatusStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::microstrain_inertial_msgs::msg::MipSensorOverrangeStatusStatus>()
{
  return microstrain_inertial_msgs::msg::builder::Init_MipSensorOverrangeStatusStatus_accel_x();
}

}  // namespace microstrain_inertial_msgs

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_SENSOR_OVERRANGE_STATUS_STATUS__BUILDER_HPP_
