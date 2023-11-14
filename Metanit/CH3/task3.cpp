#include <iostream>
#include <string>

int add(int a, int b) { return (a + b); }
double add(double a, double b) { return (a + b); }
std::string add(const std::string& a, const std::string& b) { return a + b; }

int main(void) {
    std::cout << add(5, 2) << std::endl;
    std::cout << add(5.2, 3.8) << std::endl;
    std::cout << add("Sun", "Flower") << std::endl;
    return 0;
}