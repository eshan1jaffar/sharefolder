// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from stsl_interfaces:srv/ResetMineralDepositTracking.idl
// generated code does not contain a copyright notice

#ifndef STSL_INTERFACES__SRV__DETAIL__RESET_MINERAL_DEPOSIT_TRACKING__TRAITS_HPP_
#define STSL_INTERFACES__SRV__DETAIL__RESET_MINERAL_DEPOSIT_TRACKING__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "stsl_interfaces/srv/detail/reset_mineral_deposit_tracking__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_with_covariance__traits.hpp"

namespace stsl_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ResetMineralDepositTracking_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ResetMineralDepositTracking_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ResetMineralDepositTracking_Request & msg, bool use_flow_style = false)
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
  const stsl_interfaces::srv::ResetMineralDepositTracking_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  stsl_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use stsl_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const stsl_interfaces::srv::ResetMineralDepositTracking_Request & msg)
{
  return stsl_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<stsl_interfaces::srv::ResetMineralDepositTracking_Request>()
{
  return "stsl_interfaces::srv::ResetMineralDepositTracking_Request";
}

template<>
inline const char * name<stsl_interfaces::srv::ResetMineralDepositTracking_Request>()
{
  return "stsl_interfaces/srv/ResetMineralDepositTracking_Request";
}

template<>
struct has_fixed_size<stsl_interfaces::srv::ResetMineralDepositTracking_Request>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::PoseWithCovariance>::value> {};

template<>
struct has_bounded_size<stsl_interfaces::srv::ResetMineralDepositTracking_Request>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::PoseWithCovariance>::value> {};

template<>
struct is_message<stsl_interfaces::srv::ResetMineralDepositTracking_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace stsl_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ResetMineralDepositTracking_Response & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ResetMineralDepositTracking_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ResetMineralDepositTracking_Response & msg, bool use_flow_style = false)
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
  const stsl_interfaces::srv::ResetMineralDepositTracking_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  stsl_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use stsl_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const stsl_interfaces::srv::ResetMineralDepositTracking_Response & msg)
{
  return stsl_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<stsl_interfaces::srv::ResetMineralDepositTracking_Response>()
{
  return "stsl_interfaces::srv::ResetMineralDepositTracking_Response";
}

template<>
inline const char * name<stsl_interfaces::srv::ResetMineralDepositTracking_Response>()
{
  return "stsl_interfaces/srv/ResetMineralDepositTracking_Response";
}

template<>
struct has_fixed_size<stsl_interfaces::srv::ResetMineralDepositTracking_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<stsl_interfaces::srv::ResetMineralDepositTracking_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<stsl_interfaces::srv::ResetMineralDepositTracking_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<stsl_interfaces::srv::ResetMineralDepositTracking>()
{
  return "stsl_interfaces::srv::ResetMineralDepositTracking";
}

template<>
inline const char * name<stsl_interfaces::srv::ResetMineralDepositTracking>()
{
  return "stsl_interfaces/srv/ResetMineralDepositTracking";
}

template<>
struct has_fixed_size<stsl_interfaces::srv::ResetMineralDepositTracking>
  : std::integral_constant<
    bool,
    has_fixed_size<stsl_interfaces::srv::ResetMineralDepositTracking_Request>::value &&
    has_fixed_size<stsl_interfaces::srv::ResetMineralDepositTracking_Response>::value
  >
{
};

template<>
struct has_bounded_size<stsl_interfaces::srv::ResetMineralDepositTracking>
  : std::integral_constant<
    bool,
    has_bounded_size<stsl_interfaces::srv::ResetMineralDepositTracking_Request>::value &&
    has_bounded_size<stsl_interfaces::srv::ResetMineralDepositTracking_Response>::value
  >
{
};

template<>
struct is_service<stsl_interfaces::srv::ResetMineralDepositTracking>
  : std::true_type
{
};

template<>
struct is_service_request<stsl_interfaces::srv::ResetMineralDepositTracking_Request>
  : std::true_type
{
};

template<>
struct is_service_response<stsl_interfaces::srv::ResetMineralDepositTracking_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // STSL_INTERFACES__SRV__DETAIL__RESET_MINERAL_DEPOSIT_TRACKING__TRAITS_HPP_
