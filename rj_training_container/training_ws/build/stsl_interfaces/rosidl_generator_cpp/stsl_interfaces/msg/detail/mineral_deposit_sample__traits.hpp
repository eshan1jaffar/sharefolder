// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from stsl_interfaces:msg/MineralDepositSample.idl
// generated code does not contain a copyright notice

#ifndef STSL_INTERFACES__MSG__DETAIL__MINERAL_DEPOSIT_SAMPLE__TRAITS_HPP_
#define STSL_INTERFACES__MSG__DETAIL__MINERAL_DEPOSIT_SAMPLE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "stsl_interfaces/msg/detail/mineral_deposit_sample__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_with_covariance__traits.hpp"

namespace stsl_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const MineralDepositSample & msg,
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
  const MineralDepositSample & msg,
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

inline std::string to_yaml(const MineralDepositSample & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace stsl_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use stsl_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const stsl_interfaces::msg::MineralDepositSample & msg,
  std::ostream & out, size_t indentation = 0)
{
  stsl_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use stsl_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const stsl_interfaces::msg::MineralDepositSample & msg)
{
  return stsl_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<stsl_interfaces::msg::MineralDepositSample>()
{
  return "stsl_interfaces::msg::MineralDepositSample";
}

template<>
inline const char * name<stsl_interfaces::msg::MineralDepositSample>()
{
  return "stsl_interfaces/msg/MineralDepositSample";
}

template<>
struct has_fixed_size<stsl_interfaces::msg::MineralDepositSample>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::PoseWithCovariance>::value> {};

template<>
struct has_bounded_size<stsl_interfaces::msg::MineralDepositSample>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::PoseWithCovariance>::value> {};

template<>
struct is_message<stsl_interfaces::msg::MineralDepositSample>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // STSL_INTERFACES__MSG__DETAIL__MINERAL_DEPOSIT_SAMPLE__TRAITS_HPP_
