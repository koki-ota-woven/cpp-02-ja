#pragma once
#include "tire.hpp"
#include <string>

class Car {
public:
    Car(std::string name, float tire_size, std::string type);
    void display_info() const ;
private:
    Tire tire;
    std::string name;
};
