#pragma once
#include "./vehicle.hpp"

class Car : public Vehicle {
public:
    Car(float speed, float fuel, int seats);
    void honk();
private:
    int seats;
};