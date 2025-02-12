// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from stsl_interfaces:msg/MineralDeposit.idl
// generated code does not contain a copyright notice

#ifndef STSL_INTERFACES__MSG__DETAIL__MINERAL_DEPOSIT__TRAITS_HPP_
#define STSL_INTERFACES__MSG__DETAIL__MINERAL_DEPOSIT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "stsl_interfaces/msg/detail/mineral_deposit__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace stsl_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const MineralDeposit & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: heading
  {
    out << "heading: ";
    rosidl_generator_traits::value_to_yaml(msg.heading, out);
    out << ", ";
  }

  // member: range
  {
    out << "range: ";
    rosidl_generator_traits::value_to_yaml(msg.range, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MineralDeposit & msg,
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

  // member: heading
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading: ";
    rosidl_generator_traits::value_to_yaml(msg.heading, out);
    out << "\n";
  }

  // member: range
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "range: ";
    rosidl_generator_traits::value_to_yaml(msg.range, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MineralDeposit & msg, bool use_flow_style = false)
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
  const stsl_interfaces::msg::MineralDeposit & msg,
  std::ostream & out, size_t indentation = 0)
{
  stsl_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use stsl_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const stsl_interfaces::msg::MineralDeposit & msg)
{
  return stsl_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<stsl_interfaces::msg::MineralDeposit>()
{
  return "stsl_interfaces::msg::MineralDeposit";
}

template<>
inline const char * name<stsl_interfaces::msg::MineralDeposit>()
{
  return "stsl_interfaces/msg/MineralDeposit";
}

template<>
struct has_fixed_size<stsl_interfaces::msg::MineralDeposit>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<stsl_interfaces::msg::MineralDeposit>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<stsl_interfaces::msg::MineralDeposit>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // STSL_INTERFACES__MSG__DETAIL__MINERAL_DEPOSIT__TRAITS_HPP_
