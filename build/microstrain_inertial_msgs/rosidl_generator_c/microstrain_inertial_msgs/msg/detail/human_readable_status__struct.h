// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from microstrain_inertial_msgs:msg/HumanReadableStatus.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__HUMAN_READABLE_STATUS__STRUCT_H_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__HUMAN_READABLE_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'UNSUPPORTED'.
/**
  * Possible value for any field if a devicedoes not support it
 */
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__UNSUPPORTED = "Unsupported";

/// Constant 'GNSS_STATE_NO_FIX'.
/**
  * Possible values for gnss_state
 */
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__GNSS_STATE_NO_FIX = "No Fix";

/// Constant 'GNSS_STATE_3D_FIX'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__GNSS_STATE_3D_FIX = "3D Fix";

/// Constant 'GNSS_STATE_SBAS'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__GNSS_STATE_SBAS = "SBAS";

/// Constant 'GNSS_STATE_RTK_FLOAT'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__GNSS_STATE_RTK_FLOAT = "RTK Float";

/// Constant 'GNSS_STATE_RTK_FIXED'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__GNSS_STATE_RTK_FIXED = "RTK Fixed";

/// Constant 'DUAL_ANTENNA_FIX_TYPE_NONE'.
/**
  * Possible values for dual_antenna_fix_type
 */
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__DUAL_ANTENNA_FIX_TYPE_NONE = "None";

/// Constant 'DUAL_ANTENNA_FIX_TYPE_FLOAT'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__DUAL_ANTENNA_FIX_TYPE_FLOAT = "Dual Antenna Float";

/// Constant 'DUAL_ANTENNA_FIX_TYPE_FIXED'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__DUAL_ANTENNA_FIX_TYPE_FIXED = "Dual Antenna Fixed";

/// Constant 'FILTER_STATE_GX5_STARTUP'.
/**
  * Possible values for filter_state when the connected device is a philo device (GX5, CX5, CV5, etc)
 */
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__FILTER_STATE_GX5_STARTUP = "Startup";

/// Constant 'FILTER_STATE_GX5_INIT'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__FILTER_STATE_GX5_INIT = "Init";

/// Constant 'FILTER_STATE_GX5_RUN_SOLUTION_VALID'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__FILTER_STATE_GX5_RUN_SOLUTION_VALID = "Solution Valid";

/// Constant 'FILTER_STATE_GX5_RUN_SOLUTION_ERROR'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__FILTER_STATE_GX5_RUN_SOLUTION_ERROR = "Solution Error";

/// Constant 'FILTER_STATE_GQ7_INIT'.
/**
  * Possible values for filter_state when the connected device is a prospect device (GQ7, CV7, etc)
 */
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__FILTER_STATE_GQ7_INIT = "Init";

/// Constant 'FILTER_STATE_GQ7_VERT_GYRO'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__FILTER_STATE_GQ7_VERT_GYRO = "Vertical Gyro";

/// Constant 'FILTER_STATE_GQ7_AHRS'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__FILTER_STATE_GQ7_AHRS = "AHRS";

/// Constant 'FILTER_STATE_GQ7_FULL_NAV'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__FILTER_STATE_GQ7_FULL_NAV = "Full Nav";

/// Constant 'STATUS_FLAGS_GX5_INIT_NO_ATTITUDE'.
/**
  * Possible values to be stored in status_flags when the connected device is a philo device (GX5, CX5, CV5, etc)
 */
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__STATUS_FLAGS_GX5_INIT_NO_ATTITUDE = "Init No Attitude";

/// Constant 'STATUS_FLAGS_GX5_INIT_NO_POSITION_VELOCITY'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__STATUS_FLAGS_GX5_INIT_NO_POSITION_VELOCITY = "Init No Position / Velocity";

/// Constant 'STATUS_FLAGS_GX5_RUN_IMU_UNAVAILABLE'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__STATUS_FLAGS_GX5_RUN_IMU_UNAVAILABLE = "IMU Unavailable";

/// Constant 'STATUS_FLAGS_GX5_RUN_GPS_UNAVAILABLE'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__STATUS_FLAGS_GX5_RUN_GPS_UNAVAILABLE = "GPS Unavailable";

/// Constant 'STATUS_FLAGS_GX5_RUN_MATRIX_SINGULARITY'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__STATUS_FLAGS_GX5_RUN_MATRIX_SINGULARITY = "Matrix Singularity";

/// Constant 'STATUS_FLAGS_GX5_RUN_POSITION_COVARIANCE_WARNING'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__STATUS_FLAGS_GX5_RUN_POSITION_COVARIANCE_WARNING = "Position Covariance Warning";

