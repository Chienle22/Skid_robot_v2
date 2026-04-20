# generated from rosidl_generator_py/resource/_idl.py.em
# with input from microstrain_inertial_msgs:msg/MipFilterGnssPositionAidingStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MipFilterGnssPositionAidingStatus(type):
    """Metaclass of message 'MipFilterGnssPositionAidingStatus'."""

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
                'microstrain_inertial_msgs.msg.MipFilterGnssPositionAidingStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__mip_filter_gnss_position_aiding_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__mip_filter_gnss_position_aiding_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__mip_filter_gnss_position_aiding_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__mip_filter_gnss_position_aiding_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__mip_filter_gnss_position_aiding_status

            from microstrain_inertial_msgs.msg import MipFilterGnssPositionAidingStatusStatus
            if MipFilterGnssPositionAidingStatusStatus.__class__._TYPE_SUPPORT is None:
                MipFilterGnssPositionAidingStatusStatus.__class__.__import_type_support__()

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


class MipFilterGnssPositionAidingStatus(metaclass=Metaclass_MipFilterGnssPositionAidingStatus):
    """Message class 'MipFilterGnssPositionAidingStatus'."""

    __slots__ = [
        '_header',
        '_receiver_id',
        '_time_of_week',
        '_status',
    ]

    _fields_and_field_types = {
        'header': 'microstrain_inertial_msgs/MipHeader',
        'receiver_id': 'uint8',
        'time_of_week': 'double',
        'status': 'microstrain_inertial_msgs/MipFilterGnssPositionAidingStatusStatus',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['microstrain_inertial_msgs', 'msg'], 'MipHeader'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['microstrain_inertial_msgs', 'msg'], 'MipFilterGnssPositionAidingStatusStatus'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from microstrain_inertial_msgs.msg import MipHeader
        self.header = kwargs.get('header', MipHeader())
        self.receiver_id = kwargs.get('receiver_id', int())
        self.time_of_week = kwargs.get('time_of_week', float())
        from microstrain_inertial_msgs.msg import MipFilterGnssPositionAidingStatusStatus
        self.status = kwargs.get('status', MipFilterGnssPositionAidingStatusStatus())

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
        if self.receiver_id != other.receiver_id:
            return False
        if self.time_of_week != other.time_of_week:
            return False
        if self.status != other.status:
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
    def receiver_id(self):
        """Message field 'receiver_id'."""
        return self._receiver_id

    @receiver_id.setter
    def receiver_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'receiver_id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'receiver_id' field must be an unsigned integer in [0, 255]"
        self._receiver_id = value

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
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            from microstrain_inertial_msgs.msg import MipFilterGnssPositionAidingStatusStatus
            assert \
                isinstance(value, MipFilterGnssPositionAidingStatusStatus), \
                "The 'status' field must be a sub message of type 'MipFilterGnssPositionAidingStatusStatus'"
        self._status = value
