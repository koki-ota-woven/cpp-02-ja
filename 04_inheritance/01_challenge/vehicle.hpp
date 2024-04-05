#pragma once

class Vehicle {
public:
    Vehicle(float speed = 0, float fuel = 0);
    void refuel(float amount);
    void accelerate(float increment);
    void decelerate(float decrement);
    void display_info();
protected:
    float speed;
private:
    float fuel;
};