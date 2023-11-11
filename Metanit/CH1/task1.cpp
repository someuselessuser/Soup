#include <iostream>

int main(void) {
    int input;
    std::cin >> input;

    std::cout << static_cast<int>(input / 1000) << " kilometers and " << input % 1000 << " meters\n";

    return 0;
}