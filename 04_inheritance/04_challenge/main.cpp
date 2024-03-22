// コードを入力してください
#include "scene.hpp"
#include "circle.hpp"
#include "square.hpp"

int main() {
    Scene scene;
    scene.add(new Circle());
    scene.add(new Square());
    scene.render();

    return 0;
}