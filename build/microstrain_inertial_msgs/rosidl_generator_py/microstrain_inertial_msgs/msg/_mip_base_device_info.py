# generated from rosidl_generator_py/resource/_idl.py.em
# with input from microstrain_inertial_msgs:msg/MipBaseDeviceInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MipBaseDeviceInfo(type):
    """Metaclass of message 'MipBaseDeviceInfo'."""

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
                'microstrain_inertial_msgs.msg.MipBaseDeviceInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__mip_base_device_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__mip_base_device_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__mip_base_device_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__mip_base_device_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__mip_base_device_info

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MipBaseDeviceInfo(metaclass=Metaclass_MipBaseDeviceInfo):
    """Message class 'MipBaseDeviceInfo'."""

    __slots__ = [
        '_firmware_version',
        '_model_name',
        '_model_number',
        '_serial_number',
        '_lot_number',
        '_device_options',
    ]

    _fields_and_field_types = {
        'firmware_version': 'string',
        'model_name': 'string',
        'model_number': 'string',
        'serial_number': 'string',
        'lot_number': 'string',
        'device_options': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.firmware_version = kwargs.get('firmware_version', str())
        self.model_name = kwargs.get('model_name', str())
        self.model_number = kwargs.get('model_number', str())
        self.serial_number = kwargs.get('serial_number', str())
        self.lot_number = kwargs.get('lot_number', str())
        self.device_options = kwargs.get('device_options', str())

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
        if self.firmware_version != other.firmware_version:
            return False
        if self.model_name != other.model_name:
            return False
        if self.model_number != other.model_number:
            return False
        if self.serial_number != other.serial_number:
            return False
        if self.lot_number != other.lot_number:
            return False
        if self.device_options != other.device_options:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def firmware_version(self):
        """Message field 'firmware_version'."""
        return self._firmware_version

    @firmware_version.setter
    def firmware_version(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'firmware_version' field must be of type 'str'"
        self._firmware_version = value

    @builtins.property
    def model_name(self):
        """Message field 'model_name'."""
        return self._model_name

    @model_name.setter
    def model_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'model_name' field must be of type 'str'"
        self._model_name = value

    @builtins.property
    def model_number(self):
        """Message field 'model_number'."""
        return self._model_number

    @model_number.setter
    def model_number(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'model_number' field must be of type 'str'"
        self._model_number = value

    @builtins.property
    def serial_number(self):
        """Message field 'serial_number'."""
        return self._serial_number

    @serial_number.setter
    def serial_number(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'serial_number' field must be of type 'str'"
        self._serial_number = value

    @builtins.property
    def lot_number(self):
        """Message field 'lot_number'."""
        return self._lot_number

    @lot_number.setter
    def lot_number(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'lot_number' field must be of type 'str'"
        self._lot_number = value

    @builtins.property
    def device_options(self):
        """Message field 'device_options'."""
        return self._device_options

    @device_options.setter
    def device_options(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'device_options' field must be of type 'str'"
        self._device_options = value
