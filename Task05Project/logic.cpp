// Task 05 [The reverse algorithm]
// Алгоритм обратной перестановки
// 
// Дан вектор целочисленных значений. Необходимо спроектировать 
// и реализовать функцию, которая реверсирует элементы вектора 
// начиная с позиции a и заканчивая позицией b, включая данные позиции.

#include "logic.h"

void reverse(int array[DEFAULT_SIZE], int size, int a, int b) {
    if (a < 0 || b < 0 || a >= size || b >= size) {
        return;
    }

    if (a >= b) {
        int temp = a;
        a = b;
        b = temp;
    }

    while (a < b) {
        int temp = array[a];
        array[a] = array[b];
        array[b] = temp;

        a++;
        b--;
    }
}