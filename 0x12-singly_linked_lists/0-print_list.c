#include "lists.h"

/**
 * struct list_s - singly linked list
 *
 * @h: Pointer to list header.
 *
 * Return: Size of linked list
 *
 **/

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	if (h == 0)
		return (0);

	while (h != NULL)
	{
		if (h->str != 0)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		nodes++;
		h = h->next;
	}
	return (nodes);
}
