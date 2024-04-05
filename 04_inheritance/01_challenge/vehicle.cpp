#include "./vehicle.hpp"
#include <iostream>


Vehicle::Vehicle(float speed, float fuel) : speed(speed), fuel(fuel) {}

void Vehicle::refuel(float amount) {
    fuel += amount;
}

void Vehicle::accelerate(float increment) {
    speed += increment;
}

void Vehicle::decelerate(float decrement) {
    if (speed - decrement < 0) {
        speed = 0;
    } else {
        speed -= decrement;
    }
}

void Vehicle::display_info() {
    std::cout << "Speed: " << speed << std::endl;
    std::cout << "Fuel: " << fuel << std::endl;
    std::cout << std::endl;
}