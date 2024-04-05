#pragma once
#include <string>


class Tire {
public:
    Tire(float size, std::string type);
    void display_info() const;
private:
    float size;
    std::string type;
};
