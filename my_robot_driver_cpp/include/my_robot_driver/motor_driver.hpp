#ifndef MOTOR_DRIVER_HPP
#define MOTOR_DRIVER_HPP
#include <map>
#include <string>
class MotorDriver 
{
private:
    int max_speed_;
    int current_speed_;
    int voltage_;
    int temperature_;
public:
    // Init communication, set default settings, ...
    MotorDriver(int max_speed=10)
    {
        max_speed_ = max_speed;
        current_speed_ = 0;
        voltage_ = 12;
        temperature_ = 47;
    }
    // Give a speed that the motor will try to reach
    void setSpeed(int speed)
    {
        if (speed <= max_speed_) {
            current_speed_ = speed;
        }
        else {
            current_speed_ = max_speed_;
        }
    }
    // Stop the motor by setting speed to 0
    void stop()
    {
        current_speed_ = 0;
    }
    // Return current speed
    int getSpeed()
    {
        return current_speed_;
    }
    // Return hardware information from the motor
    std::map<std::string, std::string> getStatus()
    {
        std::map<std::string, std::string> status;
        status["temperature"] = std::to_string(temperature_);
        status["voltage"] = std::to_string(voltage_);
        return status;
    }
};
#endif
