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
	int *tmp;
	for (i = 0; i < size; i++)
	{
		tmp = &array[i];
		for (j = i; j < size; j++)
		{
			if (*tmp > array[j])
			{
				tmp = &array[j];
			}
		}
		swap(tmp, &array[i]);
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
