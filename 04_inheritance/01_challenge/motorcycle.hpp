#pragma once
#include "./vehicle.hpp"

class Motorcycle : public Vehicle{
public:
    Motorcycle(float speed, float fuel, bool helmet);
    void wheelie();
private:
    bool helmet;
};