#include "sort.h"
#include <stddef.h>
#include <stdio.h>

/**
 * swap - Swaps two integer values.
 * @a: Pointer to the first integer.
 * @b: Pointer to the second integer.
 *
 * Return: 1 if swaped correctly
 */
size_t swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
	return (1);
}

/**
 * partition - Partitions the array and returns the pivot index.
 * @array: Pointer to the array to be sorted.
 * @lo: The low index of the subarray.
 * @hi: The high index of the subarray.
 * @size: size of the array
 * Return: The pivot index.
 */
int partition(int *array, int lo, int hi, size_t size)
{
	int pivot = array[hi];
	int j;
	int i = lo - 1;

	for (j = lo; j < hi; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			swap(&array[i], &array[j]);
		}
	}

	swap(&array[i + 1], &array[hi]);
	print_array(array, size);

	return (i + 1);
}

/**
 * quick_sort - Sorts an array using the Quick Sort algorithm.
 * @array: Pointer to the array to be sorted.
 * @size: The size of the array.
 */
void quick_sort(int *array, size_t size)
{
	quick_sort_helper(array, 0, size - 1, size);
}

/**
 * quick_sort_helper - Recursively sorts a subarray using Quick Sort.
 * @array: Pointer to the array to be sorted.
 * @lo: The low index of the subarray.
 * @hi: The high index of the subarray.
 * @size: size of the array
 */
void quick_sort_helper(int *array, int lo, int hi, size_t size)
{
	if (lo < hi)
	{
		int p = partition(array, lo, hi, size);
		quick_sort_helper(array, lo, p - 1, size);
		quick_sort_helper(array, p + 1, hi, size);
	}
}
