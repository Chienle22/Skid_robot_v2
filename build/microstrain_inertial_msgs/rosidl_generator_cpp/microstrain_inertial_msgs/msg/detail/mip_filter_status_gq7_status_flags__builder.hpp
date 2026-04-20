// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from microstrain_inertial_msgs:msg/MipFilterStatusGq7StatusFlags.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_STATUS_GQ7_STATUS_FLAGS__BUILDER_HPP_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_STATUS_GQ7_STATUS_FLAGS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "microstrain_inertial_msgs/msg/detail/mip_filter_status_gq7_status_flags__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace microstrain_inertial_msgs
{

namespace msg
{

namespace builder
{

class Init_MipFilterStatusGq7StatusFlags_solution_error
{
public:
  explicit Init_MipFilterStatusGq7StatusFlags_solution_error(::microstrain_inertial_msgs::msg::MipFilterStatusGq7StatusFlags & msg)
  : msg_(msg)
  {}
  ::microstrain_inertial_msgs::msg::MipFilterStatusGq7StatusFlags solution_error(::microstrain_inertial_msgs::msg::MipFilterStatusGq7StatusFlags::_solution_error_type arg)
  {
    msg_.solution_error = std::move(arg);
    return std::move(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipFilterStatusGq7StatusFlags msg_;
};

class Init_MipFilterStatusGq7StatusFlags_time_sync_warning
{
public:
  explicit Init_MipFilterStatusGq7StatusFlags_time_sync_warning(::microstrain_inertial_msgs::msg::MipFilterStatusGq7StatusFlags & msg)
  : msg_(msg)
  {}
  Init_MipFilterStatusGq7StatusFlags_solution_error time_sync_warning(::microstrain_inertial_msgs::msg::MipFilterStatusGq7StatusFlags::_time_sync_warning_type arg)
  {
    msg_.time_sync_warning = std::move(arg);
    return Init_MipFilterStatusGq7StatusFlags_solution_error(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipFilterStatusGq7StatusFlags msg_;
};

class Init_MipFilterStatusGq7StatusFlags_mounting_transform_warning
{
public:
  explicit Init_MipFilterStatusGq7StatusFlags_mounting_transform_warning(::microstrain_inertial_msgs::msg::MipFilterStatusGq7StatusFlags & msg)
  : msg_(msg)
  {}
  Init_MipFilterStatusGq7StatusFlags_time_sync_warning mounting_transform_warning(::microstrain_inertial_msgs::msg::MipFilterStatusGq7StatusFlags::_mounting_transform_warning_type arg)
  {
    msg_.mounting_transform_warning = std::move(arg);
    return Init_MipFilterStatusGq7StatusFlags_time_sync_warning(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipFilterStatusGq7StatusFlags msg_;
};

class Init_MipFilterStatusGq7StatusFlags_antenna_lever_arm_warning
{
public:
  explicit Init_MipFilterStatusGq7StatusFlags_antenna_lever_arm_warning(::microstrain_inertial_msgs::msg::MipFilterStatusGq7StatusFlags & msg)
  : msg_(msg)
  {}
  Init_MipFilterStatusGq7StatusFlags_mounting_transform_warning antenna_lever_arm_warning(::microstrain_inertial_msgs::msg::MipFilterStatusGq7StatusFlags::_antenna_lever_arm_warning_type arg)
  {
    msg_.antenna_lever_arm_warning = std::move(arg);
    return Init_MipFilterStatusGq7StatusFlags_mounting_transform_warning(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipFilterStatusGq7StatusFlags msg_;
};

class Init_MipFilterStatusGq7StatusFlags_gnss_clk_warning
{
public:
  explicit Init_MipFilterStatusGq7StatusFlags_gnss_clk_warning(::microstrain_inertial_msgs::msg::MipFilterStatusGq7StatusFlags & msg)
  : msg_(msg)
  {}
  Init_MipFilterStatusGq7StatusFlags_antenna_lever_arm_warning gnss_clk_warning(::microstrain_inertial_msgs::msg::MipFilterStatusGq7StatusFlags::_gnss_clk_warning_type arg)
  {
    msg_.gnss_clk_warning = std::move(arg);
    return Init_MipFilterStatusGq7StatusFlags_antenna_lever_arm_warning(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipFilterStatusGq7StatusFlags msg_;
};

class Init_MipFilterStatusGq7StatusFlags_imu_bias_warning
{
public:
  explicit Init_MipFilterStatusGq7StatusFlags_imu_bias_warning(::microstrain_inertial_msgs::msg::MipFilterStatusGq7StatusFlags & msg)
  : msg_(msg)
  {}
  Init_MipFilterStatusGq7StatusFlags_gnss_clk_warning imu_bias_warning(::microstrain_inertial_msgs::msg::MipFilterStatusGq7StatusFlags::_imu_bias_warning_type arg)
  {
    msg_.imu_bias_warning = std::move(arg);
    return Init_MipFilterStatusGq7StatusFlags_gnss_clk_warning(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipFilterStatusGq7StatusFlags msg_;
};

class Init_MipFilterStatusGq7StatusFlags_velocity_warning
{
public:
  explicit Init_MipFilterStatusGq7StatusFlags_velocity_warning(::microstrain_inertial_msgs::msg::MipFilterStatusGq7StatusFlags & msg)
  : msg_(msg)
  {}
  Init_MipFilterStatusGq7StatusFlags_imu_bias_warning velocity_warning(::microstrain_inertial_msgs::msg::MipFilterStatusGq7StatusFlags::_velocity_warning_type arg)
  {
    msg_.velocity_warning = std::move(arg);
    return Init_MipFilterStatusGq7StatusFlags_imu_bias_warning(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipFilterStatusGq7StatusFlags msg_;
};

class Init_MipFilterStatusGq7StatusFlags_position_warning
{
public:
  explicit Init_MipFilterStatusGq7StatusFlags_position_warning(::microstrain_inertial_msgs::msg::MipFilterStatusGq7StatusFlags & msg)
  : msg_(msg)
  {}
  Init_MipFilterStatusGq7StatusFlags_velocity_warning position_warning(::microstrain_inertial_msgs::msg::MipFilterStatusGq7StatusFlags::_position_warning_type arg)
  {
    msg_.position_warning = std::move(arg);
    return Init_MipFilterStatusGq7StatusFlags_velocity_warning(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipFilterStatusGq7StatusFlags msg_;
};

class Init_MipFilterStatusGq7StatusFlags_heading_warning
{
public:
  explicit Init_MipFilterStatusGq7StatusFlags_heading_warning(::microstrain_inertial_msgs::msg::MipFilterStatusGq7StatusFlags & msg)
  : msg_(msg)
  {}
  Init_MipFilterStatusGq7StatusFlags_position_warning heading_warning(::microstrain_inertial_msgs::msg::MipFilterStatusGq7StatusFlags::_heading_warning_type arg)
  {
    msg_.heading_warning = std::move(arg);
    return Init_MipFilterStatusGq7StatusFlags_position_warning(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipFilterStatusGq7StatusFlags msg_;
};

class Init_MipFilterStatusGq7StatusFlags_roll_pitch_warning
{
public:
  explicit Init_MipFilterStatusGq7StatusFlags_roll_pitch_warning(::microstrain_inertial_msgs::msg::MipFilterStatusGq7StatusFlags & msg)
  : msg_(msg)
  {}
  Init_MipFilterStatusGq7StatusFlags_heading_warning roll_pitch_warning(::microstrain_inertial_msgs::msg::MipFilterStatusGq7StatusFlags::_roll_pitch_warning_type arg)
  {
    msg_.roll_pitch_warning = std::move(arg);
    return Init_MipFilterStatusGq7StatusFlags_heading_warning(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipFilterStatusGq7StatusFlags msg_;
};

class Init_MipFilterStatusGq7StatusFlags_filter_condition
{
public:
  Init_MipFilterStatusGq7StatusFlags_filter_condition()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MipFilterStatusGq7StatusFlags_roll_pitch_warning filter_condition(::microstrain_inertial_msgs::msg::MipFilterStatusGq7StatusFlags::_filter_condition_type arg)
  {
    msg_.filter_condition = std::move(arg);
    return Init_MipFilterStatusGq7StatusFlags_roll_pitch_warning(msg_);
  }

private:
  ::microstrain_inertial_msgs::msg::MipFilterStatusGq7StatusFlags msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::microstrain_inertial_msgs::msg::MipFilterStatusGq7StatusFlags>()
{
  return microstrain_inertial_msgs::msg::builder::Init_MipFilterStatusGq7StatusFlags_filter_condition();
}

}  // namespace microstrain_inertial_msgs

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_FILTER_STATUS_GQ7_STATUS_FLAGS__BUILDER_HPP_
