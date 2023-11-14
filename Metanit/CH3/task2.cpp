#include <iostream>

/*
 * Напишите функцию, которая возводит число в определенную степень.
 * В качестве параметров функция должна принимать само число и показатель степени2
 * А в качестве результата возвращать результат возведения числа в степень.
 * Степень может быть как положительной, так и отрицательной.
 */

namespace task {
    double pow(const double &, int);
}

int main(void) {
    std::cout << task::pow(2, -2);
    return 0;
}

double task::pow(const double& number, int power) {
    bool flag = power >= 0;
    double result = number;

    if(!flag) power = abs(power);

    for(int i = 1; i < power; ++i) {
        result *= number;
    }

    if(flag) return result;
    else return (1.0 / result);
}