# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ds4_driver_msgs:msg/Status.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Status(type):
    """Metaclass of message 'Status'."""

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
                'ds4_driver_msgs.msg.Status')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__status

            from ds4_driver_msgs.msg import Trackpad
            if Trackpad.__class__._TYPE_SUPPORT is None:
                Trackpad.__class__.__import_type_support__()

            from sensor_msgs.msg import Imu
            if Imu.__class__._TYPE_SUPPORT is None:
                Imu.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Status(metaclass=Metaclass_Status):
    """Message class 'Status'."""

    __slots__ = [
        '_header',
        '_axis_left_x',
        '_axis_left_y',
        '_axis_right_x',
        '_axis_right_y',
        '_axis_l2',
        '_axis_r2',
        '_button_dpad_up',
        '_button_dpad_down',
        '_button_dpad_left',
        '_button_dpad_right',
        '_button_cross',
        '_button_circle',
        '_button_square',
        '_button_triangle',
        '_button_l1',
        '_button_l2',
        '_button_l3',
        '_button_r1',
        '_button_r2',
        '_button_r3',
        '_button_share',
        '_button_options',
        '_button_trackpad',
        '_button_ps',
        '_imu',
        '_battery_percentage',
        '_battery_full_charging',
        '_touch0',
        '_touch1',
        '_plug_usb',
        '_plug_audio',
        '_plug_mic',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'axis_left_x': 'float',
        'axis_left_y': 'float',
        'axis_right_x': 'float',
        'axis_right_y': 'float',
        'axis_l2': 'float',
        'axis_r2': 'float',
        'button_dpad_up': 'int32',
        'button_dpad_down': 'int32',
        'button_dpad_left': 'int32',
        'button_dpad_right': 'int32',
        'button_cross': 'int32',
        'button_circle': 'int32',
        'button_square': 'int32',
        'button_triangle': 'int32',
        'button_l1': 'int32',
        'button_l2': 'int32',
        'button_l3': 'int32',
        'button_r1': 'int32',
        'button_r2': 'int32',
        'button_r3': 'int32',
        'button_share': 'int32',
        'button_options': 'int32',
        'button_trackpad': 'int32',
        'button_ps': 'int32',
        'imu': 'sensor_msgs/Imu',
        'battery_percentage': 'float',
        'battery_full_charging': 'int32',
        'touch0': 'ds4_driver_msgs/Trackpad',
        'touch1': 'ds4_driver_msgs/Trackpad',
        'plug_usb': 'int32',
        'plug_audio': 'int32',
        'plug_mic': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'Imu'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ds4_driver_msgs', 'msg'], 'Trackpad'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ds4_driver_msgs', 'msg'], 'Trackpad'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.axis_left_x = kwargs.get('axis_left_x', float())
        self.axis_left_y = kwargs.get('axis_left_y', float())
        self.axis_right_x = kwargs.get('axis_right_x', float())
        self.axis_right_y = kwargs.get('axis_right_y', float())
        self.axis_l2 = kwargs.get('axis_l2', float())
        self.axis_r2 = kwargs.get('axis_r2', float())
        self.button_dpad_up = kwargs.get('button_dpad_up', int())
        self.button_dpad_down = kwargs.get('button_dpad_down', int())
        self.button_dpad_left = kwargs.get('button_dpad_left', int())
        self.button_dpad_right = kwargs.get('button_dpad_right', int())
        self.button_cross = kwargs.get('button_cross', int())
        self.button_circle = kwargs.get('button_circle', int())
        self.button_square = kwargs.get('button_square', int())
        self.button_triangle = kwargs.get('button_triangle', int())
        self.button_l1 = kwargs.get('button_l1', int())
        self.button_l2 = kwargs.get('button_l2', int())
        self.button_l3 = kwargs.get('button_l3', int())
        self.button_r1 = kwargs.get('button_r1', int())
        self.button_r2 = kwargs.get('button_r2', int())
        self.button_r3 = kwargs.get('button_r3', int())
        self.button_share = kwargs.get('button_share', int())
        self.button_options = kwargs.get('button_options', int())
        self.button_trackpad = kwargs.get('button_trackpad', int())
        self.button_ps = kwargs.get('button_ps', int())
        from sensor_msgs.msg import Imu
        self.imu = kwargs.get('imu', Imu())
        self.battery_percentage = kwargs.get('battery_percentage', float())
        self.battery_full_charging = kwargs.get('battery_full_charging', int())
        from ds4_driver_msgs.msg import Trackpad
        self.touch0 = kwargs.get('touch0', Trackpad())
        from ds4_driver_msgs.msg import Trackpad
        self.touch1 = kwargs.get('touch1', Trackpad())
        self.plug_usb = kwargs.get('plug_usb', int())
        self.plug_audio = kwargs.get('plug_audio', int())
        self.plug_mic = kwargs.get('plug_mic', int())

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
        if self.axis_left_x != other.axis_left_x:
            return False
        if self.axis_left_y != other.axis_left_y:
            return False
        if self.axis_right_x != other.axis_right_x:
            return False
        if self.axis_right_y != other.axis_right_y:
            return False
        if self.axis_l2 != other.axis_l2:
            return False
        if self.axis_r2 != other.axis_r2:
            return False
        if self.button_dpad_up != other.button_dpad_up:
            return False
        if self.button_dpad_down != other.button_dpad_down:
            return False
        if self.button_dpad_left != other.button_dpad_left:
            return False
        if self.button_dpad_right != other.button_dpad_right:
            return False
        if self.button_cross != other.button_cross:
            return False
        if self.button_circle != other.button_circle:
            return False
        if self.button_square != other.button_square:
            return False
        if self.button_triangle != other.button_triangle:
            return False
        if self.button_l1 != other.button_l1:
            return False
        if self.button_l2 != other.button_l2:
            return False
        if self.button_l3 != other.button_l3:
            return False
        if self.button_r1 != other.button_r1:
            return False
        if self.button_r2 != other.button_r2:
            return False
        if self.button_r3 != other.button_r3:
            return False
        if self.button_share != other.button_share:
            return False
        if self.button_options != other.button_options:
            return False
        if self.button_trackpad != other.button_trackpad:
            return False
        if self.button_ps != other.button_ps:
            return False
        if self.imu != other.imu:
            return False
        if self.battery_percentage != other.battery_percentage:
            return False
        if self.battery_full_charging != other.battery_full_charging:
            return False
        if self.touch0 != other.touch0:
            return False
        if self.touch1 != other.touch1:
            return False
        if self.plug_usb != other.plug_usb:
            return False
        if self.plug_audio != other.plug_audio:
            return False
        if self.plug_mic != other.plug_mic:
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
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def axis_left_x(self):
        """Message field 'axis_left_x'."""
        return self._axis_left_x

    @axis_left_x.setter
    def axis_left_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'axis_left_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'axis_left_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._axis_left_x = value

    @builtins.property
    def axis_left_y(self):
        """Message field 'axis_left_y'."""
        return self._axis_left_y

    @axis_left_y.setter
    def axis_left_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'axis_left_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'axis_left_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._axis_left_y = value

    @builtins.property
    def axis_right_x(self):
        """Message field 'axis_right_x'."""
        return self._axis_right_x

    @axis_right_x.setter
    def axis_right_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'axis_right_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'axis_right_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._axis_right_x = value

    @builtins.property
    def axis_right_y(self):
        """Message field 'axis_right_y'."""
        return self._axis_right_y

    @axis_right_y.setter
    def axis_right_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'axis_right_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'axis_right_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._axis_right_y = value

    @builtins.property
    def axis_l2(self):
        """Message field 'axis_l2'."""
        return self._axis_l2

    @axis_l2.setter
    def axis_l2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'axis_l2' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'axis_l2' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._axis_l2 = value

    @builtins.property
    def axis_r2(self):
        """Message field 'axis_r2'."""
        return self._axis_r2

    @axis_r2.setter
    def axis_r2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'axis_r2' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'axis_r2' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._axis_r2 = value

    @builtins.property
    def button_dpad_up(self):
        """Message field 'button_dpad_up'."""
        return self._button_dpad_up

    @button_dpad_up.setter
    def button_dpad_up(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'button_dpad_up' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'button_dpad_up' field must be an integer in [-2147483648, 2147483647]"
        self._button_dpad_up = value

    @builtins.property
    def button_dpad_down(self):
        """Message field 'button_dpad_down'."""
        return self._button_dpad_down

    @button_dpad_down.setter
    def button_dpad_down(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'button_dpad_down' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'button_dpad_down' field must be an integer in [-2147483648, 2147483647]"
        self._button_dpad_down = value

    @builtins.property
    def button_dpad_left(self):
        """Message field 'button_dpad_left'."""
        return self._button_dpad_left

    @button_dpad_left.setter
    def button_dpad_left(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'button_dpad_left' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'button_dpad_left' field must be an integer in [-2147483648, 2147483647]"
        self._button_dpad_left = value

    @builtins.property
    def button_dpad_right(self):
        """Message field 'button_dpad_right'."""
        return self._button_dpad_right

    @button_dpad_right.setter
    def button_dpad_right(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'button_dpad_right' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'button_dpad_right' field must be an integer in [-2147483648, 2147483647]"
        self._button_dpad_right = value

    @builtins.property
    def button_cross(self):
        """Message field 'button_cross'."""
        return self._button_cross

    @button_cross.setter
    def button_cross(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'button_cross' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'button_cross' field must be an integer in [-2147483648, 2147483647]"
        self._button_cross = value

    @builtins.property
    def button_circle(self):
        """Message field 'button_circle'."""
        return self._button_circle

    @button_circle.setter
    def button_circle(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'button_circle' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'button_circle' field must be an integer in [-2147483648, 2147483647]"
        self._button_circle = value

    @builtins.property
    def button_square(self):
        """Message field 'button_square'."""
        return self._button_square

    @button_square.setter
    def button_square(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'button_square' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'button_square' field must be an integer in [-2147483648, 2147483647]"
        self._button_square = value

    @builtins.property
    def button_triangle(self):
        """Message field 'button_triangle'."""
        return self._button_triangle

    @button_triangle.setter
    def button_triangle(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'button_triangle' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'button_triangle' field must be an integer in [-2147483648, 2147483647]"
        self._button_triangle = value

    @builtins.property
    def button_l1(self):
        """Message field 'button_l1'."""
        return self._button_l1

    @button_l1.setter
    def button_l1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'button_l1' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'button_l1' field must be an integer in [-2147483648, 2147483647]"
        self._button_l1 = value

    @builtins.property
    def button_l2(self):
        """Message field 'button_l2'."""
        return self._button_l2

    @button_l2.setter
    def button_l2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'button_l2' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'button_l2' field must be an integer in [-2147483648, 2147483647]"
        self._button_l2 = value

    @builtins.property
    def button_l3(self):
        """Message field 'button_l3'."""
        return self._button_l3

    @button_l3.setter
    def button_l3(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'button_l3' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'button_l3' field must be an integer in [-2147483648, 2147483647]"
        self._button_l3 = value

    @builtins.property
    def button_r1(self):
        """Message field 'button_r1'."""
        return self._button_r1

    @button_r1.setter
    def button_r1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'button_r1' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'button_r1' field must be an integer in [-2147483648, 2147483647]"
        self._button_r1 = value

    @builtins.property
    def button_r2(self):
        """Message field 'button_r2'."""
        return self._button_r2

    @button_r2.setter
    def button_r2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'button_r2' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'button_r2' field must be an integer in [-2147483648, 2147483647]"
        self._button_r2 = value

    @builtins.property
    def button_r3(self):
        """Message field 'button_r3'."""
        return self._button_r3

    @button_r3.setter
    def button_r3(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'button_r3' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'button_r3' field must be an integer in [-2147483648, 2147483647]"
        self._button_r3 = value

    @builtins.property
    def button_share(self):
        """Message field 'button_share'."""
        return self._button_share

    @button_share.setter
    def button_share(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'button_share' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'button_share' field must be an integer in [-2147483648, 2147483647]"
        self._button_share = value

    @builtins.property
    def button_options(self):
        """Message field 'button_options'."""
        return self._button_options

    @button_options.setter
    def button_options(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'button_options' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'button_options' field must be an integer in [-2147483648, 2147483647]"
        self._button_options = value

    @builtins.property
    def button_trackpad(self):
        """Message field 'button_trackpad'."""
        return self._button_trackpad

    @button_trackpad.setter
    def button_trackpad(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'button_trackpad' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'button_trackpad' field must be an integer in [-2147483648, 2147483647]"
        self._button_trackpad = value

    @builtins.property
    def button_ps(self):
        """Message field 'button_ps'."""
        return self._button_ps

    @button_ps.setter
    def button_ps(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'button_ps' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'button_ps' field must be an integer in [-2147483648, 2147483647]"
        self._button_ps = value

    @builtins.property
    def imu(self):
        """Message field 'imu'."""
        return self._imu

    @imu.setter
    def imu(self, value):
        if __debug__:
            from sensor_msgs.msg import Imu
            assert \
                isinstance(value, Imu), \
                "The 'imu' field must be a sub message of type 'Imu'"
        self._imu = value

    @builtins.property
    def battery_percentage(self):
        """Message field 'battery_percentage'."""
        return self._battery_percentage

    @battery_percentage.setter
    def battery_percentage(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'battery_percentage' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'battery_percentage' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._battery_percentage = value

    @builtins.property
    def battery_full_charging(self):
        """Message field 'battery_full_charging'."""
        return self._battery_full_charging

    @battery_full_charging.setter
    def battery_full_charging(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'battery_full_charging' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'battery_full_charging' field must be an integer in [-2147483648, 2147483647]"
        self._battery_full_charging = value

    @builtins.property
    def touch0(self):
        """Message field 'touch0'."""
        return self._touch0

    @touch0.setter
    def touch0(self, value):
        if __debug__:
            from ds4_driver_msgs.msg import Trackpad
            assert \
                isinstance(value, Trackpad), \
                "The 'touch0' field must be a sub message of type 'Trackpad'"
        self._touch0 = value

    @builtins.property
    def touch1(self):
        """Message field 'touch1'."""
        return self._touch1

    @touch1.setter
    def touch1(self, value):
        if __debug__:
            from ds4_driver_msgs.msg import Trackpad
            assert \
                isinstance(value, Trackpad), \
                "The 'touch1' field must be a sub message of type 'Trackpad'"
        self._touch1 = value

    @builtins.property
    def plug_usb(self):
        """Message field 'plug_usb'."""
        return self._plug_usb

    @plug_usb.setter
    def plug_usb(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'plug_usb' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'plug_usb' field must be an integer in [-2147483648, 2147483647]"
        self._plug_usb = value

    @builtins.property
    def plug_audio(self):
        """Message field 'plug_audio'."""
        return self._plug_audio

    @plug_audio.setter
    def plug_audio(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'plug_audio' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'plug_audio' field must be an integer in [-2147483648, 2147483647]"
        self._plug_audio = value

    @builtins.property
    def plug_mic(self):
        """Message field 'plug_mic'."""
        return self._plug_mic

    @plug_mic.setter
    def plug_mic(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'plug_mic' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'plug_mic' field must be an integer in [-2147483648, 2147483647]"
        self._plug_mic = value
