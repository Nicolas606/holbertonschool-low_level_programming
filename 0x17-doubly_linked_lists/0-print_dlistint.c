#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a dlistint_t list.
 *
 * @h: Pointer to list header.
 *
 * Return: Size of linked list
 *
 **/

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	if (h == 0)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
