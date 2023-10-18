#include "sort.h"
#include <stddef.h>

/**
 * bubble_sort - bubble sort algorithm
 *
 * @array: array to sort
 * @size: size of the array
 *
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, swaped;

	for (j = 0; j < size - 1; j++)
	{
		swaped = 0;
		for (i = 0; i <= size - 2; i++)
		{
			if (array[i] > array[i + 1])
			{
				swaped = swap(&array[i], &array[i + 1]);
				print_array(array, size);
			}
		}
		if (!swaped)
		{
			return;
		}
	}
}

/**
 * swap - swap two ints
 *
 * @a: first int
 * @b: second int
 *
 * Return: 1 indicating a swap
 */
size_t swap(int *a, int *b)
{
	int tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
	return 1;
}
