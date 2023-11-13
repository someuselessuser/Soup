#include <iostream>

/*
 * Напишите программу, которая определяет и инициализирует массив первыми 20 нечетными числами.
 * Выведите числа из массива на консоль по пять в строку. Для вывода используйте нотацию указателей
 * (имя массива в качестве указателя). Подобным образом с помощью указателя выведите элементы массива
 * в обратном порядке.
 */

int main(void) {
    int64_t* numbers = new int64_t[20];

    for(unsigned i = 0; i < 20; ++i)
        numbers[i] = i * 2 + 1;

    int count = 0;
    for(unsigned i = 0; i < 20; ++i) {
        std::cout << *(numbers + i) << '\t';
        ++count;
        if(count % 5 == 0) std::cout << '\n';
    }

    std::cout << '\n';

    count = 0;
    for(int i = 19; i >= 0; --i) {
        std::cout << *(numbers + i) << '\t';
        ++count;
        if(count % 5 == 0) std::cout << '\n';
    }

    return 0;
}