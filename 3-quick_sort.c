#include "sort.h"

void quick_sort(int *array, size_t size);
void q_sort(int *array, ssize_t start, ssize_t end, int size);
void swap(int *array, ssize_t i, ssize_t j);
int partition_func(int *array, ssize_t start, ssize_t end, size_t size);

/*quick_sort function*/

/**
 *quick_sort - quick sort algorithm
 *@array: the array we wanna sort
 *@size: the size of array
 */

void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;
	q_sort(array, 0, size - 1, size);
}

/*q_sort function*/

/**
 *q_sort - quick sort algorithm
 *@array: the array we wanna sort
 *@start: the start
 *@end: the end
 *@size: the size of the array
 */
void q_sort(int *array, ssize_t start, ssize_t end, int size)
{
	ssize_t x = 0;


	if (start < end)
	{
		x = partition_func(array, start, end, size);

		q_sort(array, start, x - 1, size);
		q_sort(array, x + 1, end, size);
	}
}
/*swap function */

/**
*swap - a function that swaps two elements
*@array: array we wanna sort
*@i: elm 1
*@j: elm 2
*/
void swap(int *array, ssize_t i, ssize_t j)
{
	int x;

	x = array[i];
	array[i] = array[j];
	array[j] = x;
}

/*partition_func*/

/**
 *partition_func - quick sort algo
 *@array: array we wanna sort
 *@start: the start
 *@end: the end
 *@size: the size of array
 *Return: return the position for the new pivot
 */
int partition_func(int *array, ssize_t start, ssize_t end, size_t size)
{
	int pv = array[end];
	ssize_t nw_pv = start, x;

	for (x = start; x < end; x++)
	{
		if (array[x] < pv)
		{
			if (array[nw_pv] != array[x])
			{
				swap(array, nw_pv, x);
				print_array(array, size);
			}
			nw_pv++;
		}
	}
	if (array[nw_pv] != array[end])
	{
		swap(array, nw_pv, end);
		print_array(array, size);
	}
	return (nw_pv);
}