/// Constant 'STATUS_FLAGS_GX5_RUN_VELOCITY_COVARIANCE_WARNING'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__STATUS_FLAGS_GX5_RUN_VELOCITY_COVARIANCE_WARNING = "Velocity Covariance Warning";

/// Constant 'STATUS_FLAGS_GX5_RUN_ATTITUDE_COVARIANCE_WARNING'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__STATUS_FLAGS_GX5_RUN_ATTITUDE_COVARIANCE_WARNING = "Attitude Covariance Warning";

/// Constant 'STATUS_FLAGS_GX5_RUN_NAN_IN_SOLUTION_WARNING'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__STATUS_FLAGS_GX5_RUN_NAN_IN_SOLUTION_WARNING = "NaN in Solution";

/// Constant 'STATUS_FLAGS_GX5_RUN_GYRO_BIAS_EST_HIGH_WARNING'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__STATUS_FLAGS_GX5_RUN_GYRO_BIAS_EST_HIGH_WARNING = "Gyroscope Bias Estimate High";

/// Constant 'STATUS_FLAGS_GX5_RUN_ACCEL_BIAS_EST_HIGH_WARNING'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__STATUS_FLAGS_GX5_RUN_ACCEL_BIAS_EST_HIGH_WARNING = "Accelerometer Bias Estimate High";

/// Constant 'STATUS_FLAGS_GX5_RUN_GYRO_SCALE_FACTOR_EST_HIGH_WARNING'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__STATUS_FLAGS_GX5_RUN_GYRO_SCALE_FACTOR_EST_HIGH_WARNING = "Gyroscope Scale Factor Estimate High";

/// Constant 'STATUS_FLAGS_GX5_RUN_ACCEL_SCALE_FACTOR_EST_HIGH_WARNING'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__STATUS_FLAGS_GX5_RUN_ACCEL_SCALE_FACTOR_EST_HIGH_WARNING = "Accelerometer Scal Factor Estimate High";

/// Constant 'STATUS_FLAGS_GX5_RUN_MAG_BIAS_EST_HIGH_WARNING'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__STATUS_FLAGS_GX5_RUN_MAG_BIAS_EST_HIGH_WARNING = "Magnetometer Bias Estimate High";

/// Constant 'STATUS_FLAGS_GX5_RUN_ANT_OFFSET_CORRECTION_EST_HIGH_WARNING'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__STATUS_FLAGS_GX5_RUN_ANT_OFFSET_CORRECTION_EST_HIGH_WARNING = "Antenna Offset Correction Estimate High";

/// Constant 'STATUS_FLAGS_GX5_RUN_MAG_HARD_IRON_EST_HIGH_WARNING'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__STATUS_FLAGS_GX5_RUN_MAG_HARD_IRON_EST_HIGH_WARNING = "Magnetometer Hard Iron Estimate High";

/// Constant 'STATUS_FLAGS_GX5_RUN_MAG_SOFT_IRON_EST_HIGH_WARNING'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__STATUS_FLAGS_GX5_RUN_MAG_SOFT_IRON_EST_HIGH_WARNING = "Magnetometer Soft Iron Estimate High";

/// Constant 'STATUS_FLAGS_GQ7_FILTER_CONDITION_STABLE'.
/**
  * Possible values to be stored in status_flags when the connected device is a prospect device (GQ7, CV7, etc)
 */
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__STATUS_FLAGS_GQ7_FILTER_CONDITION_STABLE = "Stable";

/// Constant 'STATUS_FLAGS_GQ7_FILTER_CONDITION_CONVERGING'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__STATUS_FLAGS_GQ7_FILTER_CONDITION_CONVERGING = "Converging";

/// Constant 'STATUS_FLAGS_GQ7_FILTER_CONDITION_UNSTABLE'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__STATUS_FLAGS_GQ7_FILTER_CONDITION_UNSTABLE = "Unstable";

/// Constant 'STATUS_FLAGS_GQ7_ROLL_PITCH_WARNING'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__STATUS_FLAGS_GQ7_ROLL_PITCH_WARNING = "Roll / Pitch Warning";

/// Constant 'STATUS_FLAGS_GQ7_HEADING_WARNING'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__STATUS_FLAGS_GQ7_HEADING_WARNING = "Heading Warning";

/// Constant 'STATUS_FLAGS_GQ7_POSITION_WARNING'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__STATUS_FLAGS_GQ7_POSITION_WARNING = "Position Warning";

/// Constant 'STATUS_FLAGS_GQ7_VELOCITY_WARNING'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__STATUS_FLAGS_GQ7_VELOCITY_WARNING = "Velocity Warning";

