#include "sort.h"

/**
 * bubble_sort - bubble sort algorithm function
 *
 * @array: array
 * @size: array size
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, n;
	int tmp;

	if (!*array)
	{
		return;
	}

	for (n = 0; n < size - 1; n++)
	{
		for (i = 0; i <= size - 2; i++)
		{
			if (array[i] > array[i + 1])
			{

				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}
