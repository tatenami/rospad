// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pad_msg:msg/Pad.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "pad_msg/msg/pad.hpp"


#ifndef PAD_MSG__MSG__DETAIL__PAD__STRUCT_HPP_
#define PAD_MSG__MSG__DETAIL__PAD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__pad_msg__msg__Pad __attribute__((deprecated))
#else
# define DEPRECATED__pad_msg__msg__Pad __declspec(deprecated)
#endif

namespace pad_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Pad_
{
  using Type = Pad_<ContainerAllocator>;

  explicit Pad_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit Pad_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _buttons_type =
    std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>>;
  _buttons_type buttons;
  using _axes_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _axes_type axes;

  // setters for named parameter idiom
  Type & set__buttons(
    const std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>> & _arg)
  {
    this->buttons = _arg;
    return *this;
  }
  Type & set__axes(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->axes = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pad_msg::msg::Pad_<ContainerAllocator> *;
  using ConstRawPtr =
    const pad_msg::msg::Pad_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pad_msg::msg::Pad_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pad_msg::msg::Pad_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pad_msg::msg::Pad_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pad_msg::msg::Pad_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pad_msg::msg::Pad_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pad_msg::msg::Pad_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pad_msg::msg::Pad_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pad_msg::msg::Pad_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pad_msg__msg__Pad
    std::shared_ptr<pad_msg::msg::Pad_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pad_msg__msg__Pad
    std::shared_ptr<pad_msg::msg::Pad_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Pad_ & other) const
  {
    if (this->buttons != other.buttons) {
      return false;
    }
    if (this->axes != other.axes) {
      return false;
    }
    return true;
  }
  bool operator!=(const Pad_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Pad_

// alias to use template instance with default allocator
using Pad =
  pad_msg::msg::Pad_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace pad_msg

#endif  // PAD_MSG__MSG__DETAIL__PAD__STRUCT_HPP_
