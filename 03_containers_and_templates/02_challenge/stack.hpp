#include <iostream>
#include <vector>
#include <list>
#include <stdexcept>


template<typename T, typename Container = std::vector<T>>
class Stack {
public:
    bool is_empty() const {
        return container.empty();
    }

    void push(const T& value) {
        container.push_back(value);
    }

    void pop() {
        if (is_empty()) {
            throw std::out_of_range("Stack is empty");
        }
        container.pop_back();
    }

    T top() const {
        if (is_empty()) {
            throw std::out_of_range("Stack is empty");
        }
        return container.back();
    }

private:
    Container container;
};