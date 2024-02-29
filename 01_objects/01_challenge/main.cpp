// コードを入力してください

#include <iostream>
#include "./traffic_light.h"


int main() {
    std::cout << "red: " << get_action(TrafficLight::red) << std::endl;
    std::cout << "yellow: " << get_action(TrafficLight::yellow) << std::endl;
    std::cout << "green: " << get_action(TrafficLight::green) << std::endl;
    return 0;
}