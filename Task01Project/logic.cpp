// Task 01 [The count of non - zero values]
// Количество ненулевых значений
// 
// Дан вектор целочисленных значений. Необходимо спроектировать 
// и реализовать функцию, которая подсчитывает количество ненулевых
// значений элементов вектора.
#include "logic.h"

int count_nonzero_elements(int array[DEFAULT_SIZE], int size) {
	if (size <= 0) {
		return -1;
	}

	int count_zero = 0;

	for (int i = 0; i < size; i++) {
		count_zero += array[i] != 0 ? 1 : 0;
	}

	return count_zero;
}