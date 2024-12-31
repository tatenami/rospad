#include "rclcpp/rclcpp.hpp"
#include "pad_msg/msg/pad.hpp"

#include <pad/padros.hpp>
#include <pad/ps5pad.hpp>

using namespace pad;
using namespace pad::ps5;

rclcpp::Node::SharedPtr node = nullptr;

void callback(const pad_msg::msg::Pad::SharedPtr msg) {
  float x = msg->axes[AxisID::leftX];
  float y = msg->axes[AxisID::leftY];

  RCLCPP_INFO(node->get_logger(), "x: %f y: %f", x, y);
}

int main(int argc, char *argv[]) {
  rclcpp::init(argc, argv);
  node = rclcpp::Node::make_shared("pad_subscriber");
  auto subscriber = node->create_subscription<pad_msg::msg::Pad>("padmsg", 1, callback);

  rclcpp::spin(node);

  node = nullptr;
  rclcpp::shutdown();
  return 0;
}
