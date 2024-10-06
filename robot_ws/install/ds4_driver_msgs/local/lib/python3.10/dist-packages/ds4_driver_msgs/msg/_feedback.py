# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ds4_driver_msgs:msg/Feedback.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Feedback(type):
    """Metaclass of message 'Feedback'."""

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
            module = import_type_support('ds4_driver_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ds4_driver_msgs.msg.Feedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__feedback
            cls._TYPE_SUPPORT = module.type_support_msg__msg__feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__feedback

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Feedback(metaclass=Metaclass_Feedback):
    """Message class 'Feedback'."""

    __slots__ = [
        '_set_led',
        '_led_r',
        '_led_g',
        '_led_b',
        '_set_led_flash',
        '_led_flash_on',
        '_led_flash_off',
        '_set_rumble',
        '_rumble_duration',
        '_rumble_small',
        '_rumble_big',
    ]

    _fields_and_field_types = {
        'set_led': 'boolean',
        'led_r': 'float',
        'led_g': 'float',
        'led_b': 'float',
        'set_led_flash': 'boolean',
        'led_flash_on': 'float',
        'led_flash_off': 'float',
        'set_rumble': 'boolean',
        'rumble_duration': 'float',
        'rumble_small': 'float',
        'rumble_big': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.set_led = kwargs.get('set_led', bool())
        self.led_r = kwargs.get('led_r', float())
        self.led_g = kwargs.get('led_g', float())
        self.led_b = kwargs.get('led_b', float())
        self.set_led_flash = kwargs.get('set_led_flash', bool())
        self.led_flash_on = kwargs.get('led_flash_on', float())
        self.led_flash_off = kwargs.get('led_flash_off', float())
        self.set_rumble = kwargs.get('set_rumble', bool())
        self.rumble_duration = kwargs.get('rumble_duration', float())
        self.rumble_small = kwargs.get('rumble_small', float())
        self.rumble_big = kwargs.get('rumble_big', float())

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
        if self.set_led != other.set_led:
            return False
        if self.led_r != other.led_r:
            return False
        if self.led_g != other.led_g:
            return False
        if self.led_b != other.led_b:
            return False
        if self.set_led_flash != other.set_led_flash:
            return False
        if self.led_flash_on != other.led_flash_on:
            return False
        if self.led_flash_off != other.led_flash_off:
            return False
        if self.set_rumble != other.set_rumble:
            return False
        if self.rumble_duration != other.rumble_duration:
            return False
        if self.rumble_small != other.rumble_small:
            return False
        if self.rumble_big != other.rumble_big:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def set_led(self):
        """Message field 'set_led'."""
        return self._set_led

    @set_led.setter
    def set_led(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'set_led' field must be of type 'bool'"
        self._set_led = value

    @builtins.property
    def led_r(self):
        """Message field 'led_r'."""
        return self._led_r

    @led_r.setter
    def led_r(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'led_r' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'led_r' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._led_r = value

    @builtins.property
    def led_g(self):
        """Message field 'led_g'."""
        return self._led_g

    @led_g.setter
    def led_g(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'led_g' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'led_g' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._led_g = value

    @builtins.property
    def led_b(self):
        """Message field 'led_b'."""
        return self._led_b

    @led_b.setter
    def led_b(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'led_b' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'led_b' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._led_b = value

    @builtins.property
    def set_led_flash(self):
        """Message field 'set_led_flash'."""
        return self._set_led_flash

    @set_led_flash.setter
    def set_led_flash(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'set_led_flash' field must be of type 'bool'"
        self._set_led_flash = value

    @builtins.property
    def led_flash_on(self):
        """Message field 'led_flash_on'."""
        return self._led_flash_on

    @led_flash_on.setter
    def led_flash_on(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'led_flash_on' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'led_flash_on' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._led_flash_on = value

    @builtins.property
    def led_flash_off(self):
        """Message field 'led_flash_off'."""
        return self._led_flash_off

    @led_flash_off.setter
    def led_flash_off(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'led_flash_off' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'led_flash_off' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._led_flash_off = value

    @builtins.property
    def set_rumble(self):
        """Message field 'set_rumble'."""
        return self._set_rumble

    @set_rumble.setter
    def set_rumble(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'set_rumble' field must be of type 'bool'"
        self._set_rumble = value

    @builtins.property
    def rumble_duration(self):
        """Message field 'rumble_duration'."""
        return self._rumble_duration

    @rumble_duration.setter
    def rumble_duration(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rumble_duration' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'rumble_duration' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._rumble_duration = value

    @builtins.property
    def rumble_small(self):
        """Message field 'rumble_small'."""
        return self._rumble_small

    @rumble_small.setter
    def rumble_small(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rumble_small' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'rumble_small' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._rumble_small = value

    @builtins.property
    def rumble_big(self):
        """Message field 'rumble_big'."""
        return self._rumble_big

    @rumble_big.setter
    def rumble_big(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rumble_big' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'rumble_big' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._rumble_big = value
