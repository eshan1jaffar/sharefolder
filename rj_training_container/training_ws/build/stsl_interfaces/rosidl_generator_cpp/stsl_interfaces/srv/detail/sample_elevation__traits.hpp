// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from stsl_interfaces:srv/SampleElevation.idl
// generated code does not contain a copyright notice

#ifndef STSL_INTERFACES__SRV__DETAIL__SAMPLE_ELEVATION__TRAITS_HPP_
#define STSL_INTERFACES__SRV__DETAIL__SAMPLE_ELEVATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "stsl_interfaces/srv/detail/sample_elevation__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace stsl_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SampleElevation_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SampleElevation_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SampleElevation_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace stsl_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use stsl_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const stsl_interfaces::srv::SampleElevation_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  stsl_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use stsl_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const stsl_interfaces::srv::SampleElevation_Request & msg)
{
  return stsl_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<stsl_interfaces::srv::SampleElevation_Request>()
{
  return "stsl_interfaces::srv::SampleElevation_Request";
}

template<>
inline const char * name<stsl_interfaces::srv::SampleElevation_Request>()
{
  return "stsl_interfaces/srv/SampleElevation_Request";
}

template<>
struct has_fixed_size<stsl_interfaces::srv::SampleElevation_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<stsl_interfaces::srv::SampleElevation_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<stsl_interfaces::srv::SampleElevation_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace stsl_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SampleElevation_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: elevation
  {
    out << "elevation: ";
    rosidl_generator_traits::value_to_yaml(msg.elevation, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SampleElevation_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: elevation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "elevation: ";
    rosidl_generator_traits::value_to_yaml(msg.elevation, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SampleElevation_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace stsl_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use stsl_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const stsl_interfaces::srv::SampleElevation_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  stsl_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use stsl_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const stsl_interfaces::srv::SampleElevation_Response & msg)
{
  return stsl_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<stsl_interfaces::srv::SampleElevation_Response>()
{
  return "stsl_interfaces::srv::SampleElevation_Response";
}

template<>
inline const char * name<stsl_interfaces::srv::SampleElevation_Response>()
{
  return "stsl_interfaces/srv/SampleElevation_Response";
}

template<>
struct has_fixed_size<stsl_interfaces::srv::SampleElevation_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<stsl_interfaces::srv::SampleElevation_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<stsl_interfaces::srv::SampleElevation_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<stsl_interfaces::srv::SampleElevation>()
{
  return "stsl_interfaces::srv::SampleElevation";
}

template<>
inline const char * name<stsl_interfaces::srv::SampleElevation>()
{
  return "stsl_interfaces/srv/SampleElevation";
}

template<>
struct has_fixed_size<stsl_interfaces::srv::SampleElevation>
  : std::integral_constant<
    bool,
    has_fixed_size<stsl_interfaces::srv::SampleElevation_Request>::value &&
    has_fixed_size<stsl_interfaces::srv::SampleElevation_Response>::value
  >
{
};

template<>
struct has_bounded_size<stsl_interfaces::srv::SampleElevation>
  : std::integral_constant<
    bool,
    has_bounded_size<stsl_interfaces::srv::SampleElevation_Request>::value &&
    has_bounded_size<stsl_interfaces::srv::SampleElevation_Response>::value
  >
{
};

template<>
struct is_service<stsl_interfaces::srv::SampleElevation>
  : std::true_type
{
};

template<>
struct is_service_request<stsl_interfaces::srv::SampleElevation_Request>
  : std::true_type
{
};

template<>
struct is_service_response<stsl_interfaces::srv::SampleElevation_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // STSL_INTERFACES__SRV__DETAIL__SAMPLE_ELEVATION__TRAITS_HPP_
