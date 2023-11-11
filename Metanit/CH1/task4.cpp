#include <iostream>

int main(void) {
    double height, weight;

    std::cout << "Enter a height: ";
    std::cin >> height;

    std::cout << "\nEnter a weight: ";
    std::cin >> weight;

    std::cout << "\nYour BMI(weight / height^2): " << weight / ((height / 100.0f) * (height / 100.f));

    return 0;
}