/// Constant 'STATUS_FLAGS_GQ7_IMU_BIAS_WARNING'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__STATUS_FLAGS_GQ7_IMU_BIAS_WARNING = "IMU Bias Warning";

/// Constant 'STATUS_FLAGS_GQ7_GNSS_CLK_WARNING'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__STATUS_FLAGS_GQ7_GNSS_CLK_WARNING = "GNSS Clock Warning";

/// Constant 'STATUS_FLAGS_GQ7_ANTENNA_LEVER_ARM_WARNING'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__STATUS_FLAGS_GQ7_ANTENNA_LEVER_ARM_WARNING = "Antenna Lever Arm Warning";

/// Constant 'STATUS_FLAGS_GQ7_MOUNTING_TRANSFORM_WARNING'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__STATUS_FLAGS_GQ7_MOUNTING_TRANSFORM_WARNING = "Mounting Transform Warning";

/// Constant 'STATUS_FLAGS_GQ7_TIME_SYNC_WARNING'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__STATUS_FLAGS_GQ7_TIME_SYNC_WARNING = "Time Sync Warning";

/// Constant 'STATUS_FLAGS_GQ7_SOLUTION_ERROR'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__STATUS_FLAGS_GQ7_SOLUTION_ERROR = "Solution Error";

/// Constant 'CONTINUOUS_BIT_FLAGS_GQ7_SYSTEM_CLOCK_FAILURE'.
/**
  * Possible values to be stored in continuous_bit_flags when the connected device is a GQ7
  * See https://files.microstrain.com/GQ7+User+Manual/user_manual_content/additional_features/Built-in%20Test.htm for more information
 */
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__CONTINUOUS_BIT_FLAGS_GQ7_SYSTEM_CLOCK_FAILURE = "System Clock Failure";

/// Constant 'CONTINUOUS_BIT_FLAGS_GQ7_POWER_FAULT'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__CONTINUOUS_BIT_FLAGS_GQ7_POWER_FAULT = "Power Fault";

/// Constant 'CONTINUOUS_BIT_FLAGS_GQ7_FIRMWARE_FAULT'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__CONTINUOUS_BIT_FLAGS_GQ7_FIRMWARE_FAULT = "Firmware Fault";

/// Constant 'CONTINUOUS_BIT_FLAGS_GQ7_TIMING_OVERLOAD'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__CONTINUOUS_BIT_FLAGS_GQ7_TIMING_OVERLOAD = "Timing Overload";

/// Constant 'CONTINUOUS_BIT_FLAGS_GQ7_BUFFER_OVERRUN'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__CONTINUOUS_BIT_FLAGS_GQ7_BUFFER_OVERRUN = "Buffer Overrun";

/// Constant 'CONTINUOUS_BIT_FLAGS_GQ7_IMU_IPC_FAULT'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__CONTINUOUS_BIT_FLAGS_GQ7_IMU_IPC_FAULT = "IMU IPC Fault";

/// Constant 'CONTINUOUS_BIT_FLAGS_GQ7_FILTER_IPC_FAULT'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__CONTINUOUS_BIT_FLAGS_GQ7_FILTER_IPC_FAULT = "Filter IPC Fault";

/// Constant 'CONTINUOUS_BIT_FLAGS_GQ7_GNSS_IPC_FAULT'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__CONTINUOUS_BIT_FLAGS_GQ7_GNSS_IPC_FAULT = "GNSS IPC Fault";

/// Constant 'CONTINUOUS_BIT_FLAGS_GQ7_IMU_CLOCK_FAULT'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__CONTINUOUS_BIT_FLAGS_GQ7_IMU_CLOCK_FAULT = "IMU Clock Fault";

/// Constant 'CONTINUOUS_BIT_FLAGS_GQ7_IMU_COMMUNICATION_FAULT'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__CONTINUOUS_BIT_FLAGS_GQ7_IMU_COMMUNICATION_FAULT = "IMU Communication Fault";

/// Constant 'CONTINUOUS_BIT_FLAGS_GQ7_IMU_TIMING_OVERRUN'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__CONTINUOUS_BIT_FLAGS_GQ7_IMU_TIMING_OVERRUN = "IMU Timing Overrun";

/// Constant 'CONTINUOUS_BIT_FLAGS_GQ7_IMU_CALIBRATION_ERROR_ACCEL'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__CONTINUOUS_BIT_FLAGS_GQ7_IMU_CALIBRATION_ERROR_ACCEL = "IMU Calibration Error - Accel";

