// Generated by gencpp from file april_detection/AprilTagDetectionArray.msg
// DO NOT EDIT!


#ifndef APRIL_DETECTION_MESSAGE_APRILTAGDETECTIONARRAY_H
#define APRIL_DETECTION_MESSAGE_APRILTAGDETECTIONARRAY_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <april_detection/AprilTagDetection.h>

namespace april_detection
{
template <class ContainerAllocator>
struct AprilTagDetectionArray_
{
  typedef AprilTagDetectionArray_<ContainerAllocator> Type;

  AprilTagDetectionArray_()
    : header()
    , detections()  {
    }
  AprilTagDetectionArray_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , detections(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::april_detection::AprilTagDetection_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::april_detection::AprilTagDetection_<ContainerAllocator> >::other >  _detections_type;
  _detections_type detections;





  typedef boost::shared_ptr< ::april_detection::AprilTagDetectionArray_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::april_detection::AprilTagDetectionArray_<ContainerAllocator> const> ConstPtr;

}; // struct AprilTagDetectionArray_

typedef ::april_detection::AprilTagDetectionArray_<std::allocator<void> > AprilTagDetectionArray;

typedef boost::shared_ptr< ::april_detection::AprilTagDetectionArray > AprilTagDetectionArrayPtr;
typedef boost::shared_ptr< ::april_detection::AprilTagDetectionArray const> AprilTagDetectionArrayConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::april_detection::AprilTagDetectionArray_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::april_detection::AprilTagDetectionArray_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::april_detection::AprilTagDetectionArray_<ContainerAllocator1> & lhs, const ::april_detection::AprilTagDetectionArray_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.detections == rhs.detections;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::april_detection::AprilTagDetectionArray_<ContainerAllocator1> & lhs, const ::april_detection::AprilTagDetectionArray_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace april_detection

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::april_detection::AprilTagDetectionArray_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::april_detection::AprilTagDetectionArray_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::april_detection::AprilTagDetectionArray_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::april_detection::AprilTagDetectionArray_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::april_detection::AprilTagDetectionArray_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::april_detection::AprilTagDetectionArray_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::april_detection::AprilTagDetectionArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3ab7cc88f4b1f1ec383798e746c860c7";
  }

  static const char* value(const ::april_detection::AprilTagDetectionArray_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3ab7cc88f4b1f1ecULL;
  static const uint64_t static_value2 = 0x383798e746c860c7ULL;
};

template<class ContainerAllocator>
struct DataType< ::april_detection::AprilTagDetectionArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "april_detection/AprilTagDetectionArray";
  }

  static const char* value(const ::april_detection::AprilTagDetectionArray_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::april_detection::AprilTagDetectionArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# List of all AprilTag detections from a single camera frame.\n"
"Header header\n"
"AprilTagDetection[] detections\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: april_detection/AprilTagDetection\n"
"# Message storing raw 2D and 3D information about a single AprilTag detection.\n"
"Header header\n"
"int32 id                           # id of AprilTag (not necessarily unique)\n"
"geometry_msgs/Point32[4] corners2d  # AprilTag corners in image\n"
"float32 tag_size                    # tag size in m\n"
"geometry_msgs/Pose pose             # pose of the marker in the camera frame\n"
"================================================================================\n"
"MSG: geometry_msgs/Point32\n"
"# This contains the position of a point in free space(with 32 bits of precision).\n"
"# It is recommeded to use Point wherever possible instead of Point32.  \n"
"# \n"
"# This recommendation is to promote interoperability.  \n"
"#\n"
"# This message is designed to take up less space when sending\n"
"# lots of points at once, as in the case of a PointCloud.  \n"
"\n"
"float32 x\n"
"float32 y\n"
"float32 z\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
;
  }

  static const char* value(const ::april_detection::AprilTagDetectionArray_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::april_detection::AprilTagDetectionArray_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.detections);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct AprilTagDetectionArray_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::april_detection::AprilTagDetectionArray_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::april_detection::AprilTagDetectionArray_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "detections[]" << std::endl;
    for (size_t i = 0; i < v.detections.size(); ++i)
    {
      s << indent << "  detections[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::april_detection::AprilTagDetection_<ContainerAllocator> >::stream(s, indent + "    ", v.detections[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // APRIL_DETECTION_MESSAGE_APRILTAGDETECTIONARRAY_H
