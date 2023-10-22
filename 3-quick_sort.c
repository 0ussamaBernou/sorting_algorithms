#include "sort.h"
#include <stddef.h>
#include <stdio.h>

void quick_sort(int *array, size_t size)
{
	int i;
	size_t j;
	int pivot;

	if (size <= 1)
	{
		return;
	}

	pivot = array[size - 1];
	/* printf("pivot: %d\n", pivot); */
	i = -1;

	for (j = 0; j < size - 1; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			swap(&array[i], &array[j]);
			print_array(array, size);
		}
	}
	i++;
	swap(&array[i], &array[size - 1]);
	print_array(array, size);

	quick_sort(array, (size_t)i);
	quick_sort(&array[i + 1], (size_t)(size - i - 1));
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
