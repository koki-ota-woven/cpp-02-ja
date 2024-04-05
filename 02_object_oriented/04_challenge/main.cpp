#include "./car.hpp"
#include "./tire.hpp"

int main() {
    auto car = Car("Toyota", 27.5, "dunlop");
    car.display_info();
    return 0;
}
