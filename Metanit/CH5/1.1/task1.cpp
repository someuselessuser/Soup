#include <iostream>
#include "task1.hpp"

Integer::Integer(void) {
    this->data = 0;
}

void Integer::set(const int& data) {
    this->data = data;
}

int Integer::get(void) {
    return this->data;
}

void Integer::print(void) {
    std::cout << "Integer: " << this->data;
}
