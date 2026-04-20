// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from microstrain_inertial_msgs:msg/MipSensorTemperatureStatistics.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_SENSOR_TEMPERATURE_STATISTICS__BUILDER_HPP_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_SENSOR_TEMPERATURE_STATISTICS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "microstrain_inertial_msgs/msg/detail/mip_sensor_temperature_statistics__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace microstrain_inertial_msgs
{

namespace msg
{

namespace builder
{

class Init_MipSensorTemperatureStatistics_mean_temp
{
public:
  explicit Init_MipSensorTemperatureStatistics_mean_temp(::microstrain_inertial_msgs::msg::MipSensorTemperatureStatistics & msg)
  : msg_(msg)
  {}
  ::microstrain_inertial_msgs::msg::MipSensorTemperatureStatistics mean_temp(::microstrain_inertial_msgs::msg::MipSensorTemperatureStatistics::_mean_temp_type arg)
  {
    msg_.mean_temp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipSensorTemperatureStatistics msg_;
};

class Init_MipSensorTemperatureStatistics_max_temp
{
public:
  explicit Init_MipSensorTemperatureStatistics_max_temp(::microstrain_inertial_msgs::msg::MipSensorTemperatureStatistics & msg)
  : msg_(msg)
  {}
  Init_MipSensorTemperatureStatistics_mean_temp max_temp(::microstrain_inertial_msgs::msg::MipSensorTemperatureStatistics::_max_temp_type arg)
  {
    msg_.max_temp = std::move(arg);
    return Init_MipSensorTemperatureStatistics_mean_temp(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipSensorTemperatureStatistics msg_;
};

class Init_MipSensorTemperatureStatistics_min_temp
{
public:
  explicit Init_MipSensorTemperatureStatistics_min_temp(::microstrain_inertial_msgs::msg::MipSensorTemperatureStatistics & msg)
  : msg_(msg)
  {}
  Init_MipSensorTemperatureStatistics_max_temp min_temp(::microstrain_inertial_msgs::msg::MipSensorTemperatureStatistics::_min_temp_type arg)
  {
    msg_.min_temp = std::move(arg);
    return Init_MipSensorTemperatureStatistics_max_temp(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipSensorTemperatureStatistics msg_;
};

class Init_MipSensorTemperatureStatistics_header
{
public:
  Init_MipSensorTemperatureStatistics_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MipSensorTemperatureStatistics_min_temp header(::microstrain_inertial_msgs::msg::MipSensorTemperatureStatistics::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MipSensorTemperatureStatistics_min_temp(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipSensorTemperatureStatistics msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::microstrain_inertial_msgs::msg::MipSensorTemperatureStatistics>()
{
  return microstrain_inertial_msgs::msg::builder::Init_MipSensorTemperatureStatistics_header();
}

}  // namespace microstrain_inertial_msgs

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_SENSOR_TEMPERATURE_STATISTICS__BUILDER_HPP_
