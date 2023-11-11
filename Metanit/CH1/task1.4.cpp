#include <iostream>

int main(void) {
    int a {16},
        b {12};

    a ^= b;
    b ^= a;
    a ^= b;

    std::cout << a << std::endl << b;

    return 0;
}