#ifndef SORT_H
#define SORT_H
#include <stdlib.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/*** FUNCTIONS ***/

/* GIVEN FUNCTIONS */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

/* SORTING FUNCTIONS */

size_t swap(int *a, int *b);
void bubble_sort(int *array, size_t size);
#endif
