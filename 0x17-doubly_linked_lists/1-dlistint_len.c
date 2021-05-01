#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements in a linked 
 * dlistint_t list.
 *
 * @h: Pointer to list header.
 *
 * Return: Size of linked list
 *
 **/

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	if (h == 0)
		return (0);

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
