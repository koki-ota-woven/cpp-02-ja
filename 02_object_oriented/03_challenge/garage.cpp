#include "./garage.hpp"

Garage::Garage(){}

void Garage::addCar(Car* car) {
    cars.push_back(car);
}

void Garage::removeCar() {
    if (!cars.empty()) cars.pop_back();
}

int Garage::getNumCars() const {
    return cars.size();
}

