#include "lists.h"

/**
 * print_listint - function that prints all the elements of a list_t list.
 *
 * @h: Pointer to list header.
 *
 * Return: Size of linked list
 *
 **/

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	if (h == 0)
		return (0);

	while (h != NULL)
	{
		if (h->n != 0)
			printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
