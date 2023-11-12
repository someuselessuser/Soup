#include <iostream>

int main(void) {
    int a, b;

    std::cin >> a >> b;

    if(a > b) std::cout << "a bigger than b";
    else if(a < b) std::cout << "b bigger than a";
    else std::cout << "a equals b";

    return 0;
}