#include "lists.h"

/**
 * list_len - function that returns the number of elements in a linked list_t
 *  list.
 *
 * @h: Pointer to list header.
 *
 * Return:  number of elements
 *
 **/

size_t list_len(const list_t *h)
{
	size_t num_of_el = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		num_of_el++;
		h = h->next;
	}
	return (num_of_el);
}
