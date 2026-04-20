# generated from rosidl_generator_py/resource/_idl.py.em
# with input from microstrain_inertial_msgs:msg/MipGpsTimestampValidFlags.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MipGpsTimestampValidFlags(type):
    """Metaclass of message 'MipGpsTimestampValidFlags'."""

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
                'microstrain_inertial_msgs.msg.MipGpsTimestampValidFlags')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__mip_gps_timestamp_valid_flags
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__mip_gps_timestamp_valid_flags
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__mip_gps_timestamp_valid_flags
            cls._TYPE_SUPPORT = module.type_support_msg__msg__mip_gps_timestamp_valid_flags
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__mip_gps_timestamp_valid_flags

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MipGpsTimestampValidFlags(metaclass=Metaclass_MipGpsTimestampValidFlags):
    """Message class 'MipGpsTimestampValidFlags'."""

    __slots__ = [
        '_tow',
        '_week_number',
        '_time_valid',
    ]

    _fields_and_field_types = {
        'tow': 'boolean',
        'week_number': 'boolean',
        'time_valid': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.tow = kwargs.get('tow', bool())
        self.week_number = kwargs.get('week_number', bool())
        self.time_valid = kwargs.get('time_valid', bool())

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
        if self.time_valid != other.time_valid:
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
                isinstance(value, bool), \
                "The 'tow' field must be of type 'bool'"
        self._tow = value

    @builtins.property
    def week_number(self):
        """Message field 'week_number'."""
        return self._week_number

    @week_number.setter
    def week_number(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'week_number' field must be of type 'bool'"
        self._week_number = value

    @builtins.property
    def time_valid(self):
        """Message field 'time_valid'."""
        return self._time_valid

    @time_valid.setter
    def time_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'time_valid' field must be of type 'bool'"
        self._time_valid = value
