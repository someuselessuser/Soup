#include <iostream>

/*
 * Одна из форм определения цвета представляет запись в формате RGB,
 * где R, G и B - соответственно компоненты красного, зеленого и синего цвета.
 * Каждая компонента может иметь значение от 0 до 255.
 * Например, число 0xffffff в шестнадцатеричном формате представляет цвет,
 * где все три компоненты равны FF16 или 25510 в десятичной системе.
 * Напишите программу, которая считывает с консоли значения для трех компонент цвета и
 * сохраняет их в числовую переменную color.
 */

int main(void) {
    unsigned int red, green, blue;

    std::cin >> red >> green >> blue;

    unsigned int color = 0;
    unsigned int mask = 0xFF;

    color |= red;
    color <<= 8;
    color |= green;
    color <<= 8;
    color |= blue;

    unsigned int temp = color;
    unsigned int r, g, b;
    b = temp & mask;
    temp >>= 8;
    g = temp & mask;
    temp >>= 8;
    r = temp & mask;

    std::cout << "Red: " << r << "\nGreen: " << g << "\nBlue: " << b;

    return 0;
}