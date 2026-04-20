# generated from rosidl_generator_py/resource/_idl.py.em
# with input from microstrain_inertial_msgs:msg/MipGnssCorrectionsRtkCorrectionsStatusDongleStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MipGnssCorrectionsRtkCorrectionsStatusDongleStatus(type):
    """Metaclass of message 'MipGnssCorrectionsRtkCorrectionsStatusDongleStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'MODEM_STATE_OFF': 0,
        'MODEM_STATE_NO_NETWORK': 1,
        'MODEM_STATE_NETWORK_CONNECTED': 2,
        'MODEM_STATE_CONFIGURING_DATA_CONTEXT': 3,
        'MODEM_STATE_ACTIVATING_DATA_CONTEXT': 4,
        'MODEM_STATE_CONFIGURING_SOCKET': 5,
        'MODEM_STATE_WAITING_ON_SERVER_HANDSHAKE': 6,
        'MODEM_STATE_CONNECTED_AND_IDLE': 7,
        'MODEM_STATE_CONNECTED_AND_STREAMING': 8,
        'CONNECTION_TYPE_NO_CONNECTION': 0,
        'CONNECTION_TYPE_CONNECTION_2G': 2,
        'CONNECTION_TYPE_CONNECTION_3G': 3,
        'CONNECTION_TYPE_CONNECTION_4G': 4,
        'CONNECTION_TYPE_CONNECTION_5G': 5,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('microstrain_inertial_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'microstrain_inertial_msgs.msg.MipGnssCorrectionsRtkCorrectionsStatusDongleStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__mip_gnss_corrections_rtk_corrections_status_dongle_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__mip_gnss_corrections_rtk_corrections_status_dongle_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__mip_gnss_corrections_rtk_corrections_status_dongle_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__mip_gnss_corrections_rtk_corrections_status_dongle_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__mip_gnss_corrections_rtk_corrections_status_dongle_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'MODEM_STATE_OFF': cls.__constants['MODEM_STATE_OFF'],
            'MODEM_STATE_NO_NETWORK': cls.__constants['MODEM_STATE_NO_NETWORK'],
            'MODEM_STATE_NETWORK_CONNECTED': cls.__constants['MODEM_STATE_NETWORK_CONNECTED'],
            'MODEM_STATE_CONFIGURING_DATA_CONTEXT': cls.__constants['MODEM_STATE_CONFIGURING_DATA_CONTEXT'],
            'MODEM_STATE_ACTIVATING_DATA_CONTEXT': cls.__constants['MODEM_STATE_ACTIVATING_DATA_CONTEXT'],
            'MODEM_STATE_CONFIGURING_SOCKET': cls.__constants['MODEM_STATE_CONFIGURING_SOCKET'],
            'MODEM_STATE_WAITING_ON_SERVER_HANDSHAKE': cls.__constants['MODEM_STATE_WAITING_ON_SERVER_HANDSHAKE'],
            'MODEM_STATE_CONNECTED_AND_IDLE': cls.__constants['MODEM_STATE_CONNECTED_AND_IDLE'],
            'MODEM_STATE_CONNECTED_AND_STREAMING': cls.__constants['MODEM_STATE_CONNECTED_AND_STREAMING'],
            'CONNECTION_TYPE_NO_CONNECTION': cls.__constants['CONNECTION_TYPE_NO_CONNECTION'],
            'CONNECTION_TYPE_CONNECTION_2G': cls.__constants['CONNECTION_TYPE_CONNECTION_2G'],
            'CONNECTION_TYPE_CONNECTION_3G': cls.__constants['CONNECTION_TYPE_CONNECTION_3G'],
            'CONNECTION_TYPE_CONNECTION_4G': cls.__constants['CONNECTION_TYPE_CONNECTION_4G'],
            'CONNECTION_TYPE_CONNECTION_5G': cls.__constants['CONNECTION_TYPE_CONNECTION_5G'],
        }

    @property
    def MODEM_STATE_OFF(self):
        """Message constant 'MODEM_STATE_OFF'."""
        return Metaclass_MipGnssCorrectionsRtkCorrectionsStatusDongleStatus.__constants['MODEM_STATE_OFF']

    @property
    def MODEM_STATE_NO_NETWORK(self):
        """Message constant 'MODEM_STATE_NO_NETWORK'."""
        return Metaclass_MipGnssCorrectionsRtkCorrectionsStatusDongleStatus.__constants['MODEM_STATE_NO_NETWORK']

    @property
    def MODEM_STATE_NETWORK_CONNECTED(self):
        """Message constant 'MODEM_STATE_NETWORK_CONNECTED'."""
        return Metaclass_MipGnssCorrectionsRtkCorrectionsStatusDongleStatus.__constants['MODEM_STATE_NETWORK_CONNECTED']

    @property
    def MODEM_STATE_CONFIGURING_DATA_CONTEXT(self):
        """Message constant 'MODEM_STATE_CONFIGURING_DATA_CONTEXT'."""
        return Metaclass_MipGnssCorrectionsRtkCorrectionsStatusDongleStatus.__constants['MODEM_STATE_CONFIGURING_DATA_CONTEXT']

    @property
    def MODEM_STATE_ACTIVATING_DATA_CONTEXT(self):
        """Message constant 'MODEM_STATE_ACTIVATING_DATA_CONTEXT'."""
        return Metaclass_MipGnssCorrectionsRtkCorrectionsStatusDongleStatus.__constants['MODEM_STATE_ACTIVATING_DATA_CONTEXT']

    @property
    def MODEM_STATE_CONFIGURING_SOCKET(self):
        """Message constant 'MODEM_STATE_CONFIGURING_SOCKET'."""
        return Metaclass_MipGnssCorrectionsRtkCorrectionsStatusDongleStatus.__constants['MODEM_STATE_CONFIGURING_SOCKET']

    @property
    def MODEM_STATE_WAITING_ON_SERVER_HANDSHAKE(self):
        """Message constant 'MODEM_STATE_WAITING_ON_SERVER_HANDSHAKE'."""
        return Metaclass_MipGnssCorrectionsRtkCorrectionsStatusDongleStatus.__constants['MODEM_STATE_WAITING_ON_SERVER_HANDSHAKE']

    @property
    def MODEM_STATE_CONNECTED_AND_IDLE(self):
        """Message constant 'MODEM_STATE_CONNECTED_AND_IDLE'."""
        return Metaclass_MipGnssCorrectionsRtkCorrectionsStatusDongleStatus.__constants['MODEM_STATE_CONNECTED_AND_IDLE']

    @property
    def MODEM_STATE_CONNECTED_AND_STREAMING(self):
        """Message constant 'MODEM_STATE_CONNECTED_AND_STREAMING'."""
        return Metaclass_MipGnssCorrectionsRtkCorrectionsStatusDongleStatus.__constants['MODEM_STATE_CONNECTED_AND_STREAMING']

    @property
    def CONNECTION_TYPE_NO_CONNECTION(self):
        """Message constant 'CONNECTION_TYPE_NO_CONNECTION'."""
        return Metaclass_MipGnssCorrectionsRtkCorrectionsStatusDongleStatus.__constants['CONNECTION_TYPE_NO_CONNECTION']

    @property
    def CONNECTION_TYPE_CONNECTION_2G(self):
        """Message constant 'CONNECTION_TYPE_CONNECTION_2G'."""
        return Metaclass_MipGnssCorrectionsRtkCorrectionsStatusDongleStatus.__constants['CONNECTION_TYPE_CONNECTION_2G']

    @property
    def CONNECTION_TYPE_CONNECTION_3G(self):
        """Message constant 'CONNECTION_TYPE_CONNECTION_3G'."""
        return Metaclass_MipGnssCorrectionsRtkCorrectionsStatusDongleStatus.__constants['CONNECTION_TYPE_CONNECTION_3G']

    @property
    def CONNECTION_TYPE_CONNECTION_4G(self):
        """Message constant 'CONNECTION_TYPE_CONNECTION_4G'."""
        return Metaclass_MipGnssCorrectionsRtkCorrectionsStatusDongleStatus.__constants['CONNECTION_TYPE_CONNECTION_4G']

    @property
    def CONNECTION_TYPE_CONNECTION_5G(self):
        """Message constant 'CONNECTION_TYPE_CONNECTION_5G'."""
        return Metaclass_MipGnssCorrectionsRtkCorrectionsStatusDongleStatus.__constants['CONNECTION_TYPE_CONNECTION_5G']


class MipGnssCorrectionsRtkCorrectionsStatusDongleStatus(metaclass=Metaclass_MipGnssCorrectionsRtkCorrectionsStatusDongleStatus):
    """
    Message class 'MipGnssCorrectionsRtkCorrectionsStatusDongleStatus'.

    Constants:
      MODEM_STATE_OFF
      MODEM_STATE_NO_NETWORK
      MODEM_STATE_NETWORK_CONNECTED
      MODEM_STATE_CONFIGURING_DATA_CONTEXT
      MODEM_STATE_ACTIVATING_DATA_CONTEXT
      MODEM_STATE_CONFIGURING_SOCKET
      MODEM_STATE_WAITING_ON_SERVER_HANDSHAKE
      MODEM_STATE_CONNECTED_AND_IDLE
      MODEM_STATE_CONNECTED_AND_STREAMING
      CONNECTION_TYPE_NO_CONNECTION
      CONNECTION_TYPE_CONNECTION_2G
      CONNECTION_TYPE_CONNECTION_3G
      CONNECTION_TYPE_CONNECTION_4G
      CONNECTION_TYPE_CONNECTION_5G
    """

    __slots__ = [
        '_modem_state',
        '_connection_type',
        '_rssi',
        '_signal_quality',
        '_tower_change_indicator',
        '_nmea_timeout_flag',
        '_server_timeout_flag',
        '_rtcm_timeout_flag',
        '_device_out_of_range_flag',
        '_corrections_unavailable_flag',
    ]

    _fields_and_field_types = {
        'modem_state': 'uint8',
        'connection_type': 'uint8',
        'rssi': 'int8',
        'signal_quality': 'uint8',
        'tower_change_indicator': 'uint8',
        'nmea_timeout_flag': 'boolean',
        'server_timeout_flag': 'boolean',
        'rtcm_timeout_flag': 'boolean',
        'device_out_of_range_flag': 'boolean',
        'corrections_unavailable_flag': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.modem_state = kwargs.get('modem_state', int())
        self.connection_type = kwargs.get('connection_type', int())
        self.rssi = kwargs.get('rssi', int())
        self.signal_quality = kwargs.get('signal_quality', int())
        self.tower_change_indicator = kwargs.get('tower_change_indicator', int())
        self.nmea_timeout_flag = kwargs.get('nmea_timeout_flag', bool())
        self.server_timeout_flag = kwargs.get('server_timeout_flag', bool())
        self.rtcm_timeout_flag = kwargs.get('rtcm_timeout_flag', bool())
        self.device_out_of_range_flag = kwargs.get('device_out_of_range_flag', bool())
        self.corrections_unavailable_flag = kwargs.get('corrections_unavailable_flag', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.modem_state != other.modem_state:
            return False
        if self.connection_type != other.connection_type:
            return False
        if self.rssi != other.rssi:
            return False
        if self.signal_quality != other.signal_quality:
            return False
        if self.tower_change_indicator != other.tower_change_indicator:
            return False
        if self.nmea_timeout_flag != other.nmea_timeout_flag:
            return False
        if self.server_timeout_flag != other.server_timeout_flag:
            return False
        if self.rtcm_timeout_flag != other.rtcm_timeout_flag:
            return False
        if self.device_out_of_range_flag != other.device_out_of_range_flag:
            return False
        if self.corrections_unavailable_flag != other.corrections_unavailable_flag:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def modem_state(self):
        """Message field 'modem_state'."""
        return self._modem_state

    @modem_state.setter
    def modem_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'modem_state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'modem_state' field must be an unsigned integer in [0, 255]"
        self._modem_state = value

    @builtins.property
    def connection_type(self):
        """Message field 'connection_type'."""
        return self._connection_type

    @connection_type.setter
    def connection_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'connection_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'connection_type' field must be an unsigned integer in [0, 255]"
        self._connection_type = value

    @builtins.property
    def rssi(self):
        """Message field 'rssi'."""
        return self._rssi

    @rssi.setter
    def rssi(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rssi' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'rssi' field must be an integer in [-128, 127]"
        self._rssi = value

    @builtins.property
    def signal_quality(self):
        """Message field 'signal_quality'."""
        return self._signal_quality

    @signal_quality.setter
    def signal_quality(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'signal_quality' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'signal_quality' field must be an unsigned integer in [0, 255]"
        self._signal_quality = value

    @builtins.property
    def tower_change_indicator(self):
        """Message field 'tower_change_indicator'."""
        return self._tower_change_indicator

    @tower_change_indicator.setter
    def tower_change_indicator(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'tower_change_indicator' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'tower_change_indicator' field must be an unsigned integer in [0, 255]"
        self._tower_change_indicator = value

    @builtins.property
    def nmea_timeout_flag(self):
        """Message field 'nmea_timeout_flag'."""
        return self._nmea_timeout_flag

    @nmea_timeout_flag.setter
    def nmea_timeout_flag(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'nmea_timeout_flag' field must be of type 'bool'"
        self._nmea_timeout_flag = value

    @builtins.property
    def server_timeout_flag(self):
        """Message field 'server_timeout_flag'."""
        return self._server_timeout_flag

    @server_timeout_flag.setter
    def server_timeout_flag(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'server_timeout_flag' field must be of type 'bool'"
        self._server_timeout_flag = value

    @builtins.property
    def rtcm_timeout_flag(self):
        """Message field 'rtcm_timeout_flag'."""
        return self._rtcm_timeout_flag

    @rtcm_timeout_flag.setter
    def rtcm_timeout_flag(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'rtcm_timeout_flag' field must be of type 'bool'"
        self._rtcm_timeout_flag = value

    @builtins.property
    def device_out_of_range_flag(self):
        """Message field 'device_out_of_range_flag'."""
        return self._device_out_of_range_flag

    @device_out_of_range_flag.setter
    def device_out_of_range_flag(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'device_out_of_range_flag' field must be of type 'bool'"
        self._device_out_of_range_flag = value

    @builtins.property
    def corrections_unavailable_flag(self):
        """Message field 'corrections_unavailable_flag'."""
        return self._corrections_unavailable_flag

    @corrections_unavailable_flag.setter
    def corrections_unavailable_flag(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'corrections_unavailable_flag' field must be of type 'bool'"
        self._corrections_unavailable_flag = value
