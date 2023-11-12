#include <iostream>

/*
 * Напишите программу, в которой с помощью функции std::cin.getline()
 * пользователь вводит строку с консоли в массив символов.
 * С помощью цикла подсчитайте количество символов,
 * введенных пользователем.
 * Затем с помощью второго цикла выведите все символы введенной строки в обратном порядке.
 */

int main(void) {
    const size_t max = 100;
    char string[max];

    std::cin.getline(string, max);

    int count = 0;
    for(int i = 0; string[i]; ++i) {
        ++count;
    }

    for(int i = count - 1; i >= 0; --i) {
        std::cout << string[i];
    }

    return 0;
}