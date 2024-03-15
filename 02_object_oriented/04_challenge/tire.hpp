#pragma once

class Tire {
public:
    Tire(float size, std::string type) : size(size), type(type);
    void print_tire(float& size, std::string& type) const;
private:
    float size;
    std::string type;
};
