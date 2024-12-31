// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pad_msg:msg/Pad.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pad_msg/msg/pad.hpp"


#ifndef PAD_MSG__MSG__DETAIL__PAD__TRAITS_HPP_
#define PAD_MSG__MSG__DETAIL__PAD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pad_msg/msg/detail/pad__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace pad_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const Pad & msg,
  std::ostream & out)
{
  out << "{";
  // member: buttons
  {
    if (msg.buttons.size() == 0) {
      out << "buttons: []";
    } else {
      out << "buttons: [";
      size_t pending_items = msg.buttons.size();
      for (auto item : msg.buttons) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: axes
  {
    if (msg.axes.size() == 0) {
      out << "axes: []";
    } else {
      out << "axes: [";
      size_t pending_items = msg.axes.size();
      for (auto item : msg.axes) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const Pad & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: buttons
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.buttons.size() == 0) {
      out << "buttons: []\n";
    } else {
      out << "buttons:\n";
      for (auto item : msg.buttons) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: axes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.axes.size() == 0) {
      out << "axes: []\n";
    } else {
      out << "axes:\n";
      for (auto item : msg.axes) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Pad & msg, bool use_flow_style = false)
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

}  // namespace pad_msg

namespace rosidl_generator_traits
{

[[deprecated("use pad_msg::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pad_msg::msg::Pad & msg,
  std::ostream & out, size_t indentation = 0)
{
  pad_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pad_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const pad_msg::msg::Pad & msg)
{
  return pad_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<pad_msg::msg::Pad>()
{
  return "pad_msg::msg::Pad";
}

template<>
inline const char * name<pad_msg::msg::Pad>()
{
  return "pad_msg/msg/Pad";
}

template<>
struct has_fixed_size<pad_msg::msg::Pad>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<pad_msg::msg::Pad>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<pad_msg::msg::Pad>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PAD_MSG__MSG__DETAIL__PAD__TRAITS_HPP_
