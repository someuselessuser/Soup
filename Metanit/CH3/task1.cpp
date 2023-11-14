#include <iostream>
#include <string>
#include <cstring>

#define MAX 100

/*
 * Напишите функцию, которая считывает с консоли строку или массив символов и возвращает строку,
 * где символы размещены в обратном порядке
 */

std::string reverse(void);

int main(void) {
    std::string name = reverse();
    std::cout << name;

    return 0;
}

std::string reverse(void) {
    std::string name;
    std::cin >> name;
    std::reverse(name.begin(), name.end());
    return name;
}