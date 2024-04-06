#pragma once
#include "./shape.hpp"


class Circle : public Shape {
public:
    Circle(double radius);
    double getArea() const override;
    void display_info() const;
private:
    double m_radius;
};