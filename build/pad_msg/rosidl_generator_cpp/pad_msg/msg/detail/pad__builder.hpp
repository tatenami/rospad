// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pad_msg:msg/Pad.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pad_msg/msg/pad.hpp"


#ifndef PAD_MSG__MSG__DETAIL__PAD__BUILDER_HPP_
#define PAD_MSG__MSG__DETAIL__PAD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pad_msg/msg/detail/pad__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pad_msg
{

namespace msg
{

namespace builder
{

class Init_Pad_axes
{
public:
  explicit Init_Pad_axes(::pad_msg::msg::Pad & msg)
  : msg_(msg)
  {}
  ::pad_msg::msg::Pad axes(::pad_msg::msg::Pad::_axes_type arg)
  {
    msg_.axes = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pad_msg::msg::Pad msg_;
};

class Init_Pad_buttons
{
public:
  Init_Pad_buttons()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Pad_axes buttons(::pad_msg::msg::Pad::_buttons_type arg)
  {
    msg_.buttons = std::move(arg);
    return Init_Pad_axes(msg_);
  }

private:
  ::pad_msg::msg::Pad msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pad_msg::msg::Pad>()
{
  return pad_msg::msg::builder::Init_Pad_buttons();
}

}  // namespace pad_msg

#endif  // PAD_MSG__MSG__DETAIL__PAD__BUILDER_HPP_
