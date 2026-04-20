# generated from rosidl_generator_py/resource/_idl.py.em
# with input from microstrain_inertial_msgs:msg/MipGnssCorrectionsRtkCorrectionsStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MipGnssCorrectionsRtkCorrectionsStatus(type):
    """Metaclass of message 'MipGnssCorrectionsRtkCorrectionsStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
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
                'microstrain_inertial_msgs.msg.MipGnssCorrectionsRtkCorrectionsStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__mip_gnss_corrections_rtk_corrections_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__mip_gnss_corrections_rtk_corrections_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__mip_gnss_corrections_rtk_corrections_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__mip_gnss_corrections_rtk_corrections_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__mip_gnss_corrections_rtk_corrections_status

            from microstrain_inertial_msgs.msg import MipGnssCorrectionsRtkCorrectionsStatusDongleStatus
            if MipGnssCorrectionsRtkCorrectionsStatusDongleStatus.__class__._TYPE_SUPPORT is None:
                MipGnssCorrectionsRtkCorrectionsStatusDongleStatus.__class__.__import_type_support__()

            from microstrain_inertial_msgs.msg import MipGnssCorrectionsRtkCorrectionsStatusEpochStatus
            if MipGnssCorrectionsRtkCorrectionsStatusEpochStatus.__class__._TYPE_SUPPORT is None:
                MipGnssCorrectionsRtkCorrectionsStatusEpochStatus.__class__.__import_type_support__()

            from microstrain_inertial_msgs.msg import MipHeader
            if MipHeader.__class__._TYPE_SUPPORT is None:
                MipHeader.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MipGnssCorrectionsRtkCorrectionsStatus(metaclass=Metaclass_MipGnssCorrectionsRtkCorrectionsStatus):
    """Message class 'MipGnssCorrectionsRtkCorrectionsStatus'."""

    __slots__ = [
        '_header',
        '_time_of_week',
        '_week_number',
        '_epoch_status',
        '_dongle_status',
        '_gps_correction_latency',
        '_glonass_correction_latency',
        '_galileo_correction_latency',
        '_beidou_correction_latency',
    ]

    _fields_and_field_types = {
        'header': 'microstrain_inertial_msgs/MipHeader',
        'time_of_week': 'double',
        'week_number': 'uint16',
        'epoch_status': 'microstrain_inertial_msgs/MipGnssCorrectionsRtkCorrectionsStatusEpochStatus',
        'dongle_status': 'microstrain_inertial_msgs/MipGnssCorrectionsRtkCorrectionsStatusDongleStatus',
        'gps_correction_latency': 'float',
        'glonass_correction_latency': 'float',
        'galileo_correction_latency': 'float',
        'beidou_correction_latency': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['microstrain_inertial_msgs', 'msg'], 'MipHeader'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['microstrain_inertial_msgs', 'msg'], 'MipGnssCorrectionsRtkCorrectionsStatusEpochStatus'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['microstrain_inertial_msgs', 'msg'], 'MipGnssCorrectionsRtkCorrectionsStatusDongleStatus'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from microstrain_inertial_msgs.msg import MipHeader
        self.header = kwargs.get('header', MipHeader())
        self.time_of_week = kwargs.get('time_of_week', float())
        self.week_number = kwargs.get('week_number', int())
        from microstrain_inertial_msgs.msg import MipGnssCorrectionsRtkCorrectionsStatusEpochStatus
        self.epoch_status = kwargs.get('epoch_status', MipGnssCorrectionsRtkCorrectionsStatusEpochStatus())
        from microstrain_inertial_msgs.msg import MipGnssCorrectionsRtkCorrectionsStatusDongleStatus
        self.dongle_status = kwargs.get('dongle_status', MipGnssCorrectionsRtkCorrectionsStatusDongleStatus())
        self.gps_correction_latency = kwargs.get('gps_correction_latency', float())
        self.glonass_correction_latency = kwargs.get('glonass_correction_latency', float())
        self.galileo_correction_latency = kwargs.get('galileo_correction_latency', float())
        self.beidou_correction_latency = kwargs.get('beidou_correction_latency', float())

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
        if self.header != other.header:
            return False
        if self.time_of_week != other.time_of_week:
            return False
        if self.week_number != other.week_number:
            return False
        if self.epoch_status != other.epoch_status:
            return False
        if self.dongle_status != other.dongle_status:
            return False
        if self.gps_correction_latency != other.gps_correction_latency:
            return False
        if self.glonass_correction_latency != other.glonass_correction_latency:
            return False
        if self.galileo_correction_latency != other.galileo_correction_latency:
            return False
        if self.beidou_correction_latency != other.beidou_correction_latency:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from microstrain_inertial_msgs.msg import MipHeader
            assert \
                isinstance(value, MipHeader), \
                "The 'header' field must be a sub message of type 'MipHeader'"
        self._header = value

    @builtins.property
    def time_of_week(self):
        """Message field 'time_of_week'."""
        return self._time_of_week

    @time_of_week.setter
    def time_of_week(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'time_of_week' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'time_of_week' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._time_of_week = value

    @builtins.property
    def week_number(self):
        """Message field 'week_number'."""
        return self._week_number

    @week_number.setter
    def week_number(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'week_number' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'week_number' field must be an unsigned integer in [0, 65535]"
        self._week_number = value

    @builtins.property
    def epoch_status(self):
        """Message field 'epoch_status'."""
        return self._epoch_status

    @epoch_status.setter
    def epoch_status(self, value):
        if __debug__:
            from microstrain_inertial_msgs.msg import MipGnssCorrectionsRtkCorrectionsStatusEpochStatus
            assert \
                isinstance(value, MipGnssCorrectionsRtkCorrectionsStatusEpochStatus), \
                "The 'epoch_status' field must be a sub message of type 'MipGnssCorrectionsRtkCorrectionsStatusEpochStatus'"
        self._epoch_status = value

    @builtins.property
    def dongle_status(self):
        """Message field 'dongle_status'."""
        return self._dongle_status

    @dongle_status.setter
    def dongle_status(self, value):
        if __debug__:
            from microstrain_inertial_msgs.msg import MipGnssCorrectionsRtkCorrectionsStatusDongleStatus
            assert \
                isinstance(value, MipGnssCorrectionsRtkCorrectionsStatusDongleStatus), \
                "The 'dongle_status' field must be a sub message of type 'MipGnssCorrectionsRtkCorrectionsStatusDongleStatus'"
        self._dongle_status = value

    @builtins.property
    def gps_correction_latency(self):
        """Message field 'gps_correction_latency'."""
        return self._gps_correction_latency

    @gps_correction_latency.setter
    def gps_correction_latency(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gps_correction_latency' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'gps_correction_latency' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._gps_correction_latency = value

    @builtins.property
    def glonass_correction_latency(self):
        """Message field 'glonass_correction_latency'."""
        return self._glonass_correction_latency

    @glonass_correction_latency.setter
    def glonass_correction_latency(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'glonass_correction_latency' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'glonass_correction_latency' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._glonass_correction_latency = value

    @builtins.property
    def galileo_correction_latency(self):
        """Message field 'galileo_correction_latency'."""
        return self._galileo_correction_latency

    @galileo_correction_latency.setter
    def galileo_correction_latency(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'galileo_correction_latency' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'galileo_correction_latency' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._galileo_correction_latency = value

    @builtins.property
    def beidou_correction_latency(self):
        """Message field 'beidou_correction_latency'."""
        return self._beidou_correction_latency

    @beidou_correction_latency.setter
    def beidou_correction_latency(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'beidou_correction_latency' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'beidou_correction_latency' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._beidou_correction_latency = value
