#include <iostream>

int main(void) {
    double dollar, rubles;

    std::cout << "Enter a exchange rate: ";
    std::cin >> dollar;

    std::cout << "\nEnter a count of rubles: ";
    std::cin >> rubles;

    std::cout << "\n" << rubles << " rubles = " << rubles / dollar << "$";

    return 0;
}