// Generated by gencpp from file p5/LocateBall.msg
// DO NOT EDIT!


#ifndef P5_MESSAGE_LOCATEBALL_H
#define P5_MESSAGE_LOCATEBALL_H

#include <ros/service_traits.h>


#include <p5/LocateBallRequest.h>
#include <p5/LocateBallResponse.h>


namespace p5
{

struct LocateBall
{

typedef LocateBallRequest Request;
typedef LocateBallResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct LocateBall
} // namespace p5


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::p5::LocateBall > {
  static const char* value()
  {
    return "65f6ab9ab3fd57fefb3b520f3851d0af";
  }

  static const char* value(const ::p5::LocateBall&) { return value(); }
};

template<>
struct DataType< ::p5::LocateBall > {
  static const char* value()
  {
    return "p5/LocateBall";
  }

  static const char* value(const ::p5::LocateBall&) { return value(); }
};


// service_traits::MD5Sum< ::p5::LocateBallRequest> should match 
// service_traits::MD5Sum< ::p5::LocateBall > 
template<>
struct MD5Sum< ::p5::LocateBallRequest>
{
  static const char* value()
  {
    return MD5Sum< ::p5::LocateBall >::value();
  }
  static const char* value(const ::p5::LocateBallRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::p5::LocateBallRequest> should match 
// service_traits::DataType< ::p5::LocateBall > 
template<>
struct DataType< ::p5::LocateBallRequest>
{
  static const char* value()
  {
    return DataType< ::p5::LocateBall >::value();
  }
  static const char* value(const ::p5::LocateBallRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::p5::LocateBallResponse> should match 
// service_traits::MD5Sum< ::p5::LocateBall > 
template<>
struct MD5Sum< ::p5::LocateBallResponse>
{
  static const char* value()
  {
    return MD5Sum< ::p5::LocateBall >::value();
  }
  static const char* value(const ::p5::LocateBallResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::p5::LocateBallResponse> should match 
// service_traits::DataType< ::p5::LocateBall > 
template<>
struct DataType< ::p5::LocateBallResponse>
{
  static const char* value()
  {
    return DataType< ::p5::LocateBall >::value();
  }
  static const char* value(const ::p5::LocateBallResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // P5_MESSAGE_LOCATEBALL_H