/// Constant 'CONTINUOUS_BIT_FLAGS_GQ7_IMU_CALIBRATION_ERROR_GYRO'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__CONTINUOUS_BIT_FLAGS_GQ7_IMU_CALIBRATION_ERROR_GYRO = "IMU Calibration Error - Gyro";

/// Constant 'CONTINUOUS_BIT_FLAGS_GQ7_IMU_CALIBRATION_ERROR_MAG'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__CONTINUOUS_BIT_FLAGS_GQ7_IMU_CALIBRATION_ERROR_MAG = "IMU Calibration Error - Mag";

/// Constant 'CONTINUOUS_BIT_FLAGS_GQ7_ACCELEROMETER_GENERAL_FAULT'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__CONTINUOUS_BIT_FLAGS_GQ7_ACCELEROMETER_GENERAL_FAULT = "Accelerometer General Fault";

/// Constant 'CONTINUOUS_BIT_FLAGS_GQ7_ACCELEROMETER_OVER_RANGE'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__CONTINUOUS_BIT_FLAGS_GQ7_ACCELEROMETER_OVER_RANGE = "Accelerometer Over-Range";

/// Constant 'CONTINUOUS_BIT_FLAGS_GQ7_ACCELEROMETER_SELF_TEST_FAIL'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__CONTINUOUS_BIT_FLAGS_GQ7_ACCELEROMETER_SELF_TEST_FAIL = "Accelerometer Self-test Fail";

/// Constant 'CONTINUOUS_BIT_FLAGS_GQ7_GYROSCOPE_GENERAL_FAULT'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__CONTINUOUS_BIT_FLAGS_GQ7_GYROSCOPE_GENERAL_FAULT = "Gyroscope General Fault";

/// Constant 'CONTINUOUS_BIT_FLAGS_GQ7_GYROSCOPE_OVER_RANGE'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__CONTINUOUS_BIT_FLAGS_GQ7_GYROSCOPE_OVER_RANGE = "Gyroscope Over-Range";

/// Constant 'CONTINUOUS_BIT_FLAGS_GQ7_GYROSCOPE_SELF_TEST_FAIL'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__CONTINUOUS_BIT_FLAGS_GQ7_GYROSCOPE_SELF_TEST_FAIL = "Gyroscope Self-test Fail";

/// Constant 'CONTINUOUS_BIT_FLAGS_GQ7_MAGNETOMETER_GENERAL_FAULT'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__CONTINUOUS_BIT_FLAGS_GQ7_MAGNETOMETER_GENERAL_FAULT = "Magnetometer General Fault";

/// Constant 'CONTINUOUS_BIT_FLAGS_GQ7_MAGNETOMETER_OVER_RANGE'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__CONTINUOUS_BIT_FLAGS_GQ7_MAGNETOMETER_OVER_RANGE = "Magnetometer Over-Range";

/// Constant 'CONTINUOUS_BIT_FLAGS_GQ7_MAGNETOMETER_SELF_TEST_FAIL'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__CONTINUOUS_BIT_FLAGS_GQ7_MAGNETOMETER_SELF_TEST_FAIL = "Magnetometer Self-test Fail";

/// Constant 'CONTINUOUS_BIT_FLAGS_GQ7_PRESSURE_SENSOR_GENERAL_FAULT'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__CONTINUOUS_BIT_FLAGS_GQ7_PRESSURE_SENSOR_GENERAL_FAULT = "Pressure Sensor General Fault";

/// Constant 'CONTINUOUS_BIT_FLAGS_GQ7_PRESSURE_SENSOR_OVER_RANGE'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__CONTINUOUS_BIT_FLAGS_GQ7_PRESSURE_SENSOR_OVER_RANGE = "Pressure Sensor Over-Range";

/// Constant 'CONTINUOUS_BIT_FLAGS_GQ7_PRESSURE_SENSOR_SELF_TEST_FAIL'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__CONTINUOUS_BIT_FLAGS_GQ7_PRESSURE_SENSOR_SELF_TEST_FAIL = "Pressure Sensor Self-test Fail";

/// Constant 'CONTINUOUS_BIT_FLAGS_GQ7_FILTER_CLOCK_FAULT'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__CONTINUOUS_BIT_FLAGS_GQ7_FILTER_CLOCK_FAULT = "Filter Clock Fault";

/// Constant 'CONTINUOUS_BIT_FLAGS_GQ7_FILTER_HARDWARE_FAULT'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__CONTINUOUS_BIT_FLAGS_GQ7_FILTER_HARDWARE_FAULT = "Filter Hardware Fault";

