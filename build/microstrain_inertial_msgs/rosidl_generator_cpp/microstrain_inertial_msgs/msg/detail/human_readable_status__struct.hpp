// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from microstrain_inertial_msgs:msg/HumanReadableStatus.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__HUMAN_READABLE_STATUS__STRUCT_HPP_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__HUMAN_READABLE_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'device_info'
#include "microstrain_inertial_msgs/msg/detail/mip_base_device_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__microstrain_inertial_msgs__msg__HumanReadableStatus __attribute__((deprecated))
#else
# define DEPRECATED__microstrain_inertial_msgs__msg__HumanReadableStatus __declspec(deprecated)
#endif

namespace microstrain_inertial_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HumanReadableStatus_
{
  using Type = HumanReadableStatus_<ContainerAllocator>;

  explicit HumanReadableStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    device_info(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gnss_state = "";
      this->dual_antenna_fix_type = "";
      this->filter_state = "";
    }
  }

  explicit HumanReadableStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    device_info(_alloc, _init),
    gnss_state(_alloc),
    dual_antenna_fix_type(_alloc),
    filter_state(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gnss_state = "";
      this->dual_antenna_fix_type = "";
      this->filter_state = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _device_info_type =
    microstrain_inertial_msgs::msg::MipBaseDeviceInfo_<ContainerAllocator>;
  _device_info_type device_info;
  using _gnss_state_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _gnss_state_type gnss_state;
  using _dual_antenna_fix_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _dual_antenna_fix_type_type dual_antenna_fix_type;
  using _filter_state_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _filter_state_type filter_state;
  using _status_flags_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _status_flags_type status_flags;
  using _continuous_bit_flags_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _continuous_bit_flags_type continuous_bit_flags;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__device_info(
    const microstrain_inertial_msgs::msg::MipBaseDeviceInfo_<ContainerAllocator> & _arg)
  {
    this->device_info = _arg;
    return *this;
  }
  Type & set__gnss_state(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->gnss_state = _arg;
    return *this;
  }
  Type & set__dual_antenna_fix_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->dual_antenna_fix_type = _arg;
    return *this;
  }
  Type & set__filter_state(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->filter_state = _arg;
    return *this;
  }
  Type & set__status_flags(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->status_flags = _arg;
    return *this;
  }
  Type & set__continuous_bit_flags(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->continuous_bit_flags = _arg;
    return *this;
  }

  // constant declarations
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> UNSUPPORTED;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> GNSS_STATE_NO_FIX;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> GNSS_STATE_3D_FIX;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> GNSS_STATE_SBAS;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> GNSS_STATE_RTK_FLOAT;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> GNSS_STATE_RTK_FIXED;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> DUAL_ANTENNA_FIX_TYPE_NONE;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> DUAL_ANTENNA_FIX_TYPE_FLOAT;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> DUAL_ANTENNA_FIX_TYPE_FIXED;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> FILTER_STATE_GX5_STARTUP;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> FILTER_STATE_GX5_INIT;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> FILTER_STATE_GX5_RUN_SOLUTION_VALID;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> FILTER_STATE_GX5_RUN_SOLUTION_ERROR;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> FILTER_STATE_GQ7_INIT;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> FILTER_STATE_GQ7_VERT_GYRO;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> FILTER_STATE_GQ7_AHRS;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> FILTER_STATE_GQ7_FULL_NAV;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> STATUS_FLAGS_GX5_INIT_NO_ATTITUDE;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> STATUS_FLAGS_GX5_INIT_NO_POSITION_VELOCITY;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> STATUS_FLAGS_GX5_RUN_IMU_UNAVAILABLE;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> STATUS_FLAGS_GX5_RUN_GPS_UNAVAILABLE;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> STATUS_FLAGS_GX5_RUN_MATRIX_SINGULARITY;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> STATUS_FLAGS_GX5_RUN_POSITION_COVARIANCE_WARNING;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> STATUS_FLAGS_GX5_RUN_VELOCITY_COVARIANCE_WARNING;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> STATUS_FLAGS_GX5_RUN_ATTITUDE_COVARIANCE_WARNING;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> STATUS_FLAGS_GX5_RUN_NAN_IN_SOLUTION_WARNING;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> STATUS_FLAGS_GX5_RUN_GYRO_BIAS_EST_HIGH_WARNING;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> STATUS_FLAGS_GX5_RUN_ACCEL_BIAS_EST_HIGH_WARNING;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> STATUS_FLAGS_GX5_RUN_GYRO_SCALE_FACTOR_EST_HIGH_WARNING;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> STATUS_FLAGS_GX5_RUN_ACCEL_SCALE_FACTOR_EST_HIGH_WARNING;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> STATUS_FLAGS_GX5_RUN_MAG_BIAS_EST_HIGH_WARNING;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> STATUS_FLAGS_GX5_RUN_ANT_OFFSET_CORRECTION_EST_HIGH_WARNING;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> STATUS_FLAGS_GX5_RUN_MAG_HARD_IRON_EST_HIGH_WARNING;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> STATUS_FLAGS_GX5_RUN_MAG_SOFT_IRON_EST_HIGH_WARNING;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> STATUS_FLAGS_GQ7_FILTER_CONDITION_STABLE;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> STATUS_FLAGS_GQ7_FILTER_CONDITION_CONVERGING;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> STATUS_FLAGS_GQ7_FILTER_CONDITION_UNSTABLE;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> STATUS_FLAGS_GQ7_ROLL_PITCH_WARNING;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> STATUS_FLAGS_GQ7_HEADING_WARNING;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> STATUS_FLAGS_GQ7_POSITION_WARNING;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> STATUS_FLAGS_GQ7_VELOCITY_WARNING;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> STATUS_FLAGS_GQ7_IMU_BIAS_WARNING;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> STATUS_FLAGS_GQ7_GNSS_CLK_WARNING;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> STATUS_FLAGS_GQ7_ANTENNA_LEVER_ARM_WARNING;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> STATUS_FLAGS_GQ7_MOUNTING_TRANSFORM_WARNING;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> STATUS_FLAGS_GQ7_TIME_SYNC_WARNING;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> STATUS_FLAGS_GQ7_SOLUTION_ERROR;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CONTINUOUS_BIT_FLAGS_GQ7_SYSTEM_CLOCK_FAILURE;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CONTINUOUS_BIT_FLAGS_GQ7_POWER_FAULT;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CONTINUOUS_BIT_FLAGS_GQ7_FIRMWARE_FAULT;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CONTINUOUS_BIT_FLAGS_GQ7_TIMING_OVERLOAD;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CONTINUOUS_BIT_FLAGS_GQ7_BUFFER_OVERRUN;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CONTINUOUS_BIT_FLAGS_GQ7_IMU_IPC_FAULT;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CONTINUOUS_BIT_FLAGS_GQ7_FILTER_IPC_FAULT;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CONTINUOUS_BIT_FLAGS_GQ7_GNSS_IPC_FAULT;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CONTINUOUS_BIT_FLAGS_GQ7_IMU_CLOCK_FAULT;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CONTINUOUS_BIT_FLAGS_GQ7_IMU_COMMUNICATION_FAULT;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CONTINUOUS_BIT_FLAGS_GQ7_IMU_TIMING_OVERRUN;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CONTINUOUS_BIT_FLAGS_GQ7_IMU_CALIBRATION_ERROR_ACCEL;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CONTINUOUS_BIT_FLAGS_GQ7_IMU_CALIBRATION_ERROR_GYRO;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CONTINUOUS_BIT_FLAGS_GQ7_IMU_CALIBRATION_ERROR_MAG;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CONTINUOUS_BIT_FLAGS_GQ7_ACCELEROMETER_GENERAL_FAULT;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CONTINUOUS_BIT_FLAGS_GQ7_ACCELEROMETER_OVER_RANGE;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CONTINUOUS_BIT_FLAGS_GQ7_ACCELEROMETER_SELF_TEST_FAIL;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CONTINUOUS_BIT_FLAGS_GQ7_GYROSCOPE_GENERAL_FAULT;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CONTINUOUS_BIT_FLAGS_GQ7_GYROSCOPE_OVER_RANGE;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CONTINUOUS_BIT_FLAGS_GQ7_GYROSCOPE_SELF_TEST_FAIL;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CONTINUOUS_BIT_FLAGS_GQ7_MAGNETOMETER_GENERAL_FAULT;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CONTINUOUS_BIT_FLAGS_GQ7_MAGNETOMETER_OVER_RANGE;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CONTINUOUS_BIT_FLAGS_GQ7_MAGNETOMETER_SELF_TEST_FAIL;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CONTINUOUS_BIT_FLAGS_GQ7_PRESSURE_SENSOR_GENERAL_FAULT;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CONTINUOUS_BIT_FLAGS_GQ7_PRESSURE_SENSOR_OVER_RANGE;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CONTINUOUS_BIT_FLAGS_GQ7_PRESSURE_SENSOR_SELF_TEST_FAIL;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CONTINUOUS_BIT_FLAGS_GQ7_FILTER_CLOCK_FAULT;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CONTINUOUS_BIT_FLAGS_GQ7_FILTER_HARDWARE_FAULT;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CONTINUOUS_BIT_FLAGS_GQ7_FILTER_TIMING_OVERRUN;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CONTINUOUS_BIT_FLAGS_GQ7_FILTER_TIMING_UNDERRUN;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CONTINUOUS_BIT_FLAGS_GQ7_FILTER_COMMUNICATION_ERROR;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CONTINUOUS_BIT_FLAGS_GQ7_GNSS_CLOCK_FAULT;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CONTINUOUS_BIT_FLAGS_GQ7_GNSS_HARDWARE_FAULT;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CONTINUOUS_BIT_FLAGS_GQ7_GNSS_COMMUNICATION_ERROR;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CONTINUOUS_BIT_FLAGS_GQ7_GPS_TIME_FAULT;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CONTINUOUS_BIT_FLAGS_GQ7_GNSS_TIMING_OVERRUN;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CONTINUOUS_BIT_FLAGS_GQ7_GNSS_RECEIVER_1_POWER_FAULT;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CONTINUOUS_BIT_FLAGS_GQ7_GNSS_RECEIVER_1_FAULT;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CONTINUOUS_BIT_FLAGS_GQ7_GNSS_ANTENNA_1_SHORTED;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CONTINUOUS_BIT_FLAGS_GQ7_GNSS_ANTENNA_1_OPEN;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CONTINUOUS_BIT_FLAGS_GQ7_GNSS_RECEIVER_1_SOLUTION_FAULT;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CONTINUOUS_BIT_FLAGS_GQ7_GNSS_RECEIVER_2_POWER_FAULT;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CONTINUOUS_BIT_FLAGS_GQ7_GNSS_RECEIVER_2_FAULT;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CONTINUOUS_BIT_FLAGS_GQ7_GNSS_ANTENNA_2_SHORTED;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CONTINUOUS_BIT_FLAGS_GQ7_GNSS_ANTENNA_2_OPEN;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CONTINUOUS_BIT_FLAGS_GQ7_GNSS_RECEIVER_2_SOLUTION_FAULT;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CONTINUOUS_BIT_FLAGS_GQ7_RTCM_COMMUNICATION_FAULT;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CONTINUOUS_BIT_FLAGS_GQ7_RTK_DONGLE_FAULT;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CONTINUOUS_BIT_FLAGS_CV7_SYSTEM_CLOCK_FAILURE;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CONTINUOUS_BIT_FLAGS_CV7_POWER_FAULT;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CONTINUOUS_BIT_FLAGS_CV7_FIRMWARE_FAULT;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CONTINUOUS_BIT_FLAGS_CV7_TIMING_OVERLOAD;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CONTINUOUS_BIT_FLAGS_CV7_BUFFER_OVERRUN;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CONTINUOUS_BIT_FLAGS_CV7_IMU_PROCESS_FAULT;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CONTINUOUS_BIT_FLAGS_CV7_IMU_DATA_RATE_MISMATCH;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CONTINUOUS_BIT_FLAGS_CV7_IMU_OVERRUN_DROPPED_DATA;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CONTINUOUS_BIT_FLAGS_CV7_IMU_STUCK;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CONTINUOUS_BIT_FLAGS_CV7_FILTER_PROCESS_FAULT;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CONTINUOUS_BIT_FLAGS_CV7_FILTER_DROPPED_DATA;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CONTINUOUS_BIT_FLAGS_CV7_FILTER_RATE_MISMATCH;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CONTINUOUS_BIT_FLAGS_CV7_FILTER_STUCK;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CONTINUOUS_BIT_FLAGS_CV7_IMU_CLOCK_FAULT;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CONTINUOUS_BIT_FLAGS_CV7_IMU_COMMUNICATION_FAULT;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CONTINUOUS_BIT_FLAGS_CV7_IMU_TIMING_OVERRUN;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CONTINUOUS_BIT_FLAGS_CV7_IMU_CALIBRATION_ERROR_ACCELEROMETER;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CONTINUOUS_BIT_FLAGS_CV7_IMU_CALIBRATION_ERROR_GYROSCOPE;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CONTINUOUS_BIT_FLAGS_CV7_IMU_CALIBRATION_ERROR_MAGNETOMETER;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CONTINUOUS_BIT_FLAGS_CV7_ACCELEROMETER_GENERAL_FAULT;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CONTINUOUS_BIT_FLAGS_CV7_ACCELEROMETER_OVER_RANGE;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CONTINUOUS_BIT_FLAGS_CV7_ACCELEROMETER_SELF_TEST_FAIL;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CONTINUOUS_BIT_FLAGS_CV7_GYROSCOPE_GENERAL_FAULT;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CONTINUOUS_BIT_FLAGS_CV7_GYROSCOPE_OVER_RANGE;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CONTINUOUS_BIT_FLAGS_CV7_GYROSCOPE_SELF_TEST_FAIL;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CONTINUOUS_BIT_FLAGS_CV7_MAGNETOMETER_GENERAL_FAULT;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CONTINUOUS_BIT_FLAGS_CV7_MAGNETOMETER_OVER_RANGE;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CONTINUOUS_BIT_FLAGS_CV7_MAGNETOMETER_SELF_TEST_FAIL;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CONTINUOUS_BIT_FLAGS_CV7_PRESSURE_SENSOR_GENERAL_FAULT;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CONTINUOUS_BIT_FLAGS_CV7_PRESSURE_SENSOR_OVER_RANGE;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CONTINUOUS_BIT_FLAGS_CV7_PRESSURE_SENSOR_SELF_TEST_FAIL;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CONTINUOUS_BIT_FLAGS_CV7_FACTORY_BITS_INVALID;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CONTINUOUS_BIT_FLAGS_CV7_FILTER_FAULT;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CONTINUOUS_BIT_FLAGS_CV7_FILTER_TIMING_OVERRUN;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CONTINUOUS_BIT_FLAGS_CV7_FILTER_TIMING_UNDERRUN;

  // pointer types
  using RawPtr =
    microstrain_inertial_msgs::msg::HumanReadableStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const microstrain_inertial_msgs::msg::HumanReadableStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<microstrain_inertial_msgs::msg::HumanReadableStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<microstrain_inertial_msgs::msg::HumanReadableStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      microstrain_inertial_msgs::msg::HumanReadableStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<microstrain_inertial_msgs::msg::HumanReadableStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      microstrain_inertial_msgs::msg::HumanReadableStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<microstrain_inertial_msgs::msg::HumanReadableStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<microstrain_inertial_msgs::msg::HumanReadableStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<microstrain_inertial_msgs::msg::HumanReadableStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__microstrain_inertial_msgs__msg__HumanReadableStatus
    std::shared_ptr<microstrain_inertial_msgs::msg::HumanReadableStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__microstrain_inertial_msgs__msg__HumanReadableStatus
    std::shared_ptr<microstrain_inertial_msgs::msg::HumanReadableStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HumanReadableStatus_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->device_info != other.device_info) {
      return false;
    }
    if (this->gnss_state != other.gnss_state) {
      return false;
    }
    if (this->dual_antenna_fix_type != other.dual_antenna_fix_type) {
      return false;
    }
    if (this->filter_state != other.filter_state) {
      return false;
    }
    if (this->status_flags != other.status_flags) {
      return false;
    }
    if (this->continuous_bit_flags != other.continuous_bit_flags) {
      return false;
    }
    return true;
  }
  bool operator!=(const HumanReadableStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HumanReadableStatus_

// alias to use template instance with default allocator
using HumanReadableStatus =
  microstrain_inertial_msgs::msg::HumanReadableStatus_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::UNSUPPORTED = "Unsupported";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::GNSS_STATE_NO_FIX = "No Fix";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::GNSS_STATE_3D_FIX = "3D Fix";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::GNSS_STATE_SBAS = "SBAS";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::GNSS_STATE_RTK_FLOAT = "RTK Float";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::GNSS_STATE_RTK_FIXED = "RTK Fixed";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::DUAL_ANTENNA_FIX_TYPE_NONE = "None";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::DUAL_ANTENNA_FIX_TYPE_FLOAT = "Dual Antenna Float";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::DUAL_ANTENNA_FIX_TYPE_FIXED = "Dual Antenna Fixed";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::FILTER_STATE_GX5_STARTUP = "Startup";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::FILTER_STATE_GX5_INIT = "Init";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::FILTER_STATE_GX5_RUN_SOLUTION_VALID = "Solution Valid";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::FILTER_STATE_GX5_RUN_SOLUTION_ERROR = "Solution Error";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::FILTER_STATE_GQ7_INIT = "Init";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::FILTER_STATE_GQ7_VERT_GYRO = "Vertical Gyro";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::FILTER_STATE_GQ7_AHRS = "AHRS";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::FILTER_STATE_GQ7_FULL_NAV = "Full Nav";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::STATUS_FLAGS_GX5_INIT_NO_ATTITUDE = "Init No Attitude";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::STATUS_FLAGS_GX5_INIT_NO_POSITION_VELOCITY = "Init No Position / Velocity";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::STATUS_FLAGS_GX5_RUN_IMU_UNAVAILABLE = "IMU Unavailable";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::STATUS_FLAGS_GX5_RUN_GPS_UNAVAILABLE = "GPS Unavailable";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::STATUS_FLAGS_GX5_RUN_MATRIX_SINGULARITY = "Matrix Singularity";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::STATUS_FLAGS_GX5_RUN_POSITION_COVARIANCE_WARNING = "Position Covariance Warning";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::STATUS_FLAGS_GX5_RUN_VELOCITY_COVARIANCE_WARNING = "Velocity Covariance Warning";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::STATUS_FLAGS_GX5_RUN_ATTITUDE_COVARIANCE_WARNING = "Attitude Covariance Warning";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::STATUS_FLAGS_GX5_RUN_NAN_IN_SOLUTION_WARNING = "NaN in Solution";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::STATUS_FLAGS_GX5_RUN_GYRO_BIAS_EST_HIGH_WARNING = "Gyroscope Bias Estimate High";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::STATUS_FLAGS_GX5_RUN_ACCEL_BIAS_EST_HIGH_WARNING = "Accelerometer Bias Estimate High";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::STATUS_FLAGS_GX5_RUN_GYRO_SCALE_FACTOR_EST_HIGH_WARNING = "Gyroscope Scale Factor Estimate High";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::STATUS_FLAGS_GX5_RUN_ACCEL_SCALE_FACTOR_EST_HIGH_WARNING = "Accelerometer Scal Factor Estimate High";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::STATUS_FLAGS_GX5_RUN_MAG_BIAS_EST_HIGH_WARNING = "Magnetometer Bias Estimate High";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::STATUS_FLAGS_GX5_RUN_ANT_OFFSET_CORRECTION_EST_HIGH_WARNING = "Antenna Offset Correction Estimate High";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::STATUS_FLAGS_GX5_RUN_MAG_HARD_IRON_EST_HIGH_WARNING = "Magnetometer Hard Iron Estimate High";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::STATUS_FLAGS_GX5_RUN_MAG_SOFT_IRON_EST_HIGH_WARNING = "Magnetometer Soft Iron Estimate High";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::STATUS_FLAGS_GQ7_FILTER_CONDITION_STABLE = "Stable";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::STATUS_FLAGS_GQ7_FILTER_CONDITION_CONVERGING = "Converging";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::STATUS_FLAGS_GQ7_FILTER_CONDITION_UNSTABLE = "Unstable";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::STATUS_FLAGS_GQ7_ROLL_PITCH_WARNING = "Roll / Pitch Warning";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::STATUS_FLAGS_GQ7_HEADING_WARNING = "Heading Warning";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::STATUS_FLAGS_GQ7_POSITION_WARNING = "Position Warning";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::STATUS_FLAGS_GQ7_VELOCITY_WARNING = "Velocity Warning";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::STATUS_FLAGS_GQ7_IMU_BIAS_WARNING = "IMU Bias Warning";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::STATUS_FLAGS_GQ7_GNSS_CLK_WARNING = "GNSS Clock Warning";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::STATUS_FLAGS_GQ7_ANTENNA_LEVER_ARM_WARNING = "Antenna Lever Arm Warning";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::STATUS_FLAGS_GQ7_MOUNTING_TRANSFORM_WARNING = "Mounting Transform Warning";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::STATUS_FLAGS_GQ7_TIME_SYNC_WARNING = "Time Sync Warning";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::STATUS_FLAGS_GQ7_SOLUTION_ERROR = "Solution Error";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::CONTINUOUS_BIT_FLAGS_GQ7_SYSTEM_CLOCK_FAILURE = "System Clock Failure";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::CONTINUOUS_BIT_FLAGS_GQ7_POWER_FAULT = "Power Fault";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::CONTINUOUS_BIT_FLAGS_GQ7_FIRMWARE_FAULT = "Firmware Fault";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::CONTINUOUS_BIT_FLAGS_GQ7_TIMING_OVERLOAD = "Timing Overload";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::CONTINUOUS_BIT_FLAGS_GQ7_BUFFER_OVERRUN = "Buffer Overrun";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::CONTINUOUS_BIT_FLAGS_GQ7_IMU_IPC_FAULT = "IMU IPC Fault";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::CONTINUOUS_BIT_FLAGS_GQ7_FILTER_IPC_FAULT = "Filter IPC Fault";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::CONTINUOUS_BIT_FLAGS_GQ7_GNSS_IPC_FAULT = "GNSS IPC Fault";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::CONTINUOUS_BIT_FLAGS_GQ7_IMU_CLOCK_FAULT = "IMU Clock Fault";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::CONTINUOUS_BIT_FLAGS_GQ7_IMU_COMMUNICATION_FAULT = "IMU Communication Fault";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::CONTINUOUS_BIT_FLAGS_GQ7_IMU_TIMING_OVERRUN = "IMU Timing Overrun";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::CONTINUOUS_BIT_FLAGS_GQ7_IMU_CALIBRATION_ERROR_ACCEL = "IMU Calibration Error - Accel";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::CONTINUOUS_BIT_FLAGS_GQ7_IMU_CALIBRATION_ERROR_GYRO = "IMU Calibration Error - Gyro";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::CONTINUOUS_BIT_FLAGS_GQ7_IMU_CALIBRATION_ERROR_MAG = "IMU Calibration Error - Mag";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::CONTINUOUS_BIT_FLAGS_GQ7_ACCELEROMETER_GENERAL_FAULT = "Accelerometer General Fault";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::CONTINUOUS_BIT_FLAGS_GQ7_ACCELEROMETER_OVER_RANGE = "Accelerometer Over-Range";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::CONTINUOUS_BIT_FLAGS_GQ7_ACCELEROMETER_SELF_TEST_FAIL = "Accelerometer Self-test Fail";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::CONTINUOUS_BIT_FLAGS_GQ7_GYROSCOPE_GENERAL_FAULT = "Gyroscope General Fault";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::CONTINUOUS_BIT_FLAGS_GQ7_GYROSCOPE_OVER_RANGE = "Gyroscope Over-Range";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::CONTINUOUS_BIT_FLAGS_GQ7_GYROSCOPE_SELF_TEST_FAIL = "Gyroscope Self-test Fail";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::CONTINUOUS_BIT_FLAGS_GQ7_MAGNETOMETER_GENERAL_FAULT = "Magnetometer General Fault";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::CONTINUOUS_BIT_FLAGS_GQ7_MAGNETOMETER_OVER_RANGE = "Magnetometer Over-Range";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::CONTINUOUS_BIT_FLAGS_GQ7_MAGNETOMETER_SELF_TEST_FAIL = "Magnetometer Self-test Fail";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::CONTINUOUS_BIT_FLAGS_GQ7_PRESSURE_SENSOR_GENERAL_FAULT = "Pressure Sensor General Fault";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::CONTINUOUS_BIT_FLAGS_GQ7_PRESSURE_SENSOR_OVER_RANGE = "Pressure Sensor Over-Range";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::CONTINUOUS_BIT_FLAGS_GQ7_PRESSURE_SENSOR_SELF_TEST_FAIL = "Pressure Sensor Self-test Fail";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::CONTINUOUS_BIT_FLAGS_GQ7_FILTER_CLOCK_FAULT = "Filter Clock Fault";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::CONTINUOUS_BIT_FLAGS_GQ7_FILTER_HARDWARE_FAULT = "Filter Hardware Fault";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::CONTINUOUS_BIT_FLAGS_GQ7_FILTER_TIMING_OVERRUN = "Filter Timing Overrun";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::CONTINUOUS_BIT_FLAGS_GQ7_FILTER_TIMING_UNDERRUN = "Filter Timing Underrun";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::CONTINUOUS_BIT_FLAGS_GQ7_FILTER_COMMUNICATION_ERROR = "Filter Communication Error";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::CONTINUOUS_BIT_FLAGS_GQ7_GNSS_CLOCK_FAULT = "GNSS Clock Fault";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::CONTINUOUS_BIT_FLAGS_GQ7_GNSS_HARDWARE_FAULT = "GNSS Hardware Fault";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::CONTINUOUS_BIT_FLAGS_GQ7_GNSS_COMMUNICATION_ERROR = "GNSS Communication Error";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::CONTINUOUS_BIT_FLAGS_GQ7_GPS_TIME_FAULT = "GPS Time Fault";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::CONTINUOUS_BIT_FLAGS_GQ7_GNSS_TIMING_OVERRUN = "GNSS Timing Overrun";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::CONTINUOUS_BIT_FLAGS_GQ7_GNSS_RECEIVER_1_POWER_FAULT = "GNSS Receiver 1 Power Fault";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::CONTINUOUS_BIT_FLAGS_GQ7_GNSS_RECEIVER_1_FAULT = "GNSS Receiver 1 Fault";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::CONTINUOUS_BIT_FLAGS_GQ7_GNSS_ANTENNA_1_SHORTED = "GNSS Antenna 1 Shorted";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::CONTINUOUS_BIT_FLAGS_GQ7_GNSS_ANTENNA_1_OPEN = "GNSS Antenna 1 Open";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::CONTINUOUS_BIT_FLAGS_GQ7_GNSS_RECEIVER_1_SOLUTION_FAULT = "GNSS Receiver 1 Solution Fault";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::CONTINUOUS_BIT_FLAGS_GQ7_GNSS_RECEIVER_2_POWER_FAULT = "GNSS Receiver 2 Power Fault";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::CONTINUOUS_BIT_FLAGS_GQ7_GNSS_RECEIVER_2_FAULT = "GNSS Receiver 2 Fault";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::CONTINUOUS_BIT_FLAGS_GQ7_GNSS_ANTENNA_2_SHORTED = "GNSS Antenna 2 Shorted";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::CONTINUOUS_BIT_FLAGS_GQ7_GNSS_ANTENNA_2_OPEN = "GNSS Antenna 2 Open";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::CONTINUOUS_BIT_FLAGS_GQ7_GNSS_RECEIVER_2_SOLUTION_FAULT = "GNSS Receiver 2 Solution Fault";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::CONTINUOUS_BIT_FLAGS_GQ7_RTCM_COMMUNICATION_FAULT = "RTCM Communication Fault";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::CONTINUOUS_BIT_FLAGS_GQ7_RTK_DONGLE_FAULT = "RTK Dongle Fault";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::CONTINUOUS_BIT_FLAGS_CV7_SYSTEM_CLOCK_FAILURE = "System Clock Failure";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::CONTINUOUS_BIT_FLAGS_CV7_POWER_FAULT = "Power Fault";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::CONTINUOUS_BIT_FLAGS_CV7_FIRMWARE_FAULT = "Firmware Fault";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::CONTINUOUS_BIT_FLAGS_CV7_TIMING_OVERLOAD = "Timing Overload";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::CONTINUOUS_BIT_FLAGS_CV7_BUFFER_OVERRUN = "Buffer Overrun";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::CONTINUOUS_BIT_FLAGS_CV7_IMU_PROCESS_FAULT = "IMU Process Fault";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::CONTINUOUS_BIT_FLAGS_CV7_IMU_DATA_RATE_MISMATCH = "IMU Data Rate Mismatch";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::CONTINUOUS_BIT_FLAGS_CV7_IMU_OVERRUN_DROPPED_DATA = "IMU Overrun/Dropped Data";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::CONTINUOUS_BIT_FLAGS_CV7_IMU_STUCK = "IMU Stuck";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::CONTINUOUS_BIT_FLAGS_CV7_FILTER_PROCESS_FAULT = "Filter Process Fault";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::CONTINUOUS_BIT_FLAGS_CV7_FILTER_DROPPED_DATA = "Filter Dropped Data";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::CONTINUOUS_BIT_FLAGS_CV7_FILTER_RATE_MISMATCH = "Filter Rate Mismatch";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::CONTINUOUS_BIT_FLAGS_CV7_FILTER_STUCK = "Filter Stuck";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::CONTINUOUS_BIT_FLAGS_CV7_IMU_CLOCK_FAULT = "IMU Clock Fault";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::CONTINUOUS_BIT_FLAGS_CV7_IMU_COMMUNICATION_FAULT = "IMU Communication Fault";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::CONTINUOUS_BIT_FLAGS_CV7_IMU_TIMING_OVERRUN = "IMU Timing Overrun";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::CONTINUOUS_BIT_FLAGS_CV7_IMU_CALIBRATION_ERROR_ACCELEROMETER = "IMU Calibration Error - Accelerometer";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::CONTINUOUS_BIT_FLAGS_CV7_IMU_CALIBRATION_ERROR_GYROSCOPE = "IMU Calibration Error - Gyroscope";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::CONTINUOUS_BIT_FLAGS_CV7_IMU_CALIBRATION_ERROR_MAGNETOMETER = "IMU Calibration Error - Magnetometer";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::CONTINUOUS_BIT_FLAGS_CV7_ACCELEROMETER_GENERAL_FAULT = "Accelerometer General Fault";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::CONTINUOUS_BIT_FLAGS_CV7_ACCELEROMETER_OVER_RANGE = "Accelerometer Over-range";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::CONTINUOUS_BIT_FLAGS_CV7_ACCELEROMETER_SELF_TEST_FAIL = "Accelerometer Self-test Fail";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::CONTINUOUS_BIT_FLAGS_CV7_GYROSCOPE_GENERAL_FAULT = "Gyroscope General Fault";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::CONTINUOUS_BIT_FLAGS_CV7_GYROSCOPE_OVER_RANGE = "Gyroscope Over-range";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::CONTINUOUS_BIT_FLAGS_CV7_GYROSCOPE_SELF_TEST_FAIL = "Gyroscope Self-test Fail";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::CONTINUOUS_BIT_FLAGS_CV7_MAGNETOMETER_GENERAL_FAULT = "Magnetometer General Fault";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::CONTINUOUS_BIT_FLAGS_CV7_MAGNETOMETER_OVER_RANGE = "Magnetometer Over-range";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::CONTINUOUS_BIT_FLAGS_CV7_MAGNETOMETER_SELF_TEST_FAIL = "Magnetometer Self-test Fail";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::CONTINUOUS_BIT_FLAGS_CV7_PRESSURE_SENSOR_GENERAL_FAULT = "Pressure Sensor General Fault";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::CONTINUOUS_BIT_FLAGS_CV7_PRESSURE_SENSOR_OVER_RANGE = "Pressure Sensor Over-range";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::CONTINUOUS_BIT_FLAGS_CV7_PRESSURE_SENSOR_SELF_TEST_FAIL = "Pressure Sensor Self-test Fail";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::CONTINUOUS_BIT_FLAGS_CV7_FACTORY_BITS_INVALID = "Factory Bits Invalid";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::CONTINUOUS_BIT_FLAGS_CV7_FILTER_FAULT = "Filter Fault";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::CONTINUOUS_BIT_FLAGS_CV7_FILTER_TIMING_OVERRUN = "Filter Timing Overrun";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
HumanReadableStatus_<ContainerAllocator>::CONTINUOUS_BIT_FLAGS_CV7_FILTER_TIMING_UNDERRUN = "Filter Timing Underrun";

}  // namespace msg

}  // namespace microstrain_inertial_msgs

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__HUMAN_READABLE_STATUS__STRUCT_HPP_
