#include <iostream>

/*
 * Напишите программу, которая выводит квадраты нечетных целых чисел
 * от 1 до предела который вводит пользователь.
 */

int main(void) {
    int64_t limit;
    std::cin >> limit;
    for(int64_t i = 1; i <= limit; ++i)
        if(i % 2) std::cout << i  << ' ' << i * i << '\n';

    return 0;
}