// Generated by gencpp from file p4/FollowPath.msg
// DO NOT EDIT!


#ifndef P4_MESSAGE_FOLLOWPATH_H
#define P4_MESSAGE_FOLLOWPATH_H

#include <ros/service_traits.h>


#include <p4/FollowPathRequest.h>
#include <p4/FollowPathResponse.h>


namespace p4
{

struct FollowPath
{

typedef FollowPathRequest Request;
typedef FollowPathResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct FollowPath
} // namespace p4


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::p4::FollowPath > {
  static const char* value()
  {
    return "b58b29f4d3d5430fc9d5efc2f5262786";
  }

  static const char* value(const ::p4::FollowPath&) { return value(); }
};

template<>
struct DataType< ::p4::FollowPath > {
  static const char* value()
  {
    return "p4/FollowPath";
  }

  static const char* value(const ::p4::FollowPath&) { return value(); }
};


// service_traits::MD5Sum< ::p4::FollowPathRequest> should match 
// service_traits::MD5Sum< ::p4::FollowPath > 
template<>
struct MD5Sum< ::p4::FollowPathRequest>
{
  static const char* value()
  {
    return MD5Sum< ::p4::FollowPath >::value();
  }
  static const char* value(const ::p4::FollowPathRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::p4::FollowPathRequest> should match 
// service_traits::DataType< ::p4::FollowPath > 
template<>
struct DataType< ::p4::FollowPathRequest>
{
  static const char* value()
  {
    return DataType< ::p4::FollowPath >::value();
  }
  static const char* value(const ::p4::FollowPathRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::p4::FollowPathResponse> should match 
// service_traits::MD5Sum< ::p4::FollowPath > 
template<>
struct MD5Sum< ::p4::FollowPathResponse>
{
  static const char* value()
  {
    return MD5Sum< ::p4::FollowPath >::value();
  }
  static const char* value(const ::p4::FollowPathResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::p4::FollowPathResponse> should match 
// service_traits::DataType< ::p4::FollowPath > 
template<>
struct DataType< ::p4::FollowPathResponse>
{
  static const char* value()
  {
    return DataType< ::p4::FollowPath >::value();
  }
  static const char* value(const ::p4::FollowPathResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // P4_MESSAGE_FOLLOWPATH_H
