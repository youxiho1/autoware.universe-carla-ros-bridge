/control/command/control_cmd

example when not move:

stamp:
  sec: 1659496039
  nanosec: 201348937
lateral:
  stamp:
    sec: 1659496039
    nanosec: 201235006
  steering_tire_angle: -0.012766342610120773
  steering_tire_rotation_rate: 1.1339835509716067e-05
longitudinal:
  stamp:
    sec: 1659496039
    nanosec: 201309484
  speed: 0.0
  acceleration: -3.4000000953674316
  jerk: 0.0
  
  
  example when move straight:
  
stamp:
  sec: 1659497276
  nanosec: 310568946
lateral:
  stamp:
    sec: 1659497276
    nanosec: 310492484
  steering_tire_angle: -0.000713254907168448
  steering_tire_rotation_rate: 0.0036345478147268295
longitudinal:
  stamp:
    sec: 1659497276
    nanosec: 310546858
  speed: 6.1800360679626465
  acceleration: 0.10060308128595352
  jerk: 0.0


vehicle_cmd_gate.cpp

Construction function:
control_cmd_pub_ =
    this->create_publisher<AckermannControlCommand>("output/control_cmd", durable_qos);
    //output/control_cmd will remap to /control/command/control_cmd
    But where to refactor the topic name?  Answer: In the launch file.
    
publishControlCommands(commands) {
	Commands filtered_commands;
    	filtered_commands.control = commands.control;
    	filtered_commands.gear = commands.gear;  // tmp
    	
    	filtered_commands.control = filterControlCommand(filtered_commands.control);
	control_cmd_pub->publish(filter_commands.control)
}

publishEmergencyStopCommands() {
  control_cmd = createEmergencyStopControlCmd();
  control_cmd_pub_->publish(control_cmd);

}


sub topic: /control/trajectory_follower/control_cmd
void VehicleCmdGate::onAutoCtrlCmd(AckermannControlCommand::ConstSharedPtr msg)
{
  auto_commands_.control = *msg;

  if (current_gate_mode_.data == GateMode::AUTO) {
    publishControlCommands(auto_commands_);
  }
}
when normally run, we use this


// for remote
sub topic: /external/selected/control_cmd
void VehicleCmdGate::onRemoteCtrlCmd(AckermannControlCommand::ConstSharedPtr msg)
{
  remote_commands_.control = *msg;

  if (current_gate_mode_.data == GateMode::EXTERNAL) {
    publishControlCommands(remote_commands_);
  }
}

sub topic: /system/emergency/control_cmd
void VehicleCmdGate::onEmergencyCtrlCmd(AckermannControlCommand::ConstSharedPtr msg)
{
  emergency_commands_.control = *msg;

  if (use_emergency_handling_ && is_system_emergency_) {
    publishControlCommands(emergency_commands_);
  }
}




## Topic: /control/trajectory_follower/control_cmd
Publisher: controller_node_exe


### How to publish an AckermannControlCommand (From controller_node.cpp)
```


autoware_auto_control_msgs::msg::AckermannControlCommand out;
out.stamp = this->now();
out.lateral = lateral_output_->control_cmd;
out.longitudinal = longitudinal_output_->control_cmd;
control_cmd_pub_->publish(out);
```

