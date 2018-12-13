# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from p5/ClosestPointPathRequest.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import geometry_msgs.msg

class ClosestPointPathRequest(genpy.Message):
  _md5sum = "69132ef72062833147deff265b0303b6"
  _type = "p5/ClosestPointPathRequest"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """geometry_msgs/Point robot_position
geometry_msgs/Point[] path

================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z
"""
  __slots__ = ['robot_position','path']
  _slot_types = ['geometry_msgs/Point','geometry_msgs/Point[]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       robot_position,path

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(ClosestPointPathRequest, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.robot_position is None:
        self.robot_position = geometry_msgs.msg.Point()
      if self.path is None:
        self.path = []
    else:
      self.robot_position = geometry_msgs.msg.Point()
      self.path = []

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_3d().pack(_x.robot_position.x, _x.robot_position.y, _x.robot_position.z))
      length = len(self.path)
      buff.write(_struct_I.pack(length))
      for val1 in self.path:
        _x = val1
        buff.write(_get_struct_3d().pack(_x.x, _x.y, _x.z))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.robot_position is None:
        self.robot_position = geometry_msgs.msg.Point()
      if self.path is None:
        self.path = None
      end = 0
      _x = self
      start = end
      end += 24
      (_x.robot_position.x, _x.robot_position.y, _x.robot_position.z,) = _get_struct_3d().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.path = []
      for i in range(0, length):
        val1 = geometry_msgs.msg.Point()
        _x = val1
        start = end
        end += 24
        (_x.x, _x.y, _x.z,) = _get_struct_3d().unpack(str[start:end])
        self.path.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_3d().pack(_x.robot_position.x, _x.robot_position.y, _x.robot_position.z))
      length = len(self.path)
      buff.write(_struct_I.pack(length))
      for val1 in self.path:
        _x = val1
        buff.write(_get_struct_3d().pack(_x.x, _x.y, _x.z))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.robot_position is None:
        self.robot_position = geometry_msgs.msg.Point()
      if self.path is None:
        self.path = None
      end = 0
      _x = self
      start = end
      end += 24
      (_x.robot_position.x, _x.robot_position.y, _x.robot_position.z,) = _get_struct_3d().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.path = []
      for i in range(0, length):
        val1 = geometry_msgs.msg.Point()
        _x = val1
        start = end
        end += 24
        (_x.x, _x.y, _x.z,) = _get_struct_3d().unpack(str[start:end])
        self.path.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_3d = None
def _get_struct_3d():
    global _struct_3d
    if _struct_3d is None:
        _struct_3d = struct.Struct("<3d")
    return _struct_3d
# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from p5/ClosestPointPathResponse.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import geometry_msgs.msg
import std_msgs.msg

class ClosestPointPathResponse(genpy.Message):
  _md5sum = "1ebc6dc89852fd036310e5b46c218952"
  _type = "p5/ClosestPointPathResponse"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """geometry_msgs/Point closest_point
std_msgs/Float32 path_position
std_msgs/Float32 dist_to_path


================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z

================================================================================
MSG: std_msgs/Float32
float32 data"""
  __slots__ = ['closest_point','path_position','dist_to_path']
  _slot_types = ['geometry_msgs/Point','std_msgs/Float32','std_msgs/Float32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       closest_point,path_position,dist_to_path

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(ClosestPointPathResponse, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.closest_point is None:
        self.closest_point = geometry_msgs.msg.Point()
      if self.path_position is None:
        self.path_position = std_msgs.msg.Float32()
      if self.dist_to_path is None:
        self.dist_to_path = std_msgs.msg.Float32()
    else:
      self.closest_point = geometry_msgs.msg.Point()
      self.path_position = std_msgs.msg.Float32()
      self.dist_to_path = std_msgs.msg.Float32()

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_3d2f().pack(_x.closest_point.x, _x.closest_point.y, _x.closest_point.z, _x.path_position.data, _x.dist_to_path.data))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.closest_point is None:
        self.closest_point = geometry_msgs.msg.Point()
      if self.path_position is None:
        self.path_position = std_msgs.msg.Float32()
      if self.dist_to_path is None:
        self.dist_to_path = std_msgs.msg.Float32()
      end = 0
      _x = self
      start = end
      end += 32
      (_x.closest_point.x, _x.closest_point.y, _x.closest_point.z, _x.path_position.data, _x.dist_to_path.data,) = _get_struct_3d2f().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_3d2f().pack(_x.closest_point.x, _x.closest_point.y, _x.closest_point.z, _x.path_position.data, _x.dist_to_path.data))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.closest_point is None:
        self.closest_point = geometry_msgs.msg.Point()
      if self.path_position is None:
        self.path_position = std_msgs.msg.Float32()
      if self.dist_to_path is None:
        self.dist_to_path = std_msgs.msg.Float32()
      end = 0
      _x = self
      start = end
      end += 32
      (_x.closest_point.x, _x.closest_point.y, _x.closest_point.z, _x.path_position.data, _x.dist_to_path.data,) = _get_struct_3d2f().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_3d2f = None
def _get_struct_3d2f():
    global _struct_3d2f
    if _struct_3d2f is None:
        _struct_3d2f = struct.Struct("<3d2f")
    return _struct_3d2f
class ClosestPointPath(object):
  _type          = 'p5/ClosestPointPath'
  _md5sum = 'a4eb7978da311d6bb271e96cc9f6a8e7'
  _request_class  = ClosestPointPathRequest
  _response_class = ClosestPointPathResponse