/// Constant 'CONTINUOUS_BIT_FLAGS_GQ7_FILTER_TIMING_OVERRUN'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__CONTINUOUS_BIT_FLAGS_GQ7_FILTER_TIMING_OVERRUN = "Filter Timing Overrun";

/// Constant 'CONTINUOUS_BIT_FLAGS_GQ7_FILTER_TIMING_UNDERRUN'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__CONTINUOUS_BIT_FLAGS_GQ7_FILTER_TIMING_UNDERRUN = "Filter Timing Underrun";

/// Constant 'CONTINUOUS_BIT_FLAGS_GQ7_FILTER_COMMUNICATION_ERROR'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__CONTINUOUS_BIT_FLAGS_GQ7_FILTER_COMMUNICATION_ERROR = "Filter Communication Error";

/// Constant 'CONTINUOUS_BIT_FLAGS_GQ7_GNSS_CLOCK_FAULT'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__CONTINUOUS_BIT_FLAGS_GQ7_GNSS_CLOCK_FAULT = "GNSS Clock Fault";

/// Constant 'CONTINUOUS_BIT_FLAGS_GQ7_GNSS_HARDWARE_FAULT'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__CONTINUOUS_BIT_FLAGS_GQ7_GNSS_HARDWARE_FAULT = "GNSS Hardware Fault";

/// Constant 'CONTINUOUS_BIT_FLAGS_GQ7_GNSS_COMMUNICATION_ERROR'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__CONTINUOUS_BIT_FLAGS_GQ7_GNSS_COMMUNICATION_ERROR = "GNSS Communication Error";

/// Constant 'CONTINUOUS_BIT_FLAGS_GQ7_GPS_TIME_FAULT'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__CONTINUOUS_BIT_FLAGS_GQ7_GPS_TIME_FAULT = "GPS Time Fault";

/// Constant 'CONTINUOUS_BIT_FLAGS_GQ7_GNSS_TIMING_OVERRUN'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__CONTINUOUS_BIT_FLAGS_GQ7_GNSS_TIMING_OVERRUN = "GNSS Timing Overrun";

/// Constant 'CONTINUOUS_BIT_FLAGS_GQ7_GNSS_RECEIVER_1_POWER_FAULT'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__CONTINUOUS_BIT_FLAGS_GQ7_GNSS_RECEIVER_1_POWER_FAULT = "GNSS Receiver 1 Power Fault";

/// Constant 'CONTINUOUS_BIT_FLAGS_GQ7_GNSS_RECEIVER_1_FAULT'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__CONTINUOUS_BIT_FLAGS_GQ7_GNSS_RECEIVER_1_FAULT = "GNSS Receiver 1 Fault";

/// Constant 'CONTINUOUS_BIT_FLAGS_GQ7_GNSS_ANTENNA_1_SHORTED'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__CONTINUOUS_BIT_FLAGS_GQ7_GNSS_ANTENNA_1_SHORTED = "GNSS Antenna 1 Shorted";

/// Constant 'CONTINUOUS_BIT_FLAGS_GQ7_GNSS_ANTENNA_1_OPEN'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__CONTINUOUS_BIT_FLAGS_GQ7_GNSS_ANTENNA_1_OPEN = "GNSS Antenna 1 Open";

/// Constant 'CONTINUOUS_BIT_FLAGS_GQ7_GNSS_RECEIVER_1_SOLUTION_FAULT'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__CONTINUOUS_BIT_FLAGS_GQ7_GNSS_RECEIVER_1_SOLUTION_FAULT = "GNSS Receiver 1 Solution Fault";

/// Constant 'CONTINUOUS_BIT_FLAGS_GQ7_GNSS_RECEIVER_2_POWER_FAULT'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__CONTINUOUS_BIT_FLAGS_GQ7_GNSS_RECEIVER_2_POWER_FAULT = "GNSS Receiver 2 Power Fault";

/// Constant 'CONTINUOUS_BIT_FLAGS_GQ7_GNSS_RECEIVER_2_FAULT'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__CONTINUOUS_BIT_FLAGS_GQ7_GNSS_RECEIVER_2_FAULT = "GNSS Receiver 2 Fault";

/// Constant 'CONTINUOUS_BIT_FLAGS_GQ7_GNSS_ANTENNA_2_SHORTED'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__CONTINUOUS_BIT_FLAGS_GQ7_GNSS_ANTENNA_2_SHORTED = "GNSS Antenna 2 Shorted";

/// Constant 'CONTINUOUS_BIT_FLAGS_GQ7_GNSS_ANTENNA_2_OPEN'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__CONTINUOUS_BIT_FLAGS_GQ7_GNSS_ANTENNA_2_OPEN = "GNSS Antenna 2 Open";

