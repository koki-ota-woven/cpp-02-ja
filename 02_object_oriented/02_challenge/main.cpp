// コードを入力してください
#include "./driver.hpp"
#include "./car.hpp"

int main() {
    Car car("Toyota", "Camry", 2003, 40'000);

    Driver driver("Name", 100);
    car.setDriver(&driver);
    car.displayInfo();
    car.getDriver();

    return 0;
}
