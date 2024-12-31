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

class PS5RosPad: public ros::RosPad<ps5::PS5Editor> {
 public:
  PS5RosPad(std::string devname):
    RosPad(devname, dev::button_num, dev::axis_num)
  {
    this->editor_->setDeadZone(0.1);
  }
};

int main(int argc, char *argv[]) {
  rclcpp::init(argc, argv);
  auto node = rclcpp::Node::make_shared("pad_publisher");
  auto publisher = node->create_publisher<pad_msg::msg::Pad>("padmsg", 1);
  PS5RosPad ps5pad(dev::usb_name);

  rclcpp::WallRate loop(1ms);

  while (rclcpp::ok() && ps5pad.isConnected()) {
    ps5pad.update();
    auto msg = pad_msg::msg::Pad();
    ps5pad.copyRawData(msg.buttons, msg.axes);
    publisher->publish(msg);
    loop.sleep();
  }

  rclcpp::shutdown();

  return 0;
}
