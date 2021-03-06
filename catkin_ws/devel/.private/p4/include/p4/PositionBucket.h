// Generated by gencpp from file p4/PositionBucket.msg
// DO NOT EDIT!


#ifndef P4_MESSAGE_POSITIONBUCKET_H
#define P4_MESSAGE_POSITIONBUCKET_H

#include <ros/service_traits.h>


#include <p4/PositionBucketRequest.h>
#include <p4/PositionBucketResponse.h>


namespace p4
{

struct PositionBucket
{

typedef PositionBucketRequest Request;
typedef PositionBucketResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct PositionBucket
} // namespace p4


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::p4::PositionBucket > {
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::p4::PositionBucket&) { return value(); }
};

template<>
struct DataType< ::p4::PositionBucket > {
  static const char* value()
  {
    return "p4/PositionBucket";
  }

  static const char* value(const ::p4::PositionBucket&) { return value(); }
};


// service_traits::MD5Sum< ::p4::PositionBucketRequest> should match 
// service_traits::MD5Sum< ::p4::PositionBucket > 
template<>
struct MD5Sum< ::p4::PositionBucketRequest>
{
  static const char* value()
  {
    return MD5Sum< ::p4::PositionBucket >::value();
  }
  static const char* value(const ::p4::PositionBucketRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::p4::PositionBucketRequest> should match 
// service_traits::DataType< ::p4::PositionBucket > 
template<>
struct DataType< ::p4::PositionBucketRequest>
{
  static const char* value()
  {
    return DataType< ::p4::PositionBucket >::value();
  }
  static const char* value(const ::p4::PositionBucketRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::p4::PositionBucketResponse> should match 
// service_traits::MD5Sum< ::p4::PositionBucket > 
template<>
struct MD5Sum< ::p4::PositionBucketResponse>
{
  static const char* value()
  {
    return MD5Sum< ::p4::PositionBucket >::value();
  }
  static const char* value(const ::p4::PositionBucketResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::p4::PositionBucketResponse> should match 
// service_traits::DataType< ::p4::PositionBucket > 
template<>
struct DataType< ::p4::PositionBucketResponse>
{
  static const char* value()
  {
    return DataType< ::p4::PositionBucket >::value();
  }
  static const char* value(const ::p4::PositionBucketResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // P4_MESSAGE_POSITIONBUCKET_H
