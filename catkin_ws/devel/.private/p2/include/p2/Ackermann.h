// Generated by gencpp from file p2/Ackermann.msg
// DO NOT EDIT!


#ifndef P2_MESSAGE_ACKERMANN_H
#define P2_MESSAGE_ACKERMANN_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace p2
{
template <class ContainerAllocator>
struct Ackermann_
{
  typedef Ackermann_<ContainerAllocator> Type;

  Ackermann_()
    : steering_angle(0.0)
    , vel(0.0)  {
    }
  Ackermann_(const ContainerAllocator& _alloc)
    : steering_angle(0.0)
    , vel(0.0)  {
  (void)_alloc;
    }



   typedef double _steering_angle_type;
  _steering_angle_type steering_angle;

   typedef double _vel_type;
  _vel_type vel;





  typedef boost::shared_ptr< ::p2::Ackermann_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::p2::Ackermann_<ContainerAllocator> const> ConstPtr;

}; // struct Ackermann_

typedef ::p2::Ackermann_<std::allocator<void> > Ackermann;

typedef boost::shared_ptr< ::p2::Ackermann > AckermannPtr;
typedef boost::shared_ptr< ::p2::Ackermann const> AckermannConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::p2::Ackermann_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::p2::Ackermann_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace p2

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'p2': ['/home/cs4750/catkin_ws/src/p2/msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::p2::Ackermann_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::p2::Ackermann_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::p2::Ackermann_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::p2::Ackermann_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::p2::Ackermann_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::p2::Ackermann_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::p2::Ackermann_<ContainerAllocator> >
{
  static const char* value()
  {
    return "61c7e29a36f91d9c196a9722234d7472";
  }

  static const char* value(const ::p2::Ackermann_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x61c7e29a36f91d9cULL;
  static const uint64_t static_value2 = 0x196a9722234d7472ULL;
};

template<class ContainerAllocator>
struct DataType< ::p2::Ackermann_<ContainerAllocator> >
{
  static const char* value()
  {
    return "p2/Ackermann";
  }

  static const char* value(const ::p2::Ackermann_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::p2::Ackermann_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 steering_angle\n\
float64 vel\n\
";
  }

  static const char* value(const ::p2::Ackermann_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::p2::Ackermann_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.steering_angle);
      stream.next(m.vel);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Ackermann_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::p2::Ackermann_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::p2::Ackermann_<ContainerAllocator>& v)
  {
    s << indent << "steering_angle: ";
    Printer<double>::stream(s, indent + "  ", v.steering_angle);
    s << indent << "vel: ";
    Printer<double>::stream(s, indent + "  ", v.vel);
  }
};

} // namespace message_operations
} // namespace ros

#endif // P2_MESSAGE_ACKERMANN_H