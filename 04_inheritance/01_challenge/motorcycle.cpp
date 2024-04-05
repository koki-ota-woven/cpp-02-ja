#include "./motorcycle.hpp"
#include <iostream>

Motorcycle::Motorcycle(float speed, float fuel, bool helmet) : Vehicle(speed, fuel), helmet(helmet) {}

void Motorcycle::wheelie() {
    if (speed > 20) {
        std::cout << "Doing a wheelie!" << std::endl;
    } else {
        std::cout << "Speed up to do a wheelie." << std::endl;
    }
}
