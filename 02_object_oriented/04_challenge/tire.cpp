#include "./tire.hpp"
#include <iostream>


Tire::Tire(float size, std::string type) : size(size), type(type) {}

void Tire::display_info() const {
    std::cout << "Tire size: " << size << std::endl;
    std::cout << "Tire type: " << type << std::endl;
}