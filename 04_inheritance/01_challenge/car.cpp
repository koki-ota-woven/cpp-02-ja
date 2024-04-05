#include "./car.hpp"
#include <iostream>

Car::Car(float speed, float fuel, int seats) : Vehicle(speed, fuel), seats(seats) {}

void Car::honk() {
    std::cout<< "Beep beep!" << std::endl;
}
