vehicleInfo.update()

## Final Output
self.info.output.throttle = 0.
self.info.output.brake = 1.0
self.info.output.steer = 0.
self.info.output.reverse = False
self.info.output.hand_brake = True

## Parameters
speed/acceleration    Kp, Ki, Kd
self.info.restrictions.max_steering_angle = phys.get_vehicle_max_steering_angle(
    self.vehicle_info)
self.info.restrictions.max_speed = phys.get_vehicle_max_speed(
    self.vehicle_info)
self.info.restrictions.max_accel = phys.get_vehicle_max_acceleration(
    self.vehicle_info)
self.info.restrictions.max_decel = phys.get_vehicle_max_deceleration(
    self.vehicle_info)
self.info.restrictions.min_accel = self.get_param('min_accel', 1.)
# clipping the pedal in both directions to the same range using the usual lower
# border: the max_accel to ensure the the pedal target is in symmetry to zero
self.info.restrictions.max_pedal = min(
    self.info.restrictions.max_accel, self.info.restrictions.max_decel)



## set_target_xxx
### set_target_speed()
if abs(speed) > max_speed            error, then clip (-max_speed, max_speed)
else target_speed_abs = abs(speed)

### set_target_steering_angle()
if steering_angle > max_steering_angle  error, then clip(-max_steering_angle, max_steering_angle)
else steering_angle = steering_angle (NTBD)

### set_target_accel()
if speed < 0.00001, acc = -max_dec
else acc = clip(-max_dec, max_acc)

### set_target_jerk
jerk = jerk, NTBD

# procedures

## self.control_steering()
output_steer = steer / max_steer
quite easy to understand

## self.control_stop_and_reverse()
if abs(current_speed) < 0.1     "standing"
    if target_speed < 0  && not reverse flag       reverse direction
    if target_speed > 0  && reverse flag       forward direction
    if abs(target_speed) < 0.0001   "full stop"
        self.info.status.speed_control_accel_target = 0.
        self.info.status.accel_control_pedal_target = 0.
        self.set_target_speed(0.)
        self.info.current.speed = 0.
        self.info.current.speed_abs = 0.
        self.info.current.accel = 0.
        self.info.output.hand_brake = True
        self.info.output.brake = 1.0
        self.info.output.throttle = 0.0
else if current_speed and target_speed sign different
    set_target_speed to 0 (in order to full stop and then change the direction)

## self.run_speed_control_loop()



## self.run_accel_control_loop()


if not self.info.output.hand_brake:


## self.update_drive_vehicle_control_command()
throttle_lower_border = aerodynamic drag force + + ......
brake_upper_border = throttle_lower_border + if engine lay off, it brakes
depending on the target and the two borders, decide the vehicle should    accelerate/brake/coast




# only send out the Carla Control Command if AckermannDrive messages are
# received in the last second (e.g. to allows manually controlling the vehicle)
if (self.last_ackermann_msg_received_sec + 1.0) > \
        self.get_time():
    self.info.output.header = self.get_msg_header()
    self.carla_control_publisher.publish(self.info.output)






# However
I wonder how to convert target speed & acceleration to brake and throttle