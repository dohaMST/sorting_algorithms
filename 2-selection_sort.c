#include "sort.h"

/**
 * selection_sort - a function that sorts an array
 * @array: the array we wanna sort
 * @size: the size of the array
 */

void selection_sort(int *array, size_t size)
{
	unsigned int i, j;
	int x;

	for (i = 0; i < size - 1; i++)
	{
		for (j = i + 1; j < size; j++)
		{
			if (array[i] > array[j])
			{
				x = array[i];
				array[i] = array[j];
				array[j] = x;
				print_array(array, size);
			}
		}
	}
}
