// Task 04 [The swap of extreme elements]
// Обмен экстремальных элементов
// 
// Дан вектор целочисленных значений. Необходимо спроектировать 
// и реализовать функцию, которая меняет экстремальные элементы 
// вектора местами. Если экстремальных элементов несколько, 
// то необходимо поменять первые найденные элементы.

#include "logic.h"

int find_min(int array[DEFAULT_SIZE], int size) {
	int min = 0;
	for (int i = 1; i < size; i++)
	{
		if (array[i] < array[min]) {
			min = i;
		}
	}
	return min;
}

int find_max(int array[DEFAULT_SIZE], int size) {
	int max = 0;
	for (int i = 1; i < size; i++)
	{

		if (array[i] > array[max]) {
			max = i;
		}
	}
	return max;
}


void swap_extrem_elements(int array[DEFAULT_SIZE], int size) {
	if (size <= 0) {
		return;
	}
	int max = find_max(array, size);
	int min = find_min(array, size);

	int temp = array[min];
	array[min] = array[max];
	array[max] = temp;
}