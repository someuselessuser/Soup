#include <iostream>

/*
 * Напишите программу, в которую пользователь вводит число от 1 до 100.
 * Используйте вложенный оператор if, чтобы сначала убедиться, что число
 * находится в пределах этого диапазона. А затем при выполнении этого условия
 * определите, является ли введенное число больше, меньше или равным 50.
 * И выведите результат на консоль.
 */

int main(void) {
    u_int64_t number;

    std::cin >> number;

    if(number >= 1 && number <= 100) {
        if(number < 50) std::cout << "Number < 50";
        else if(number > 50) std::cout << "Number > 50";
        else std::cout << "Number = 50";
    }
    else std::cout << "Wrong number!";

    return 0;
}