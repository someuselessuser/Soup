#include <iostream>
#include <stdio.h>

/*
 * Напишите программу, которая предлагает ввести два целых числа
 * и выясняет, делится ли первое число на второе без остатка (кратно ли второе число).
 * Предусмотрите вариант, когда в качестве второго числа можно ввести 0
 * (на ноль же делить нельзя). В этом случае программа ничего вычисляет,
 * а просто завершает выполнение.
 */

int main(void) {
    int64_t first, second;
    printf("Enter a first number: ");
    scanf("%lld", &first);
    printf("Enter a second number: ");
    scanf("%lld", &second);

    if(second == 0) return 1;
    else {
        if(first % second == 0)
            std::cout << "First / Second";
        else
            std::cout << "First !/ Second";
    }

    return 0;
}