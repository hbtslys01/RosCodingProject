// Generated by gencpp from file p5/ComputeEntropy.msg
// DO NOT EDIT!


#ifndef P5_MESSAGE_COMPUTEENTROPY_H
#define P5_MESSAGE_COMPUTEENTROPY_H

#include <ros/service_traits.h>


#include <p5/ComputeEntropyRequest.h>
#include <p5/ComputeEntropyResponse.h>


namespace p5
{

struct ComputeEntropy
{

typedef ComputeEntropyRequest Request;
typedef ComputeEntropyResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct ComputeEntropy
} // namespace p5


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::p5::ComputeEntropy > {
  static const char* value()
  {
    return "684ca74828f5f8845f5e461f587028b2";
  }

  static const char* value(const ::p5::ComputeEntropy&) { return value(); }
};

template<>
struct DataType< ::p5::ComputeEntropy > {
  static const char* value()
  {
    return "p5/ComputeEntropy";
  }

  static const char* value(const ::p5::ComputeEntropy&) { return value(); }
};


// service_traits::MD5Sum< ::p5::ComputeEntropyRequest> should match 
// service_traits::MD5Sum< ::p5::ComputeEntropy > 
template<>
struct MD5Sum< ::p5::ComputeEntropyRequest>
{
  static const char* value()
  {
    return MD5Sum< ::p5::ComputeEntropy >::value();
  }
  static const char* value(const ::p5::ComputeEntropyRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::p5::ComputeEntropyRequest> should match 
// service_traits::DataType< ::p5::ComputeEntropy > 
template<>
struct DataType< ::p5::ComputeEntropyRequest>
{
  static const char* value()
  {
    return DataType< ::p5::ComputeEntropy >::value();
  }
  static const char* value(const ::p5::ComputeEntropyRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::p5::ComputeEntropyResponse> should match 
// service_traits::MD5Sum< ::p5::ComputeEntropy > 
template<>
struct MD5Sum< ::p5::ComputeEntropyResponse>
{
  static const char* value()
  {
    return MD5Sum< ::p5::ComputeEntropy >::value();
  }
  static const char* value(const ::p5::ComputeEntropyResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::p5::ComputeEntropyResponse> should match 
// service_traits::DataType< ::p5::ComputeEntropy > 
template<>
struct DataType< ::p5::ComputeEntropyResponse>
{
  static const char* value()
  {
    return DataType< ::p5::ComputeEntropy >::value();
  }
  static const char* value(const ::p5::ComputeEntropyResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // P5_MESSAGE_COMPUTEENTROPY_H
