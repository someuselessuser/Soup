#include <iostream>

/*
 * Напишите программу, в которой в цикле while пользователь
 * вводит произвольное количество чисел, а программа вычисляет их сумму.
 * После каждого ввода спрашивайте пользователя, закончил ли он ввод чисел.
 * Если пользователь ввел "y" или "Y", то ввод чисел завершается, после чего программа должна вывести
 * сумму всех введенных чисел и их среднее арифметическое.
 */

int main(void) {
    int number, sum = 0, count = 0;
    char question = '.';

    while(question != 'y' && question != 'Y') {
        std::cin >> number;
        sum += number;
        ++count;
        std::cout << "It's all? (y - yes, n - no): ";
        std::cin >> question;
    }

    std::cout << '\n' << (double)sum / count;

    return 0;
}