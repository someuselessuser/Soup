#include <iostream>

/*
 * Напишите программу, которая определяет и инициализирует массив первыми
 * 20 нечетными числами. Выведите числа из массива на консоль по пять в строку.
 * Для вывода определите указатель, который указывает на массив.
 * С помощью инкремента (++) указателя выведите элементы в прямом порядке.
 * А с потом в отдельном цикле с помощью декремента указателя выведите элементы массива в обратном порядке.
 */

int main(void) {
    const int size = 20;
    int array[size];

    for(int i = 0; i < size; ++i) {
        array[i] = i * 2 + 1;
    }

    int count = 0;
    for(int* ptr_array = array; ptr_array <= &array[size - 1]; ++ptr_array) {
        std::cout << *ptr_array << '\t';
        ++count;
        if(count % 5 == 0 && count != 0) {
            std::cout << '\n';
            count = 0;
        }
    }

    std::cout << '\n';

    count = 0;
    for(int* ptr_array = &array[size - 1]; ptr_array >= array; --ptr_array) {
        std::cout << *ptr_array << '\t';
        ++count;
        if(count % 5 == 0 && count != 0) {
            std::cout << '\n';
            count = 0;
        }
    }

    return 0;
}