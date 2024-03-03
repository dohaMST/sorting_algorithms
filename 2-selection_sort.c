#include "sort.h"

/**
 * selection_sort - a function that sorts an array
 * @array: the array we wanna sort
 * @size: the size of array
 */

void selection_sort(int *array, size_t size)
{
	unsigned int i, j, idx;
	int x, min;

	for (i = 0; i < size - 1; i++)
	{
		min = array[i + 1];
		idx = i + 1;
		for (j = i + 1; j < size; j++)
		{
			if (min > array[j])
			{
				min = array[j];
				idx = j;
			}
		}

		if (array[i] > min)
		{
			x = array[i];
			array[i] = array[idx];
			array[idx] = x;
			print_array(array, size);
		}
	}
}
