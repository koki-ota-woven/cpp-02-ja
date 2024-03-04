#pragma once

#include "./logger.hpp"
#include <string>

class Car {
public:
    Car(std::string make, std::string model, int year, double price);

    void setPrice(double price);

    std::string getMake() const;
    std::string getModel() const;
    int getYear() const;
    double getPrice() const;

    void displayInfo() const;

private:
    std::string make;
    std::string model;
    int year;
    double price;
    Logger logger;
};
