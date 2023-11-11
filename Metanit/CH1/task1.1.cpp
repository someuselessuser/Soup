#include <iostream>

/*
 * Напишите программу, которая считывает с консоли три символа и упаковывает их в одно число.
 * Выведите полученное число на консоль. Затем распакуйте число - получите обратно упакованные символы
 * из числа в отдельные переменные.
 */

int main(void) {
    unsigned char ch1, ch2, ch3;

    unsigned int packet = 0;

    unsigned int mask = 0xFF;

    std::cin >> ch1;
    packet |= ch1;

    std::cin >> ch2;
    packet <<= sizeof(char) * 8;
    packet |= ch2;

    std::cin >> ch3;
    packet <<= sizeof(char) * 8;
    packet |= ch3;

    std::cout << packet << '\n';

    std::cout << static_cast<char>(packet & mask);

    packet >>= sizeof(char) * 8;

    std::cout << static_cast<char>(packet & mask);

    packet >>= sizeof(char) * 8;

    std::cout << static_cast<char>(packet & mask);

    return 0;
}