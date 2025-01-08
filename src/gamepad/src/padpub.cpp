#include "rclcpp/rclcpp.hpp"
#include "pad_msg/msg/pad.hpp"

#include <pad/ps5pad.hpp>
#include <pad/padros.hpp>

#include <chrono>
#include <memory>
#include <string>
#include <vector>

using namespace std::chrono_literals;
using namespace pad;
using namespace pad::ps5;


int main(int argc, char *argv[]) {
  rclcpp::init(argc, argv);
  auto node = rclcpp::Node::make_shared("pad_publisher");
  auto publisher = node->create_publisher<pad_msg::msg::Pad>("padmsg", 1);

  ros::RosPad<ps5::PS5Editor> ps5(dev::usb_name);

  rclcpp::WallRate loop(1ms);

  while (rclcpp::ok() && ps5.isConnected()) {
    ps5.update();
    auto msg = pad_msg::msg::Pad();
    ps5.copyRawData(msg.buttons, msg.axes);
    publisher->publish(msg);
    loop.sleep();
  }

  rclcpp::shutdown();

  return 0;
}
