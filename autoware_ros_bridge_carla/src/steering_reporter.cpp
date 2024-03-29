#include <memory>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <functional>
#include <string>

#include "rclcpp/rclcpp.hpp"
#include "autoware_auto_vehicle_msgs/msg/steering_report.hpp"
#include "carla_msgs/msg/carla_ego_vehicle_status.hpp"
#include "carla_msgs/msg/carla_ego_vehicle_info.hpp"
#include "carla_msgs/msg/carla_ego_vehicle_info_wheel.hpp"
#include "autoware_auto_control_msgs/msg/ackermann_control_command.hpp"

using namespace std::chrono_literals;
using std::placeholders::_1;
using carla_msgs::msg::CarlaEgoVehicleStatus;
using carla_msgs::msg::CarlaEgoVehicleInfo;
using carla_msgs::msg::CarlaEgoVehicleInfoWheel;
using autoware_auto_vehicle_msgs::msg::SteeringReport;
using autoware_auto_control_msgs::msg::AckermannControlCommand;

class SteeringReporter : public rclcpp::Node {
    public:

        SteeringReport message;


        SteeringReporter() : Node("steering_reporter")
        {
            isInit = false;
            //Subscribe carla's vehicle status and vehicle info
            // subscription_status = this->create_subscription<CarlaEgoVehicleStatus>(
            //     "/carla/ego_vehicle/vehicle_status", 10, std::bind(&SteeringReporter::vehicle_status_callback, this, _1));
            subscription_command = this->create_subscription<AckermannControlCommand>(
                "/control/command/control_cmd", 10, std::bind(&SteeringReporter::topic_callback, this, _1)
            );
            // subscription_info = this->create_subscription<CarlaEgoVehicleInfo>(
            //     "/carla/ego_vehicle/vehicle_info", 10, std::bind(&SteeringReporter::vehicle_info_callback, this, _1));
            publisher_ = this->create_publisher<SteeringReport>("/vehicle/status/steering_status", 10);
            timer_ = this->create_wall_timer(20ms, std::bind(&SteeringReporter::timer_callback, this));
        }

    private:
        void vehicle_status_callback(CarlaEgoVehicleStatus::ConstSharedPtr msg) {
            if(!isInit) {
                return;
            }

            //CarlaEgoVehicleStatus vehicleStatus = *msg;
            SteeringReport message;
            message.stamp = get_clock()->now();
            //calculate max steering angle
            float max_steering_angle = 70 * 3.14159265 / 180.0;
            //get max steering angle (use smallest non-zero value of all wheels)
            CarlaEgoVehicleInfoWheel arr[4];
            arr[0] = vehicleInfo.wheels[0];
            arr[1] = vehicleInfo.wheels[1];
            arr[2] = vehicleInfo.wheels[2];
            arr[3] = vehicleInfo.wheels[3];
            int arr_size = sizeof(arr) / sizeof(CarlaEgoVehicleInfoWheel);
            for(int i = 0; i < arr_size; i++) {            //todo: change 4 to the size of the list 
                float wheel_angle = arr[i].max_steer_angle;
                if(fabs(wheel_angle) < 1e-6) {
                    continue;
                }
                max_steering_angle = std::min(max_steering_angle, wheel_angle);
            }

            message.steering_tire_angle = msg->control.steer;
            std::cout << "Before Calculation: " << message.steering_tire_angle << std::endl;

            message.steering_tire_angle = msg->control.steer * max_steering_angle;
            std::cout << "After Calculation: " << message.steering_tire_angle << "    ";
            

            //VelocityReport velocityReport;
            //status.speed = data.velocity;
            //message.child_frame_id = "base_link";
            //printf("Steering Angle: %f\n", message.steering_tire_angle);
            publisher_->publish(message);
        }

        void vehicle_info_callback(CarlaEgoVehicleInfo::ConstSharedPtr msg) {
            vehicleInfo = *msg;
            isInit = true;
            printf("Received VehicleInfo");
        }

        void timer_callback() {
            message.stamp = get_clock()->now();
            publisher_->publish(message);
        }

        void topic_callback(AckermannControlCommand::ConstSharedPtr msg) {
            message.steering_tire_angle = msg->lateral.steering_tire_angle;
        }


    protected:
        rclcpp::Subscription<CarlaEgoVehicleStatus>::SharedPtr subscription_status; 
        rclcpp::Subscription<CarlaEgoVehicleInfo>::SharedPtr subscription_info;
        rclcpp::Subscription<AckermannControlCommand>::SharedPtr subscription_command;
        rclcpp::Publisher<SteeringReport>::SharedPtr publisher_;
        CarlaEgoVehicleInfo vehicleInfo;
        bool isInit;    
        rclcpp::TimerBase::SharedPtr timer_;

};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<SteeringReporter>());
  rclcpp::shutdown();
  return 0;
}
