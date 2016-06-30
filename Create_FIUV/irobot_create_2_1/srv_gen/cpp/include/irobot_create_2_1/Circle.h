/* Auto-generated by genmsg_cpp for file /tmp/buildd/ros-groovy-brown-drivers-0.0.9/debian/ros-groovy-brown-drivers/opt/ros/groovy/stacks/brown_drivers/irobot_create_2_1/srv/Circle.srv */
#ifndef IROBOT_CREATE_2_1_SERVICE_CIRCLE_H
#define IROBOT_CREATE_2_1_SERVICE_CIRCLE_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"

#include "ros/service_traits.h"




namespace irobot_create_2_1
{
template <class ContainerAllocator>
struct CircleRequest_ {
  typedef CircleRequest_<ContainerAllocator> Type;

  CircleRequest_()
  : clear(false)
  , speed(0)
  , radius(0)
  {
  }

  CircleRequest_(const ContainerAllocator& _alloc)
  : clear(false)
  , speed(0)
  , radius(0)
  {
  }

  typedef uint8_t _clear_type;
  uint8_t clear;

  typedef int16_t _speed_type;
  int16_t speed;

  typedef int16_t _radius_type;
  int16_t radius;


  typedef boost::shared_ptr< ::irobot_create_2_1::CircleRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::irobot_create_2_1::CircleRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct CircleRequest
typedef  ::irobot_create_2_1::CircleRequest_<std::allocator<void> > CircleRequest;

typedef boost::shared_ptr< ::irobot_create_2_1::CircleRequest> CircleRequestPtr;
typedef boost::shared_ptr< ::irobot_create_2_1::CircleRequest const> CircleRequestConstPtr;



template <class ContainerAllocator>
struct CircleResponse_ {
  typedef CircleResponse_<ContainerAllocator> Type;

  CircleResponse_()
  : success(false)
  {
  }

  CircleResponse_(const ContainerAllocator& _alloc)
  : success(false)
  {
  }

  typedef uint8_t _success_type;
  uint8_t success;


  typedef boost::shared_ptr< ::irobot_create_2_1::CircleResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::irobot_create_2_1::CircleResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct CircleResponse
typedef  ::irobot_create_2_1::CircleResponse_<std::allocator<void> > CircleResponse;

typedef boost::shared_ptr< ::irobot_create_2_1::CircleResponse> CircleResponsePtr;
typedef boost::shared_ptr< ::irobot_create_2_1::CircleResponse const> CircleResponseConstPtr;


struct Circle
{

typedef CircleRequest Request;
typedef CircleResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct Circle
} // namespace irobot_create_2_1

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::irobot_create_2_1::CircleRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::irobot_create_2_1::CircleRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::irobot_create_2_1::CircleRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "872db809bab2dd71ca7c9514ea40077e";
  }

  static const char* value(const  ::irobot_create_2_1::CircleRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x872db809bab2dd71ULL;
  static const uint64_t static_value2 = 0xca7c9514ea40077eULL;
};

template<class ContainerAllocator>
struct DataType< ::irobot_create_2_1::CircleRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "irobot_create_2_1/CircleRequest";
  }

  static const char* value(const  ::irobot_create_2_1::CircleRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::irobot_create_2_1::CircleRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "bool clear\n\
int16 speed\n\
int16 radius\n\
\n\
";
  }

  static const char* value(const  ::irobot_create_2_1::CircleRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::irobot_create_2_1::CircleRequest_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::irobot_create_2_1::CircleResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::irobot_create_2_1::CircleResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::irobot_create_2_1::CircleResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "358e233cde0c8a8bcfea4ce193f8fc15";
  }

  static const char* value(const  ::irobot_create_2_1::CircleResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x358e233cde0c8a8bULL;
  static const uint64_t static_value2 = 0xcfea4ce193f8fc15ULL;
};

template<class ContainerAllocator>
struct DataType< ::irobot_create_2_1::CircleResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "irobot_create_2_1/CircleResponse";
  }

  static const char* value(const  ::irobot_create_2_1::CircleResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::irobot_create_2_1::CircleResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "bool success\n\
\n\
\n\
";
  }

  static const char* value(const  ::irobot_create_2_1::CircleResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::irobot_create_2_1::CircleResponse_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::irobot_create_2_1::CircleRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.clear);
    stream.next(m.speed);
    stream.next(m.radius);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct CircleRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::irobot_create_2_1::CircleResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.success);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct CircleResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<irobot_create_2_1::Circle> {
  static const char* value() 
  {
    return "9b739275f5f2092a5494b3d00328a8de";
  }

  static const char* value(const irobot_create_2_1::Circle&) { return value(); } 
};

template<>
struct DataType<irobot_create_2_1::Circle> {
  static const char* value() 
  {
    return "irobot_create_2_1/Circle";
  }

  static const char* value(const irobot_create_2_1::Circle&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<irobot_create_2_1::CircleRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "9b739275f5f2092a5494b3d00328a8de";
  }

  static const char* value(const irobot_create_2_1::CircleRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<irobot_create_2_1::CircleRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "irobot_create_2_1/Circle";
  }

  static const char* value(const irobot_create_2_1::CircleRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<irobot_create_2_1::CircleResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "9b739275f5f2092a5494b3d00328a8de";
  }

  static const char* value(const irobot_create_2_1::CircleResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<irobot_create_2_1::CircleResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "irobot_create_2_1/Circle";
  }

  static const char* value(const irobot_create_2_1::CircleResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // IROBOT_CREATE_2_1_SERVICE_CIRCLE_H

