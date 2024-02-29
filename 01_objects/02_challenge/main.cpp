// コードを入力してください
#include <iostream>
#include "./rectangle.h"

int main() {
    Rectangle rect { .width = 2.f, .height = 5.f };
    float area = rectangle_area(rect);
    std::cout << "The rectangle area of width: " << rect.width << ", height: " << rect.height << " -> " << area << std::endl;
    return 0;
}