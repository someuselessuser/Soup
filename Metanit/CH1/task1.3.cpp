#include <iostream>
#include <ios>

int main(void) {
    unsigned int color {0x04F1A2u};
    unsigned int mask  {0xFFu};

    unsigned int RED = (color >> 16) & mask;
    unsigned int GREEN = (color >> 8) & mask;
    unsigned int BLUE = color & mask;

    std::cout << std::hex << RED << std::endl;
    std::cout << std::hex << GREEN << std::endl;
    std::cout << std::hex << BLUE << std::endl;

    return 0;
}