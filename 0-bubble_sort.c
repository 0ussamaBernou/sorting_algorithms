#include "sort.h"
/**
* bubble sort function
 * @array: array
 * @size_t: array size
*/
void bubble_sort(int *array, size_t size)
{
	size_t i, n;
	int tmp;

	for (i = 0; i < size - 1; i++)
	{
		for (n = 0; n <= size - 2; n++)
		{
			if (array[i] > array[i + 1])
			{

				tmp = array[i];
				array[i] = array [i+1];
				array[i+1] = tmp;
				print_array(array, size);
			}
		}
	}
}
