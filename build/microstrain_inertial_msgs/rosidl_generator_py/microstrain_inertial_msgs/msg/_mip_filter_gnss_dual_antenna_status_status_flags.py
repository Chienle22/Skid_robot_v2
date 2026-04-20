# generated from rosidl_generator_py/resource/_idl.py.em
# with input from microstrain_inertial_msgs:msg/MipFilterGnssDualAntennaStatusStatusFlags.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MipFilterGnssDualAntennaStatusStatusFlags(type):
    """Metaclass of message 'MipFilterGnssDualAntennaStatusStatusFlags'."""

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
                'microstrain_inertial_msgs.msg.MipFilterGnssDualAntennaStatusStatusFlags')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__mip_filter_gnss_dual_antenna_status_status_flags
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__mip_filter_gnss_dual_antenna_status_status_flags
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__mip_filter_gnss_dual_antenna_status_status_flags
            cls._TYPE_SUPPORT = module.type_support_msg__msg__mip_filter_gnss_dual_antenna_status_status_flags
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__mip_filter_gnss_dual_antenna_status_status_flags

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MipFilterGnssDualAntennaStatusStatusFlags(metaclass=Metaclass_MipFilterGnssDualAntennaStatusStatusFlags):
    """Message class 'MipFilterGnssDualAntennaStatusStatusFlags'."""

    __slots__ = [
        '_rcv_1_data_valid',
        '_rcv_2_data_valid',
        '_antenna_offsets_valid',
    ]

    _fields_and_field_types = {
        'rcv_1_data_valid': 'boolean',
        'rcv_2_data_valid': 'boolean',
        'antenna_offsets_valid': 'boolean',
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
        self.rcv_1_data_valid = kwargs.get('rcv_1_data_valid', bool())
        self.rcv_2_data_valid = kwargs.get('rcv_2_data_valid', bool())
        self.antenna_offsets_valid = kwargs.get('antenna_offsets_valid', bool())

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
        if self.rcv_1_data_valid != other.rcv_1_data_valid:
            return False
        if self.rcv_2_data_valid != other.rcv_2_data_valid:
            return False
        if self.antenna_offsets_valid != other.antenna_offsets_valid:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def rcv_1_data_valid(self):
        """Message field 'rcv_1_data_valid'."""
        return self._rcv_1_data_valid

    @rcv_1_data_valid.setter
    def rcv_1_data_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'rcv_1_data_valid' field must be of type 'bool'"
        self._rcv_1_data_valid = value

    @builtins.property
    def rcv_2_data_valid(self):
        """Message field 'rcv_2_data_valid'."""
        return self._rcv_2_data_valid

    @rcv_2_data_valid.setter
    def rcv_2_data_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'rcv_2_data_valid' field must be of type 'bool'"
        self._rcv_2_data_valid = value

    @builtins.property
    def antenna_offsets_valid(self):
        """Message field 'antenna_offsets_valid'."""
        return self._antenna_offsets_valid

    @antenna_offsets_valid.setter
    def antenna_offsets_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'antenna_offsets_valid' field must be of type 'bool'"
        self._antenna_offsets_valid = value
