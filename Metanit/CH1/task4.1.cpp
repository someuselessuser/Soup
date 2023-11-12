#include <iostream>

/*
 * Напишите программу, в которой определен одномерный массив чисел int.
 * Пользователь должен вводить с консоли значения для всех элементов массива.
 * После завершения ввода всех чисел программа должна вывести элементы массива в
 * обратном порядке.
 */

int main(void) {
    const size_t size = 10;
    int64_t arr[size];

    for(size_t i = 0; i < size; ++i) {
        std::cout << "Enter a " << i + 1 << " number: ";
        std::cin >> arr[i];
    }

    for(size_t i = size - 1; i > 0; --i) {
        std::cout << arr[i] << ' ';
    }
    std::cout << arr[0];

    return 0;
}