/// Constant 'CONTINUOUS_BIT_FLAGS_GQ7_GNSS_RECEIVER_2_SOLUTION_FAULT'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__CONTINUOUS_BIT_FLAGS_GQ7_GNSS_RECEIVER_2_SOLUTION_FAULT = "GNSS Receiver 2 Solution Fault";

/// Constant 'CONTINUOUS_BIT_FLAGS_GQ7_RTCM_COMMUNICATION_FAULT'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__CONTINUOUS_BIT_FLAGS_GQ7_RTCM_COMMUNICATION_FAULT = "RTCM Communication Fault";

/// Constant 'CONTINUOUS_BIT_FLAGS_GQ7_RTK_DONGLE_FAULT'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__CONTINUOUS_BIT_FLAGS_GQ7_RTK_DONGLE_FAULT = "RTK Dongle Fault";

/// Constant 'CONTINUOUS_BIT_FLAGS_CV7_SYSTEM_CLOCK_FAILURE'.
/**
  * Possible values to be stored in continuous_bit_flags when the device is a CV7
  * See https://files.microstrain.com/CV7+Online/user_manual_content/additional_features/Built-in%20Test.htm?Highlight=built%20in%20test for more information
 */
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__CONTINUOUS_BIT_FLAGS_CV7_SYSTEM_CLOCK_FAILURE = "System Clock Failure";

/// Constant 'CONTINUOUS_BIT_FLAGS_CV7_POWER_FAULT'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__CONTINUOUS_BIT_FLAGS_CV7_POWER_FAULT = "Power Fault";

/// Constant 'CONTINUOUS_BIT_FLAGS_CV7_FIRMWARE_FAULT'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__CONTINUOUS_BIT_FLAGS_CV7_FIRMWARE_FAULT = "Firmware Fault";

/// Constant 'CONTINUOUS_BIT_FLAGS_CV7_TIMING_OVERLOAD'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__CONTINUOUS_BIT_FLAGS_CV7_TIMING_OVERLOAD = "Timing Overload";

/// Constant 'CONTINUOUS_BIT_FLAGS_CV7_BUFFER_OVERRUN'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__CONTINUOUS_BIT_FLAGS_CV7_BUFFER_OVERRUN = "Buffer Overrun";

/// Constant 'CONTINUOUS_BIT_FLAGS_CV7_IMU_PROCESS_FAULT'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__CONTINUOUS_BIT_FLAGS_CV7_IMU_PROCESS_FAULT = "IMU Process Fault";

/// Constant 'CONTINUOUS_BIT_FLAGS_CV7_IMU_DATA_RATE_MISMATCH'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__CONTINUOUS_BIT_FLAGS_CV7_IMU_DATA_RATE_MISMATCH = "IMU Data Rate Mismatch";

/// Constant 'CONTINUOUS_BIT_FLAGS_CV7_IMU_OVERRUN_DROPPED_DATA'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__CONTINUOUS_BIT_FLAGS_CV7_IMU_OVERRUN_DROPPED_DATA = "IMU Overrun/Dropped Data";

/// Constant 'CONTINUOUS_BIT_FLAGS_CV7_IMU_STUCK'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__CONTINUOUS_BIT_FLAGS_CV7_IMU_STUCK = "IMU Stuck";

/// Constant 'CONTINUOUS_BIT_FLAGS_CV7_FILTER_PROCESS_FAULT'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__CONTINUOUS_BIT_FLAGS_CV7_FILTER_PROCESS_FAULT = "Filter Process Fault";

/// Constant 'CONTINUOUS_BIT_FLAGS_CV7_FILTER_DROPPED_DATA'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__CONTINUOUS_BIT_FLAGS_CV7_FILTER_DROPPED_DATA = "Filter Dropped Data";

/// Constant 'CONTINUOUS_BIT_FLAGS_CV7_FILTER_RATE_MISMATCH'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__CONTINUOUS_BIT_FLAGS_CV7_FILTER_RATE_MISMATCH = "Filter Rate Mismatch";

/// Constant 'CONTINUOUS_BIT_FLAGS_CV7_FILTER_STUCK'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__CONTINUOUS_BIT_FLAGS_CV7_FILTER_STUCK = "Filter Stuck";

/// Constant 'CONTINUOUS_BIT_FLAGS_CV7_IMU_CLOCK_FAULT'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__CONTINUOUS_BIT_FLAGS_CV7_IMU_CLOCK_FAULT = "IMU Clock Fault";

