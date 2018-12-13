// Generated by gencpp from file p5/SenseBallRequest.msg
// DO NOT EDIT!


#ifndef P5_MESSAGE_SENSEBALLREQUEST_H
#define P5_MESSAGE_SENSEBALLREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace p5
{
template <class ContainerAllocator>
struct SenseBallRequest_
{
  typedef SenseBallRequest_<ContainerAllocator> Type;

  SenseBallRequest_()
    : prior()  {
      prior.assign(0.0);
  }
  SenseBallRequest_(const ContainerAllocator& _alloc)
    : prior()  {
  (void)_alloc;
      prior.assign(0.0);
  }



   typedef boost::array<double, 5>  _prior_type;
  _prior_type prior;





  typedef boost::shared_ptr< ::p5::SenseBallRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::p5::SenseBallRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SenseBallRequest_

typedef ::p5::SenseBallRequest_<std::allocator<void> > SenseBallRequest;

typedef boost::shared_ptr< ::p5::SenseBallRequest > SenseBallRequestPtr;
typedef boost::shared_ptr< ::p5::SenseBallRequest const> SenseBallRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::p5::SenseBallRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::p5::SenseBallRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace p5

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'p5': ['/home/cs4750/catkin_ws/src/p5/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::p5::SenseBallRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::p5::SenseBallRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::p5::SenseBallRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::p5::SenseBallRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::p5::SenseBallRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::p5::SenseBallRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::p5::SenseBallRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7444b4a4f36af2b873aa897e7383d0f7";
  }

  static const char* value(const ::p5::SenseBallRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7444b4a4f36af2b8ULL;
  static const uint64_t static_value2 = 0x73aa897e7383d0f7ULL;
};

template<class ContainerAllocator>
struct DataType< ::p5::SenseBallRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "p5/SenseBallRequest";
  }

  static const char* value(const ::p5::SenseBallRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::p5::SenseBallRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64[5] prior\n\
";
  }

  static const char* value(const ::p5::SenseBallRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::p5::SenseBallRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.prior);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SenseBallRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::p5::SenseBallRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::p5::SenseBallRequest_<ContainerAllocator>& v)
  {
    s << indent << "prior[]" << std::endl;
    for (size_t i = 0; i < v.prior.size(); ++i)
    {
      s << indent << "  prior[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.prior[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // P5_MESSAGE_SENSEBALLREQUEST_H