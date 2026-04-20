# generated from rosidl_generator_py/resource/_idl.py.em
# with input from microstrain_inertial_msgs:msg/MipGnssRfErrorDetection.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MipGnssRfErrorDetection(type):
    """Metaclass of message 'MipGnssRfErrorDetection'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'RF_BAND_UNKNOWN': 0,
        'RF_BAND_L1': 1,
        'RF_BAND_L2': 2,
        'RF_BAND_L5': 5,
        'JAMMING_STATE_UNKNOWN': 0,
        'JAMMING_STATE_NONE': 1,
        'JAMMING_STATE_PARTIAL': 2,
        'JAMMING_STATE_SIGNIFICANT': 3,
        'SPOOFING_STATE_UNKNOWN': 0,
        'SPOOFING_STATE_NONE': 1,
        'SPOOFING_STATE_PARTIAL': 2,
        'SPOOFING_STATE_SIGNIFICANT': 3,
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
                'microstrain_inertial_msgs.msg.MipGnssRfErrorDetection')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__mip_gnss_rf_error_detection
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__mip_gnss_rf_error_detection
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__mip_gnss_rf_error_detection
            cls._TYPE_SUPPORT = module.type_support_msg__msg__mip_gnss_rf_error_detection
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__mip_gnss_rf_error_detection

            from microstrain_inertial_msgs.msg import MipHeader
            if MipHeader.__class__._TYPE_SUPPORT is None:
                MipHeader.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'RF_BAND_UNKNOWN': cls.__constants['RF_BAND_UNKNOWN'],
            'RF_BAND_L1': cls.__constants['RF_BAND_L1'],
            'RF_BAND_L2': cls.__constants['RF_BAND_L2'],
            'RF_BAND_L5': cls.__constants['RF_BAND_L5'],
            'JAMMING_STATE_UNKNOWN': cls.__constants['JAMMING_STATE_UNKNOWN'],
            'JAMMING_STATE_NONE': cls.__constants['JAMMING_STATE_NONE'],
            'JAMMING_STATE_PARTIAL': cls.__constants['JAMMING_STATE_PARTIAL'],
            'JAMMING_STATE_SIGNIFICANT': cls.__constants['JAMMING_STATE_SIGNIFICANT'],
            'SPOOFING_STATE_UNKNOWN': cls.__constants['SPOOFING_STATE_UNKNOWN'],
            'SPOOFING_STATE_NONE': cls.__constants['SPOOFING_STATE_NONE'],
            'SPOOFING_STATE_PARTIAL': cls.__constants['SPOOFING_STATE_PARTIAL'],
            'SPOOFING_STATE_SIGNIFICANT': cls.__constants['SPOOFING_STATE_SIGNIFICANT'],
        }

    @property
    def RF_BAND_UNKNOWN(self):
        """Message constant 'RF_BAND_UNKNOWN'."""
        return Metaclass_MipGnssRfErrorDetection.__constants['RF_BAND_UNKNOWN']

    @property
    def RF_BAND_L1(self):
        """Message constant 'RF_BAND_L1'."""
        return Metaclass_MipGnssRfErrorDetection.__constants['RF_BAND_L1']

    @property
    def RF_BAND_L2(self):
        """Message constant 'RF_BAND_L2'."""
        return Metaclass_MipGnssRfErrorDetection.__constants['RF_BAND_L2']

    @property
    def RF_BAND_L5(self):
        """Message constant 'RF_BAND_L5'."""
        return Metaclass_MipGnssRfErrorDetection.__constants['RF_BAND_L5']

    @property
    def JAMMING_STATE_UNKNOWN(self):
        """Message constant 'JAMMING_STATE_UNKNOWN'."""
        return Metaclass_MipGnssRfErrorDetection.__constants['JAMMING_STATE_UNKNOWN']

    @property
    def JAMMING_STATE_NONE(self):
        """Message constant 'JAMMING_STATE_NONE'."""
        return Metaclass_MipGnssRfErrorDetection.__constants['JAMMING_STATE_NONE']

    @property
    def JAMMING_STATE_PARTIAL(self):
        """Message constant 'JAMMING_STATE_PARTIAL'."""
        return Metaclass_MipGnssRfErrorDetection.__constants['JAMMING_STATE_PARTIAL']

    @property
    def JAMMING_STATE_SIGNIFICANT(self):
        """Message constant 'JAMMING_STATE_SIGNIFICANT'."""
        return Metaclass_MipGnssRfErrorDetection.__constants['JAMMING_STATE_SIGNIFICANT']

    @property
    def SPOOFING_STATE_UNKNOWN(self):
        """Message constant 'SPOOFING_STATE_UNKNOWN'."""
        return Metaclass_MipGnssRfErrorDetection.__constants['SPOOFING_STATE_UNKNOWN']

    @property
    def SPOOFING_STATE_NONE(self):
        """Message constant 'SPOOFING_STATE_NONE'."""
        return Metaclass_MipGnssRfErrorDetection.__constants['SPOOFING_STATE_NONE']

    @property
    def SPOOFING_STATE_PARTIAL(self):
        """Message constant 'SPOOFING_STATE_PARTIAL'."""
        return Metaclass_MipGnssRfErrorDetection.__constants['SPOOFING_STATE_PARTIAL']

    @property
    def SPOOFING_STATE_SIGNIFICANT(self):
        """Message constant 'SPOOFING_STATE_SIGNIFICANT'."""
        return Metaclass_MipGnssRfErrorDetection.__constants['SPOOFING_STATE_SIGNIFICANT']


class MipGnssRfErrorDetection(metaclass=Metaclass_MipGnssRfErrorDetection):
    """
    Message class 'MipGnssRfErrorDetection'.

    Constants:
      RF_BAND_UNKNOWN
      RF_BAND_L1
      RF_BAND_L2
      RF_BAND_L5
      JAMMING_STATE_UNKNOWN
      JAMMING_STATE_NONE
      JAMMING_STATE_PARTIAL
      JAMMING_STATE_SIGNIFICANT
      SPOOFING_STATE_UNKNOWN
      SPOOFING_STATE_NONE
      SPOOFING_STATE_PARTIAL
      SPOOFING_STATE_SIGNIFICANT
    """

    __slots__ = [
        '_header',
        '_rf_band',
        '_jamming_state',
        '_spoofing_state',
    ]

    _fields_and_field_types = {
        'header': 'microstrain_inertial_msgs/MipHeader',
        'rf_band': 'uint8',
        'jamming_state': 'uint8',
        'spoofing_state': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['microstrain_inertial_msgs', 'msg'], 'MipHeader'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from microstrain_inertial_msgs.msg import MipHeader
        self.header = kwargs.get('header', MipHeader())
        self.rf_band = kwargs.get('rf_band', int())
        self.jamming_state = kwargs.get('jamming_state', int())
        self.spoofing_state = kwargs.get('spoofing_state', int())

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
        if self.rf_band != other.rf_band:
            return False
        if self.jamming_state != other.jamming_state:
            return False
        if self.spoofing_state != other.spoofing_state:
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
    def rf_band(self):
        """Message field 'rf_band'."""
        return self._rf_band

    @rf_band.setter
    def rf_band(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rf_band' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'rf_band' field must be an unsigned integer in [0, 255]"
        self._rf_band = value

    @builtins.property
    def jamming_state(self):
        """Message field 'jamming_state'."""
        return self._jamming_state

    @jamming_state.setter
    def jamming_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'jamming_state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'jamming_state' field must be an unsigned integer in [0, 255]"
        self._jamming_state = value

    @builtins.property
    def spoofing_state(self):
        """Message field 'spoofing_state'."""
        return self._spoofing_state

    @spoofing_state.setter
    def spoofing_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'spoofing_state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'spoofing_state' field must be an unsigned integer in [0, 255]"
        self._spoofing_state = value
