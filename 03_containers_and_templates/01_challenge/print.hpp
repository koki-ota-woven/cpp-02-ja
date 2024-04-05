#include <iostream>
#include <vector>
#include <list>
#include <deque>


template<typename T>
void print_elements(const T& container) {
    for (const auto& element : container) {
        std::cout << element << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    std::cout << "std::vector: ";
    print_elements(vec);

    std::list<int> list = {6, 7, 8, 9, 10};
    std::cout << "std::list: ";
    print_elements(list);

    std::deque<int> deque = {11, 12, 13, 14, 15};
    std::cout << "std::deque: ";
    print_elements(deque);
}