/// Constant 'CONTINUOUS_BIT_FLAGS_CV7_IMU_COMMUNICATION_FAULT'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__CONTINUOUS_BIT_FLAGS_CV7_IMU_COMMUNICATION_FAULT = "IMU Communication Fault";

/// Constant 'CONTINUOUS_BIT_FLAGS_CV7_IMU_TIMING_OVERRUN'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__CONTINUOUS_BIT_FLAGS_CV7_IMU_TIMING_OVERRUN = "IMU Timing Overrun";

/// Constant 'CONTINUOUS_BIT_FLAGS_CV7_IMU_CALIBRATION_ERROR_ACCELEROMETER'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__CONTINUOUS_BIT_FLAGS_CV7_IMU_CALIBRATION_ERROR_ACCELEROMETER = "IMU Calibration Error - Accelerometer";

/// Constant 'CONTINUOUS_BIT_FLAGS_CV7_IMU_CALIBRATION_ERROR_GYROSCOPE'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__CONTINUOUS_BIT_FLAGS_CV7_IMU_CALIBRATION_ERROR_GYROSCOPE = "IMU Calibration Error - Gyroscope";

/// Constant 'CONTINUOUS_BIT_FLAGS_CV7_IMU_CALIBRATION_ERROR_MAGNETOMETER'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__CONTINUOUS_BIT_FLAGS_CV7_IMU_CALIBRATION_ERROR_MAGNETOMETER = "IMU Calibration Error - Magnetometer";

/// Constant 'CONTINUOUS_BIT_FLAGS_CV7_ACCELEROMETER_GENERAL_FAULT'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__CONTINUOUS_BIT_FLAGS_CV7_ACCELEROMETER_GENERAL_FAULT = "Accelerometer General Fault";

/// Constant 'CONTINUOUS_BIT_FLAGS_CV7_ACCELEROMETER_OVER_RANGE'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__CONTINUOUS_BIT_FLAGS_CV7_ACCELEROMETER_OVER_RANGE = "Accelerometer Over-range";

/// Constant 'CONTINUOUS_BIT_FLAGS_CV7_ACCELEROMETER_SELF_TEST_FAIL'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__CONTINUOUS_BIT_FLAGS_CV7_ACCELEROMETER_SELF_TEST_FAIL = "Accelerometer Self-test Fail";

/// Constant 'CONTINUOUS_BIT_FLAGS_CV7_GYROSCOPE_GENERAL_FAULT'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__CONTINUOUS_BIT_FLAGS_CV7_GYROSCOPE_GENERAL_FAULT = "Gyroscope General Fault";

/// Constant 'CONTINUOUS_BIT_FLAGS_CV7_GYROSCOPE_OVER_RANGE'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__CONTINUOUS_BIT_FLAGS_CV7_GYROSCOPE_OVER_RANGE = "Gyroscope Over-range";

/// Constant 'CONTINUOUS_BIT_FLAGS_CV7_GYROSCOPE_SELF_TEST_FAIL'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__CONTINUOUS_BIT_FLAGS_CV7_GYROSCOPE_SELF_TEST_FAIL = "Gyroscope Self-test Fail";

/// Constant 'CONTINUOUS_BIT_FLAGS_CV7_MAGNETOMETER_GENERAL_FAULT'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__CONTINUOUS_BIT_FLAGS_CV7_MAGNETOMETER_GENERAL_FAULT = "Magnetometer General Fault";

/// Constant 'CONTINUOUS_BIT_FLAGS_CV7_MAGNETOMETER_OVER_RANGE'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__CONTINUOUS_BIT_FLAGS_CV7_MAGNETOMETER_OVER_RANGE = "Magnetometer Over-range";

/// Constant 'CONTINUOUS_BIT_FLAGS_CV7_MAGNETOMETER_SELF_TEST_FAIL'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__CONTINUOUS_BIT_FLAGS_CV7_MAGNETOMETER_SELF_TEST_FAIL = "Magnetometer Self-test Fail";

/// Constant 'CONTINUOUS_BIT_FLAGS_CV7_PRESSURE_SENSOR_GENERAL_FAULT'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__CONTINUOUS_BIT_FLAGS_CV7_PRESSURE_SENSOR_GENERAL_FAULT = "Pressure Sensor General Fault";

/// Constant 'CONTINUOUS_BIT_FLAGS_CV7_PRESSURE_SENSOR_OVER_RANGE'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__CONTINUOUS_BIT_FLAGS_CV7_PRESSURE_SENSOR_OVER_RANGE = "Pressure Sensor Over-range";

