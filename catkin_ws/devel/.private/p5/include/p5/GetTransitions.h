// Generated by gencpp from file p5/GetTransitions.msg
// DO NOT EDIT!


#ifndef P5_MESSAGE_GETTRANSITIONS_H
#define P5_MESSAGE_GETTRANSITIONS_H

#include <ros/service_traits.h>


#include <p5/GetTransitionsRequest.h>
#include <p5/GetTransitionsResponse.h>


namespace p5
{

struct GetTransitions
{

typedef GetTransitionsRequest Request;
typedef GetTransitionsResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetTransitions
} // namespace p5


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::p5::GetTransitions > {
  static const char* value()
  {
    return "1fab3630f0a783dcf6c5e57c78db46b6";
  }

  static const char* value(const ::p5::GetTransitions&) { return value(); }
};

template<>
struct DataType< ::p5::GetTransitions > {
  static const char* value()
  {
    return "p5/GetTransitions";
  }

  static const char* value(const ::p5::GetTransitions&) { return value(); }
};


// service_traits::MD5Sum< ::p5::GetTransitionsRequest> should match 
// service_traits::MD5Sum< ::p5::GetTransitions > 
template<>
struct MD5Sum< ::p5::GetTransitionsRequest>
{
  static const char* value()
  {
    return MD5Sum< ::p5::GetTransitions >::value();
  }
  static const char* value(const ::p5::GetTransitionsRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::p5::GetTransitionsRequest> should match 
// service_traits::DataType< ::p5::GetTransitions > 
template<>
struct DataType< ::p5::GetTransitionsRequest>
{
  static const char* value()
  {
    return DataType< ::p5::GetTransitions >::value();
  }
  static const char* value(const ::p5::GetTransitionsRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::p5::GetTransitionsResponse> should match 
// service_traits::MD5Sum< ::p5::GetTransitions > 
template<>
struct MD5Sum< ::p5::GetTransitionsResponse>
{
  static const char* value()
  {
    return MD5Sum< ::p5::GetTransitions >::value();
  }
  static const char* value(const ::p5::GetTransitionsResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::p5::GetTransitionsResponse> should match 
// service_traits::DataType< ::p5::GetTransitions > 
template<>
struct DataType< ::p5::GetTransitionsResponse>
{
  static const char* value()
  {
    return DataType< ::p5::GetTransitions >::value();
  }
  static const char* value(const ::p5::GetTransitionsResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // P5_MESSAGE_GETTRANSITIONS_H
