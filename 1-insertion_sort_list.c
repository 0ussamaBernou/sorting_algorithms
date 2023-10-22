#include "sort.h"

/**
 * insertion_sort_list - insertion sort dllist
 *
 * @list: list head
 *
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *tmp;

	if (!list || !*list)
		return;

	for (current = (*list)->next; current != NULL; current = current->next)
	{
		tmp = current;
		while (tmp->prev != NULL && tmp->n < tmp->prev->n)
		{
			swap((int *)&tmp->n, (int *)&tmp->prev->n);
			print_list(*list);
			tmp = tmp->prev;
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
