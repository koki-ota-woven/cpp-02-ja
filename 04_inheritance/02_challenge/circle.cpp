#include "./circle.hpp"
#include <iostream>


Circle::Circle(double radius) : m_radius(radius) {}

double Circle::getArea() const {
    return 3.14159 * m_radius * m_radius;
}

void Circle::display_info() const {
    std::cout << "Area: " << getArea() << std::endl;
}
