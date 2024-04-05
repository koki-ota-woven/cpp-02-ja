#include "./car.hpp"
#include "./motorcycle.hpp"


int main(){
    Car my_car(0, 100, 5);
    my_car.display_info();
    my_car.accelerate(30);
    my_car.honk();
    my_car.display_info();
    my_car.refuel(10);
    my_car.display_info();

    Motorcycle my_motorcycle(0, 40, true);
    my_motorcycle.display_info();
    return 0;
}