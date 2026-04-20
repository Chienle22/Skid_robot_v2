// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from microstrain_inertial_msgs:msg/MipGnssCorrectionsRtkCorrectionsStatusDongleStatus.idl
// generated code does not contain a copyright notice

#ifndef MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GNSS_CORRECTIONS_RTK_CORRECTIONS_STATUS_DONGLE_STATUS__STRUCT_H_
#define MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GNSS_CORRECTIONS_RTK_CORRECTIONS_STATUS_DONGLE_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MODEM_STATE_OFF'.
/**
  * Possible values for dongle_modem_state
 */
enum
{
  microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusDongleStatus__MODEM_STATE_OFF = 0
};

/// Constant 'MODEM_STATE_NO_NETWORK'.
enum
{
  microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusDongleStatus__MODEM_STATE_NO_NETWORK = 1
};

/// Constant 'MODEM_STATE_NETWORK_CONNECTED'.
enum
{
  microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusDongleStatus__MODEM_STATE_NETWORK_CONNECTED = 2
};

/// Constant 'MODEM_STATE_CONFIGURING_DATA_CONTEXT'.
enum
{
  microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusDongleStatus__MODEM_STATE_CONFIGURING_DATA_CONTEXT = 3
};

/// Constant 'MODEM_STATE_ACTIVATING_DATA_CONTEXT'.
enum
{
  microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusDongleStatus__MODEM_STATE_ACTIVATING_DATA_CONTEXT = 4
};

/// Constant 'MODEM_STATE_CONFIGURING_SOCKET'.
enum
{
  microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusDongleStatus__MODEM_STATE_CONFIGURING_SOCKET = 5
};

/// Constant 'MODEM_STATE_WAITING_ON_SERVER_HANDSHAKE'.
enum
{
  microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusDongleStatus__MODEM_STATE_WAITING_ON_SERVER_HANDSHAKE = 6
};

/// Constant 'MODEM_STATE_CONNECTED_AND_IDLE'.
enum
{
  microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusDongleStatus__MODEM_STATE_CONNECTED_AND_IDLE = 7
};

/// Constant 'MODEM_STATE_CONNECTED_AND_STREAMING'.
enum
{
  microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusDongleStatus__MODEM_STATE_CONNECTED_AND_STREAMING = 8
};

/// Constant 'CONNECTION_TYPE_NO_CONNECTION'.
/**
  * Possible values for dongle_connection_type
 */
enum
{
  microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusDongleStatus__CONNECTION_TYPE_NO_CONNECTION = 0
};

/// Constant 'CONNECTION_TYPE_CONNECTION_2G'.
enum
{
  microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusDongleStatus__CONNECTION_TYPE_CONNECTION_2G = 2
};

/// Constant 'CONNECTION_TYPE_CONNECTION_3G'.
enum
{
  microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusDongleStatus__CONNECTION_TYPE_CONNECTION_3G = 3
};

/// Constant 'CONNECTION_TYPE_CONNECTION_4G'.
enum
{
  microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusDongleStatus__CONNECTION_TYPE_CONNECTION_4G = 4
};

/// Constant 'CONNECTION_TYPE_CONNECTION_5G'.
enum
{
  microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusDongleStatus__CONNECTION_TYPE_CONNECTION_5G = 5
};

/// Struct defined in msg/MipGnssCorrectionsRtkCorrectionsStatusDongleStatus in the package microstrain_inertial_msgs.
/**
  * Message definition for the Dongle Status field of https://s3.amazonaws.com/files.microstrain.com/GQ7+User+Manual/external_content/dcp/Data/gnss_corrections/data/mip_field_gnss_rtk_corrections_status.htm?Highlight=rtk%20status
  *   Note: This message will never be published on it's own, only included in other messages.
 */
typedef struct microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusDongleStatus
{
  /// Modem State bits from the Dongle Status field. See MODEM_STATE_* enums for possible values
  uint8_t modem_state;
  /// Connection Type bits from the Dongle Status field. See CONNECTION_TYPE_* enums for possible values
  uint8_t connection_type;
  /// RSSI bits from the Dongle Status field. Units are in dBm
  int8_t rssi;
  /// Signal Quality bits from the Dongle Status field.
  /// 0-10 indication of signal quality, 0 means unavailable/invalid/not connected, 1 is poor, 10 is excellent.
  uint8_t signal_quality;
  /// Tower Change Indicator bits from the Dongle Status field.
  /// 4-bit value that increments each time a cell tower change occurs. Rolls over from 15 to 0.
  uint8_t tower_change_indicator;
  /// NMEA Timeout Flag bit from the Dongle Status field.
  /// The device has not received a valid NMEA message from the GQ7 in the past 3 seconds
  bool nmea_timeout_flag;
  /// Server Timeout Flag bit from the Dongle Status field.
  /// The device has not received any communications with the server in the past 3 seconds.
  bool server_timeout_flag;
  /// RTCM Timeout Flag bit from the Dongle Status field.
  /// The device has not received a valid RTCM message from the server in the past 3 seconds.
  bool rtcm_timeout_flag;
  /// Device Out of Range Flag bit from the Dongle Status field
  /// The device's reported position is beyond the server-side configured distance to a base station and will not receive corrections
  bool device_out_of_range_flag;
  /// Corrections Unavailable Flag bit from the Dongle Status field
  /// The server is reporting that corrections are not available given the user's account settings
  bool corrections_unavailable_flag;
} microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusDongleStatus;

// Struct for a sequence of microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusDongleStatus.
typedef struct microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusDongleStatus__Sequence
{
  microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusDongleStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} microstrain_inertial_msgs__msg__MipGnssCorrectionsRtkCorrectionsStatusDongleStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MICROSTRAIN_INERTIAL_MSGS__MSG__DETAIL__MIP_GNSS_CORRECTIONS_RTK_CORRECTIONS_STATUS_DONGLE_STATUS__STRUCT_H_
