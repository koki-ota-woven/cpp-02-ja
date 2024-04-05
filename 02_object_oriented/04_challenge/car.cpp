#include "car.hpp"
#include <iostream>

Car::Car(std::string name, float tire_size, std::string type)
    : name(name), tire(tire_size, type){ }

void Car::display_info() const {
    std::cout << "Car Name: " << name << std::endl;
    tire.display_info();
}
