# generated from rosidl_generator_py/resource/_idl.py.em
# with input from microstrain_inertial_msgs:msg/MipGpsTimestamp.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MipGpsTimestamp(type):
    """Metaclass of message 'MipGpsTimestamp'."""

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
                'microstrain_inertial_msgs.msg.MipGpsTimestamp')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__mip_gps_timestamp
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__mip_gps_timestamp
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__mip_gps_timestamp
            cls._TYPE_SUPPORT = module.type_support_msg__msg__mip_gps_timestamp
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__mip_gps_timestamp

            from microstrain_inertial_msgs.msg import MipGpsTimestampValidFlags
            if MipGpsTimestampValidFlags.__class__._TYPE_SUPPORT is None:
                MipGpsTimestampValidFlags.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MipGpsTimestamp(metaclass=Metaclass_MipGpsTimestamp):
    """Message class 'MipGpsTimestamp'."""

    __slots__ = [
        '_tow',
        '_week_number',
        '_valid_flags',
    ]

    _fields_and_field_types = {
        'tow': 'double',
        'week_number': 'uint16',
        'valid_flags': 'microstrain_inertial_msgs/MipGpsTimestampValidFlags',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['microstrain_inertial_msgs', 'msg'], 'MipGpsTimestampValidFlags'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.tow = kwargs.get('tow', float())
        self.week_number = kwargs.get('week_number', int())
        from microstrain_inertial_msgs.msg import MipGpsTimestampValidFlags
        self.valid_flags = kwargs.get('valid_flags', MipGpsTimestampValidFlags())

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
        if self.tow != other.tow:
            return False
        if self.week_number != other.week_number:
            return False
        if self.valid_flags != other.valid_flags:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def tow(self):
        """Message field 'tow'."""
        return self._tow

    @tow.setter
    def tow(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'tow' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'tow' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._tow = value

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
    def valid_flags(self):
        """Message field 'valid_flags'."""
        return self._valid_flags

    @valid_flags.setter
    def valid_flags(self, value):
        if __debug__:
            from microstrain_inertial_msgs.msg import MipGpsTimestampValidFlags
            assert \
                isinstance(value, MipGpsTimestampValidFlags), \
                "The 'valid_flags' field must be a sub message of type 'MipGpsTimestampValidFlags'"
        self._valid_flags = value
