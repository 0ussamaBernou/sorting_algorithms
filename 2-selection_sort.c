#include "sort.h"

/**
 * selection_sort - Sorts an array of integers in ascending order
 * selection sort algorithm
 *
 * @array: Array to be sorted
 * @size: Array's size
 **/
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_idx;
	int temp;

	/* Traverse through all array elements */
	for (i = 0; i < size - 1; i++)
	{
		/* Assume the current index is the minimum */
		min_idx = i;

		/* Find the index of the minimum element in the remaining unsorted array */
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_idx])
				min_idx = j;
		}

		/* Swap the found minimum element with the first element if it is not at the initial position */
		if (min_idx != i)
		{
			/* Swap array[i] and array[min_idx] */
			temp = array[i];
			array[i] = array[min_idx];
			array[min_idx] = temp;

			/* Print the array after swapping */
			print_array(array, size);
		}
	}
}
