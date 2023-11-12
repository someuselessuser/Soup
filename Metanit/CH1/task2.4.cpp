#include <iostream>

/*
 * Напишите программу, в которой вводятся два числа, и программа проверят,
 * больше ли первое число второму или меньше или они равны.
 * Для проверки используйте тренарный оператор.
 */

int main(void) {
    int64_t first, second;

    std::cin >> first;
    std::cin >> second;

    (first == second) ? (std::cout << "first == second") : (std::cout << "");
    (first > second) ? (std::cout << "first > second") : (std::cout << "first < second");

    return 0;
}