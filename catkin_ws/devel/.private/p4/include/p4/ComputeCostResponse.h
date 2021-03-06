// Generated by gencpp from file p4/ComputeCostResponse.msg
// DO NOT EDIT!


#ifndef P4_MESSAGE_COMPUTECOSTRESPONSE_H
#define P4_MESSAGE_COMPUTECOSTRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace p4
{
template <class ContainerAllocator>
struct ComputeCostResponse_
{
  typedef ComputeCostResponse_<ContainerAllocator> Type;

  ComputeCostResponse_()
    : cost(0.0)  {
    }
  ComputeCostResponse_(const ContainerAllocator& _alloc)
    : cost(0.0)  {
  (void)_alloc;
    }



   typedef double _cost_type;
  _cost_type cost;





  typedef boost::shared_ptr< ::p4::ComputeCostResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::p4::ComputeCostResponse_<ContainerAllocator> const> ConstPtr;

}; // struct ComputeCostResponse_

typedef ::p4::ComputeCostResponse_<std::allocator<void> > ComputeCostResponse;

typedef boost::shared_ptr< ::p4::ComputeCostResponse > ComputeCostResponsePtr;
typedef boost::shared_ptr< ::p4::ComputeCostResponse const> ComputeCostResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::p4::ComputeCostResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::p4::ComputeCostResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace p4

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'p4': ['/home/cs4750/catkin_ws/src/p4/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::p4::ComputeCostResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::p4::ComputeCostResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::p4::ComputeCostResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::p4::ComputeCostResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::p4::ComputeCostResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::p4::ComputeCostResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::p4::ComputeCostResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bff9a2439f6a3b435a395e2c861c4c14";
  }

  static const char* value(const ::p4::ComputeCostResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xbff9a2439f6a3b43ULL;
  static const uint64_t static_value2 = 0x5a395e2c861c4c14ULL;
};

template<class ContainerAllocator>
struct DataType< ::p4::ComputeCostResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "p4/ComputeCostResponse";
  }

  static const char* value(const ::p4::ComputeCostResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::p4::ComputeCostResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 cost\n\
\n\
";
  }

  static const char* value(const ::p4::ComputeCostResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::p4::ComputeCostResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.cost);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ComputeCostResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::p4::ComputeCostResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::p4::ComputeCostResponse_<ContainerAllocator>& v)
  {
    s << indent << "cost: ";
    Printer<double>::stream(s, indent + "  ", v.cost);
  }
};

} // namespace message_operations
} // namespace ros

#endif // P4_MESSAGE_COMPUTECOSTRESPONSE_H
