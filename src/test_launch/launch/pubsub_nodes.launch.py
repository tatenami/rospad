from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
  ld = LaunchDescription()

  pub_node = Node(
    package="gamepad",
    executable="publisher",
    name="pad_pub",
    namespace="pad1",
    remappings=[("padmsg", "padmsg1")]
  )

  sub_node1 = Node(
    package="gamepad",
    executable="subscriber",
    name="pad_sub1",
    namespace="pad1",
    remappings=[("padmsg", "padmsg1")]
  )

  sub_node2 = Node(
    package="gamepad",
    executable="subscriber2",
    name="pad_sub2",
    namespace="pad1",
    remappings=[("padmsg", "padmsg1")]
  )

  ld.add_action(pub_node)
  ld.add_action(sub_node1)
  ld.add_action(sub_node2)

  return ld