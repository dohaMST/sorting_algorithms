#include "sort.h"

/**
 *
 */

void bubble_sort(int *array, size_t size)
{
	unsigned int i;
	int temp, x = 1;

	while (x) {
		x = 0;
		for (i = 0; i < size - 1; i++) {
			if (array[i] > array[i + 1]) {
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				x = 1;
				print_array(array, size);
			}
		}
	}
}
