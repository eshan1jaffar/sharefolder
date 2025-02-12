// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from stsl_interfaces:msg/MineralDepositArray.idl
// generated code does not contain a copyright notice

#ifndef STSL_INTERFACES__MSG__DETAIL__MINERAL_DEPOSIT_ARRAY__TRAITS_HPP_
#define STSL_INTERFACES__MSG__DETAIL__MINERAL_DEPOSIT_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "stsl_interfaces/msg/detail/mineral_deposit_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'deposits'
#include "stsl_interfaces/msg/detail/mineral_deposit__traits.hpp"

namespace stsl_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const MineralDepositArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: deposits
  {
    if (msg.deposits.size() == 0) {
      out << "deposits: []";
    } else {
      out << "deposits: [";
      size_t pending_items = msg.deposits.size();
      for (auto item : msg.deposits) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MineralDepositArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: deposits
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.deposits.size() == 0) {
      out << "deposits: []\n";
    } else {
      out << "deposits:\n";
      for (auto item : msg.deposits) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MineralDepositArray & msg, bool use_flow_style = false)
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
  const stsl_interfaces::msg::MineralDepositArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  stsl_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use stsl_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const stsl_interfaces::msg::MineralDepositArray & msg)
{
  return stsl_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<stsl_interfaces::msg::MineralDepositArray>()
{
  return "stsl_interfaces::msg::MineralDepositArray";
}

template<>
inline const char * name<stsl_interfaces::msg::MineralDepositArray>()
{
  return "stsl_interfaces/msg/MineralDepositArray";
}

template<>
struct has_fixed_size<stsl_interfaces::msg::MineralDepositArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<stsl_interfaces::msg::MineralDepositArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<stsl_interfaces::msg::MineralDepositArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // STSL_INTERFACES__MSG__DETAIL__MINERAL_DEPOSIT_ARRAY__TRAITS_HPP_