/// Constant 'CONTINUOUS_BIT_FLAGS_CV7_PRESSURE_SENSOR_SELF_TEST_FAIL'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__CONTINUOUS_BIT_FLAGS_CV7_PRESSURE_SENSOR_SELF_TEST_FAIL = "Pressure Sensor Self-test Fail";

/// Constant 'CONTINUOUS_BIT_FLAGS_CV7_FACTORY_BITS_INVALID'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__CONTINUOUS_BIT_FLAGS_CV7_FACTORY_BITS_INVALID = "Factory Bits Invalid";

/// Constant 'CONTINUOUS_BIT_FLAGS_CV7_FILTER_FAULT'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__CONTINUOUS_BIT_FLAGS_CV7_FILTER_FAULT = "Filter Fault";

/// Constant 'CONTINUOUS_BIT_FLAGS_CV7_FILTER_TIMING_OVERRUN'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__CONTINUOUS_BIT_FLAGS_CV7_FILTER_TIMING_OVERRUN = "Filter Timing Overrun";

/// Constant 'CONTINUOUS_BIT_FLAGS_CV7_FILTER_TIMING_UNDERRUN'.
static const char * const microstrain_inertial_msgs__msg__HumanReadableStatus__CONTINUOUS_BIT_FLAGS_CV7_FILTER_TIMING_UNDERRUN = "Filter Timing Underrun";

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'device_info'
#include "microstrain_inertial_msgs/msg/detail/mip_base_device_info__struct.h"
// Member 'gnss_state'
// Member 'dual_antenna_fix_type'
// Member 'filter_state'
// Member 'status_flags'
// Member 'continuous_bit_flags'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/HumanReadableStatus in the package microstrain_inertial_msgs.
/**
  * Convenience message to contain some useful device information
  *
  * This is a combination of several different messages to allow for an easy view of the device status.
  * For more detailed information on the device status, see the messages mentioned in the field definitions below.
  *
  * !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
  * NOTE: This is meant as a useful tool for checking general status of the device by a human.
  *       This interface may change without a major version upgrade.
  *       It is STRONGLY encouraged to not use this to actually control real logic.
  *       For that, we would recommend looking at the other messages mentioned in this one
  *       as well as the uncertainty for measurements
  * !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
 */
typedef struct microstrain_inertial_msgs__msg__HumanReadableStatus
{
  /// Header containing the time at which this message was populated
  ///   header.frame_id will contain the frame ID of the IMU
  std_msgs__msg__Header header;
  /// Device information. This information will be read when the node first activates.
  /// To force an update of this information (shouldn't change during runtime), call the mip/base/get_device_information service
  microstrain_inertial_msgs__msg__MipBaseDeviceInfo device_info;
  /// GNSS state. See GNSS_STATE_* for possible values
  /// This value is computed from many different fields from microstrain_inertial_msgs/MipGnssFixInfo.msg and microstrain_inertial_msgs/MipFilterGnssPositionAidingStatus.msg
  rosidl_runtime_c__String gnss_state;
  /// Dual antenna fix type. See DUAL_ANTENNA_FIX_TYPE_* enums for possble values
  /// This is identical to fix_type in microstrain_inertial_msgs/MipFilterGnssDualAntennaStatus.msg
  rosidl_runtime_c__String dual_antenna_fix_type;
  /// Device-specific filter state. See filter_state_* enums for possible values
  /// This is identical to filter_state in microstrain_inertial_msgs/MipFilterStatus.msg represented as a string
  rosidl_runtime_c__String filter_state;
  /// String version of the status_flags field of the MipFilterStatus message. Only active statuses will be in this list
  /// This is a list of all of the status_flags_* that are true in microstrain_inertial_msgs/MipFilterStatus.msg filtered to only include relevant flags for this type of device
  /// See STATIS_FLAG_* for possible values that could be in this array
  rosidl_runtime_c__String__Sequence status_flags;
  /// String version of the possible continuous bit fields possibly provided by the device.
  /// Generally, you want to see nothing populated in this message, but when you do see something, it can be used to diagnose problems with the device.
  /// This is a parsed out version of microstrain_inertial_msgs/MipSystemBuiltInTest.msg parsed to be accurate for each device
  rosidl_runtime_c__String__Sequence continuous_bit_flags;
} microstrain_inertial_msgs__msg__HumanReadableStatus;

// Struct for a sequence of microstrain_inertial_msgs__msg__HumanReadableStatus.
typedef struct microstrain_inertial_msgs__msg__HumanReadableStatus__Sequence
{
  microstrain_inertial_msgs__msg__HumanReadableStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} microstrain_inertial_msgs__msg__HumanReadableStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__HUMAN_READABLE_STATUS__STRUCT_H_
