# generated from rosidl_generator_py/resource/_idl.py.em
# with input from microstrain_inertial_msgs:msg/MipGnssCorrectionsRtkCorrectionsStatusEpochStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MipGnssCorrectionsRtkCorrectionsStatusEpochStatus(type):
    """Metaclass of message 'MipGnssCorrectionsRtkCorrectionsStatusEpochStatus'."""

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
                'microstrain_inertial_msgs.msg.MipGnssCorrectionsRtkCorrectionsStatusEpochStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__mip_gnss_corrections_rtk_corrections_status_epoch_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__mip_gnss_corrections_rtk_corrections_status_epoch_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__mip_gnss_corrections_rtk_corrections_status_epoch_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__mip_gnss_corrections_rtk_corrections_status_epoch_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__mip_gnss_corrections_rtk_corrections_status_epoch_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MipGnssCorrectionsRtkCorrectionsStatusEpochStatus(metaclass=Metaclass_MipGnssCorrectionsRtkCorrectionsStatusEpochStatus):
    """Message class 'MipGnssCorrectionsRtkCorrectionsStatusEpochStatus'."""

    __slots__ = [
        '_antenna_location_received',
        '_antenna_description_received',
        '_gps_received',
        '_galileo_received',
        '_glonass_received',
        '_beidou_received',
        '_using_gps_msm_messages',
        '_using_glonass_msm_messages',
        '_dongle_status_read_failed',
    ]

    _fields_and_field_types = {
        'antenna_location_received': 'boolean',
        'antenna_description_received': 'boolean',
        'gps_received': 'boolean',
        'galileo_received': 'boolean',
        'glonass_received': 'boolean',
        'beidou_received': 'boolean',
        'using_gps_msm_messages': 'boolean',
        'using_glonass_msm_messages': 'boolean',
        'dongle_status_read_failed': 'boolean',
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
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.antenna_location_received = kwargs.get('antenna_location_received', bool())
        self.antenna_description_received = kwargs.get('antenna_description_received', bool())
        self.gps_received = kwargs.get('gps_received', bool())
        self.galileo_received = kwargs.get('galileo_received', bool())
        self.glonass_received = kwargs.get('glonass_received', bool())
        self.beidou_received = kwargs.get('beidou_received', bool())
        self.using_gps_msm_messages = kwargs.get('using_gps_msm_messages', bool())
        self.using_glonass_msm_messages = kwargs.get('using_glonass_msm_messages', bool())
        self.dongle_status_read_failed = kwargs.get('dongle_status_read_failed', bool())

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
        if self.antenna_location_received != other.antenna_location_received:
            return False
        if self.antenna_description_received != other.antenna_description_received:
            return False
        if self.gps_received != other.gps_received:
            return False
        if self.galileo_received != other.galileo_received:
            return False
        if self.glonass_received != other.glonass_received:
            return False
        if self.beidou_received != other.beidou_received:
            return False
        if self.using_gps_msm_messages != other.using_gps_msm_messages:
            return False
        if self.using_glonass_msm_messages != other.using_glonass_msm_messages:
            return False
        if self.dongle_status_read_failed != other.dongle_status_read_failed:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def antenna_location_received(self):
        """Message field 'antenna_location_received'."""
        return self._antenna_location_received

    @antenna_location_received.setter
    def antenna_location_received(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'antenna_location_received' field must be of type 'bool'"
        self._antenna_location_received = value

    @builtins.property
    def antenna_description_received(self):
        """Message field 'antenna_description_received'."""
        return self._antenna_description_received

    @antenna_description_received.setter
    def antenna_description_received(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'antenna_description_received' field must be of type 'bool'"
        self._antenna_description_received = value

    @builtins.property
    def gps_received(self):
        """Message field 'gps_received'."""
        return self._gps_received

    @gps_received.setter
    def gps_received(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'gps_received' field must be of type 'bool'"
        self._gps_received = value

    @builtins.property
    def galileo_received(self):
        """Message field 'galileo_received'."""
        return self._galileo_received

    @galileo_received.setter
    def galileo_received(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'galileo_received' field must be of type 'bool'"
        self._galileo_received = value

    @builtins.property
    def glonass_received(self):
        """Message field 'glonass_received'."""
        return self._glonass_received

    @glonass_received.setter
    def glonass_received(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'glonass_received' field must be of type 'bool'"
        self._glonass_received = value

    @builtins.property
    def beidou_received(self):
        """Message field 'beidou_received'."""
        return self._beidou_received

    @beidou_received.setter
    def beidou_received(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'beidou_received' field must be of type 'bool'"
        self._beidou_received = value

    @builtins.property
    def using_gps_msm_messages(self):
        """Message field 'using_gps_msm_messages'."""
        return self._using_gps_msm_messages

    @using_gps_msm_messages.setter
    def using_gps_msm_messages(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'using_gps_msm_messages' field must be of type 'bool'"
        self._using_gps_msm_messages = value

    @builtins.property
    def using_glonass_msm_messages(self):
        """Message field 'using_glonass_msm_messages'."""
        return self._using_glonass_msm_messages

    @using_glonass_msm_messages.setter
    def using_glonass_msm_messages(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'using_glonass_msm_messages' field must be of type 'bool'"
        self._using_glonass_msm_messages = value

    @builtins.property
    def dongle_status_read_failed(self):
        """Message field 'dongle_status_read_failed'."""
        return self._dongle_status_read_failed

    @dongle_status_read_failed.setter
    def dongle_status_read_failed(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'dongle_status_read_failed' field must be of type 'bool'"
        self._dongle_status_read_failed = value
