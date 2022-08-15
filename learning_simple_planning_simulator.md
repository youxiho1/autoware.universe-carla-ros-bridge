# I encountered into another problem (maybe tf problem), so let's learn simple_planning_simulator

## First part: to_velocity_report, to_odometry, to_steering_report
autoware_auto_vehicle_msgs::msg::VelocityReport to_velocity_report(
  const std::shared_ptr<SimModelInterface> vehicle_model_ptr)
{
  autoware_auto_vehicle_msgs::msg::VelocityReport velocity;
  velocity.longitudinal_velocity = static_cast<float32_t>(vehicle_model_ptr->getVx());
  velocity.lateral_velocity = 0.0F;
  velocity.heading_rate = static_cast<float32_t>(vehicle_model_ptr->getWz());
  return velocity;
}

nav_msgs::msg::Odometry to_odometry(const std::shared_ptr<SimModelInterface> vehicle_model_ptr)
{
  nav_msgs::msg::Odometry odometry;
  odometry.pose.pose.position.x = vehicle_model_ptr->getX();
  odometry.pose.pose.position.y = vehicle_model_ptr->getY();
  odometry.pose.pose.orientation = motion::motion_common::from_angle(vehicle_model_ptr->getYaw());
  odometry.twist.twist.linear.x = vehicle_model_ptr->getVx();
  odometry.twist.twist.angular.z = vehicle_model_ptr->getWz();

  return odometry;
}

autoware_auto_vehicle_msgs::msg::SteeringReport to_steering_report(
  const std::shared_ptr<SimModelInterface> vehicle_model_ptr)
{
  autoware_auto_vehicle_msgs::msg::SteeringReport steer;
  steer.steering_tire_angle = static_cast<float32_t>(vehicle_model_ptr->getSteer());
  return steer;
}


## Second Part: 
