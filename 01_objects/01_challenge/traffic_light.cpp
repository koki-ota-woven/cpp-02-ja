// コードを入力してください

#include <iostream>
#include "./traffic_light.h"


std::string get_action(TrafficLight light) {
    if (light == TrafficLight::red) {
        return "Stop";
    } else if (light == TrafficLight::yellow) {
        return "Caution";
    } else if (light == TrafficLight::green) {
        return "Go";
    }
    throw std::runtime_error("Input valid light color");
}
