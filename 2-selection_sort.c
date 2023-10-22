#include "sort.h"

/**
 * selection_sort - selection sort an array
 *
 * @array: array to sort
 * @size: size of the array
 *
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int min_idx, tmp;

	for (i = 0; i < size; i++)
	{
		min_idx = i;
		for (j = i; j < size; j++)
		{
			if (array[min_idx] > array[j])
			{
				min_idx = j;
			}
		}
		/* swap(min_idx, &array[i]); */
		tmp = array[min_idx];
		array[min_idx] = array[i];
		array[i] = tmp;
		print_array(array, size);
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
