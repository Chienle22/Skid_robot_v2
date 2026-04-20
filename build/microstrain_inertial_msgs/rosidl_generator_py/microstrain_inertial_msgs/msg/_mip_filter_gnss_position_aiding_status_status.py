# generated from rosidl_generator_py/resource/_idl.py.em
# with input from microstrain_inertial_msgs:msg/MipFilterGnssPositionAidingStatusStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MipFilterGnssPositionAidingStatusStatus(type):
    """Metaclass of message 'MipFilterGnssPositionAidingStatusStatus'."""

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
                'microstrain_inertial_msgs.msg.MipFilterGnssPositionAidingStatusStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__mip_filter_gnss_position_aiding_status_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__mip_filter_gnss_position_aiding_status_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__mip_filter_gnss_position_aiding_status_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__mip_filter_gnss_position_aiding_status_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__mip_filter_gnss_position_aiding_status_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MipFilterGnssPositionAidingStatusStatus(metaclass=Metaclass_MipFilterGnssPositionAidingStatusStatus):
    """Message class 'MipFilterGnssPositionAidingStatusStatus'."""

    __slots__ = [
        '_tight_coupling',
        '_differential',
        '_integer_fix',
        '_gps_l1',
        '_gps_l2',
        '_gps_l5',
        '_glo_l1',
        '_glo_l2',
        '_gal_e1',
        '_gal_e5',
        '_gal_e6',
        '_bei_b1',
        '_bei_b2',
        '_bei_b3',
        '_no_fix',
        '_config_error',
    ]

    _fields_and_field_types = {
        'tight_coupling': 'boolean',
        'differential': 'boolean',
        'integer_fix': 'boolean',
        'gps_l1': 'boolean',
        'gps_l2': 'boolean',
        'gps_l5': 'boolean',
        'glo_l1': 'boolean',
        'glo_l2': 'boolean',
        'gal_e1': 'boolean',
        'gal_e5': 'boolean',
        'gal_e6': 'boolean',
        'bei_b1': 'boolean',
        'bei_b2': 'boolean',
        'bei_b3': 'boolean',
        'no_fix': 'boolean',
        'config_error': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
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
        self.tight_coupling = kwargs.get('tight_coupling', bool())
        self.differential = kwargs.get('differential', bool())
        self.integer_fix = kwargs.get('integer_fix', bool())
        self.gps_l1 = kwargs.get('gps_l1', bool())
        self.gps_l2 = kwargs.get('gps_l2', bool())
        self.gps_l5 = kwargs.get('gps_l5', bool())
        self.glo_l1 = kwargs.get('glo_l1', bool())
        self.glo_l2 = kwargs.get('glo_l2', bool())
        self.gal_e1 = kwargs.get('gal_e1', bool())
        self.gal_e5 = kwargs.get('gal_e5', bool())
        self.gal_e6 = kwargs.get('gal_e6', bool())
        self.bei_b1 = kwargs.get('bei_b1', bool())
        self.bei_b2 = kwargs.get('bei_b2', bool())
        self.bei_b3 = kwargs.get('bei_b3', bool())
        self.no_fix = kwargs.get('no_fix', bool())
        self.config_error = kwargs.get('config_error', bool())

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
        if self.tight_coupling != other.tight_coupling:
            return False
        if self.differential != other.differential:
            return False
        if self.integer_fix != other.integer_fix:
            return False
        if self.gps_l1 != other.gps_l1:
            return False
        if self.gps_l2 != other.gps_l2:
            return False
        if self.gps_l5 != other.gps_l5:
            return False
        if self.glo_l1 != other.glo_l1:
            return False
        if self.glo_l2 != other.glo_l2:
            return False
        if self.gal_e1 != other.gal_e1:
            return False
        if self.gal_e5 != other.gal_e5:
            return False
        if self.gal_e6 != other.gal_e6:
            return False
        if self.bei_b1 != other.bei_b1:
            return False
        if self.bei_b2 != other.bei_b2:
            return False
        if self.bei_b3 != other.bei_b3:
            return False
        if self.no_fix != other.no_fix:
            return False
        if self.config_error != other.config_error:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def tight_coupling(self):
        """Message field 'tight_coupling'."""
        return self._tight_coupling

    @tight_coupling.setter
    def tight_coupling(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'tight_coupling' field must be of type 'bool'"
        self._tight_coupling = value

    @builtins.property
    def differential(self):
        """Message field 'differential'."""
        return self._differential

    @differential.setter
    def differential(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'differential' field must be of type 'bool'"
        self._differential = value

    @builtins.property
    def integer_fix(self):
        """Message field 'integer_fix'."""
        return self._integer_fix

    @integer_fix.setter
    def integer_fix(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'integer_fix' field must be of type 'bool'"
        self._integer_fix = value

    @builtins.property
    def gps_l1(self):
        """Message field 'gps_l1'."""
        return self._gps_l1

    @gps_l1.setter
    def gps_l1(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'gps_l1' field must be of type 'bool'"
        self._gps_l1 = value

    @builtins.property
    def gps_l2(self):
        """Message field 'gps_l2'."""
        return self._gps_l2

    @gps_l2.setter
    def gps_l2(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'gps_l2' field must be of type 'bool'"
        self._gps_l2 = value

    @builtins.property
    def gps_l5(self):
        """Message field 'gps_l5'."""
        return self._gps_l5

    @gps_l5.setter
    def gps_l5(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'gps_l5' field must be of type 'bool'"
        self._gps_l5 = value

    @builtins.property
    def glo_l1(self):
        """Message field 'glo_l1'."""
        return self._glo_l1

    @glo_l1.setter
    def glo_l1(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'glo_l1' field must be of type 'bool'"
        self._glo_l1 = value

    @builtins.property
    def glo_l2(self):
        """Message field 'glo_l2'."""
        return self._glo_l2

    @glo_l2.setter
    def glo_l2(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'glo_l2' field must be of type 'bool'"
        self._glo_l2 = value

    @builtins.property
    def gal_e1(self):
        """Message field 'gal_e1'."""
        return self._gal_e1

    @gal_e1.setter
    def gal_e1(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'gal_e1' field must be of type 'bool'"
        self._gal_e1 = value

    @builtins.property
    def gal_e5(self):
        """Message field 'gal_e5'."""
        return self._gal_e5

    @gal_e5.setter
    def gal_e5(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'gal_e5' field must be of type 'bool'"
        self._gal_e5 = value

    @builtins.property
    def gal_e6(self):
        """Message field 'gal_e6'."""
        return self._gal_e6

    @gal_e6.setter
    def gal_e6(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'gal_e6' field must be of type 'bool'"
        self._gal_e6 = value

    @builtins.property
    def bei_b1(self):
        """Message field 'bei_b1'."""
        return self._bei_b1

    @bei_b1.setter
    def bei_b1(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'bei_b1' field must be of type 'bool'"
        self._bei_b1 = value

    @builtins.property
    def bei_b2(self):
        """Message field 'bei_b2'."""
        return self._bei_b2

    @bei_b2.setter
    def bei_b2(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'bei_b2' field must be of type 'bool'"
        self._bei_b2 = value

    @builtins.property
    def bei_b3(self):
        """Message field 'bei_b3'."""
        return self._bei_b3

    @bei_b3.setter
    def bei_b3(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'bei_b3' field must be of type 'bool'"
        self._bei_b3 = value

    @builtins.property
    def no_fix(self):
        """Message field 'no_fix'."""
        return self._no_fix

    @no_fix.setter
    def no_fix(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'no_fix' field must be of type 'bool'"
        self._no_fix = value

    @builtins.property
    def config_error(self):
        """Message field 'config_error'."""
        return self._config_error

    @config_error.setter
    def config_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'config_error' field must be of type 'bool'"
        self._config_error = value
