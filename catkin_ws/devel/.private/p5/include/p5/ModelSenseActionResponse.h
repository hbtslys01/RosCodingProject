// Generated by gencpp from file p5/ModelSenseActionResponse.msg
// DO NOT EDIT!


#ifndef P5_MESSAGE_MODELSENSEACTIONRESPONSE_H
#define P5_MESSAGE_MODELSENSEACTIONRESPONSE_H


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
struct ModelSenseActionResponse_
{
  typedef ModelSenseActionResponse_<ContainerAllocator> Type;

  ModelSenseActionResponse_()
    : distribution()  {
      distribution.assign(0.0);
  }
  ModelSenseActionResponse_(const ContainerAllocator& _alloc)
    : distribution()  {
  (void)_alloc;
      distribution.assign(0.0);
  }



   typedef boost::array<double, 5>  _distribution_type;
  _distribution_type distribution;





  typedef boost::shared_ptr< ::p5::ModelSenseActionResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::p5::ModelSenseActionResponse_<ContainerAllocator> const> ConstPtr;

}; // struct ModelSenseActionResponse_

typedef ::p5::ModelSenseActionResponse_<std::allocator<void> > ModelSenseActionResponse;

typedef boost::shared_ptr< ::p5::ModelSenseActionResponse > ModelSenseActionResponsePtr;
typedef boost::shared_ptr< ::p5::ModelSenseActionResponse const> ModelSenseActionResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::p5::ModelSenseActionResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::p5::ModelSenseActionResponse_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::p5::ModelSenseActionResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::p5::ModelSenseActionResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::p5::ModelSenseActionResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::p5::ModelSenseActionResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::p5::ModelSenseActionResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::p5::ModelSenseActionResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::p5::ModelSenseActionResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2d0b9b01cbf7a806a1b65f8eedcd1a6b";
  }

  static const char* value(const ::p5::ModelSenseActionResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2d0b9b01cbf7a806ULL;
  static const uint64_t static_value2 = 0xa1b65f8eedcd1a6bULL;
};

template<class ContainerAllocator>
struct DataType< ::p5::ModelSenseActionResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "p5/ModelSenseActionResponse";
  }

  static const char* value(const ::p5::ModelSenseActionResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::p5::ModelSenseActionResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64[5] distribution\n\
\n\
";
  }

  static const char* value(const ::p5::ModelSenseActionResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::p5::ModelSenseActionResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.distribution);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ModelSenseActionResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::p5::ModelSenseActionResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::p5::ModelSenseActionResponse_<ContainerAllocator>& v)
  {
    s << indent << "distribution[]" << std::endl;
    for (size_t i = 0; i < v.distribution.size(); ++i)
    {
      s << indent << "  distribution[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.distribution[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // P5_MESSAGE_MODELSENSEACTIONRESPONSE_H