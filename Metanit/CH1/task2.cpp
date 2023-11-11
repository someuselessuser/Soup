#include <iostream>
#include <cmath>

int main(void) {
    double radius;

    std::cout << "Enter a radius: ";
    std::cin >> radius;

    std::cout << "Area of Circle: " << M_PI * std::pow(radius, 2);

    return 0;
}