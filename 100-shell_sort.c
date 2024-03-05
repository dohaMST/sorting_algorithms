#include "sort.h"

/**
 * shell_sort - a function that sorts an array
 * @array: the array we wanna sort
 * @size: the size of the array
 */

void shell_sort(int *array, size_t size)
{
	size_t a = 1, i, idx = 0;
	int x;

	if (!array || size < 2)
		return;

	while (a < size / 3)
		a = 3 * a + 1;

	while (a >= 1)
	{
		for (i = a; i < size; i++)
			for (idx = i; idx >= a &&
			 (array[idx] < array[idx - a]); idx -= a)
			{
				x = array[idx];
				array[idx] = array[idx - a];
				array[idx - a] = x;
				/*swap(array, index, index - gap);*/
			}
		print_array(array, size);
		a /= 3;
	}
}
