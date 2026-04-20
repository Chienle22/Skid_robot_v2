# generated from rosidl_generator_py/resource/_idl.py.em
# with input from microstrain_inertial_msgs:msg/MipFilterAidingMeasurementSummaryIndicator.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MipFilterAidingMeasurementSummaryIndicator(type):
    """Metaclass of message 'MipFilterAidingMeasurementSummaryIndicator'."""

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
                'microstrain_inertial_msgs.msg.MipFilterAidingMeasurementSummaryIndicator')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__mip_filter_aiding_measurement_summary_indicator
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__mip_filter_aiding_measurement_summary_indicator
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__mip_filter_aiding_measurement_summary_indicator
            cls._TYPE_SUPPORT = module.type_support_msg__msg__mip_filter_aiding_measurement_summary_indicator
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__mip_filter_aiding_measurement_summary_indicator

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MipFilterAidingMeasurementSummaryIndicator(metaclass=Metaclass_MipFilterAidingMeasurementSummaryIndicator):
    """Message class 'MipFilterAidingMeasurementSummaryIndicator'."""

    __slots__ = [
        '_enabled',
        '_used',
        '_residual_high_warning',
        '_sample_time_warning',
        '_configuration_error',
        '_max_num_meas_exceeded',
    ]

    _fields_and_field_types = {
        'enabled': 'boolean',
        'used': 'boolean',
        'residual_high_warning': 'boolean',
        'sample_time_warning': 'boolean',
        'configuration_error': 'boolean',
        'max_num_meas_exceeded': 'boolean',
    }

    SLOT_TYPES = (
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
        self.enabled = kwargs.get('enabled', bool())
        self.used = kwargs.get('used', bool())
        self.residual_high_warning = kwargs.get('residual_high_warning', bool())
        self.sample_time_warning = kwargs.get('sample_time_warning', bool())
        self.configuration_error = kwargs.get('configuration_error', bool())
        self.max_num_meas_exceeded = kwargs.get('max_num_meas_exceeded', bool())

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
        if self.enabled != other.enabled:
            return False
        if self.used != other.used:
            return False
        if self.residual_high_warning != other.residual_high_warning:
            return False
        if self.sample_time_warning != other.sample_time_warning:
            return False
        if self.configuration_error != other.configuration_error:
            return False
        if self.max_num_meas_exceeded != other.max_num_meas_exceeded:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def enabled(self):
        """Message field 'enabled'."""
        return self._enabled

    @enabled.setter
    def enabled(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'enabled' field must be of type 'bool'"
        self._enabled = value

    @builtins.property
    def used(self):
        """Message field 'used'."""
        return self._used

    @used.setter
    def used(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'used' field must be of type 'bool'"
        self._used = value

    @builtins.property
    def residual_high_warning(self):
        """Message field 'residual_high_warning'."""
        return self._residual_high_warning

    @residual_high_warning.setter
    def residual_high_warning(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'residual_high_warning' field must be of type 'bool'"
        self._residual_high_warning = value

    @builtins.property
    def sample_time_warning(self):
        """Message field 'sample_time_warning'."""
        return self._sample_time_warning

    @sample_time_warning.setter
    def sample_time_warning(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'sample_time_warning' field must be of type 'bool'"
        self._sample_time_warning = value

    @builtins.property
    def configuration_error(self):
        """Message field 'configuration_error'."""
        return self._configuration_error

    @configuration_error.setter
    def configuration_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'configuration_error' field must be of type 'bool'"
        self._configuration_error = value

    @builtins.property
    def max_num_meas_exceeded(self):
        """Message field 'max_num_meas_exceeded'."""
        return self._max_num_meas_exceeded

    @max_num_meas_exceeded.setter
    def max_num_meas_exceeded(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'max_num_meas_exceeded' field must be of type 'bool'"
        self._max_num_meas_exceeded = value
