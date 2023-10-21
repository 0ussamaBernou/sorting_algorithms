#include "sort.h"
#include <stdio.h>

void insertion_sort_list(listint_t **list)
{
	listint_t *current, *tmp, *tmp1;

	/* start at the beginning of the list */
	for (current = (*list); current != NULL; current = current->next)
	{
		tmp1 = current;

		/* set tmp to the previous value and iterates backwards*/
		for (tmp = tmp1->prev; tmp != NULL && tmp->n > tmp1->n;
		     tmp = tmp->prev)
		{

			if (tmp->n > tmp1->n)
			{
				swap((int *)&(tmp->n), (int *)&(tmp1->n));
				print_list(*list);
				tmp1 = tmp;
			}
		}
	}
}

size_t swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;

	return 1;
}
