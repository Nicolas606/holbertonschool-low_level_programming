#include "lists.h"

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	if(h == 0)
		return (0);

	while(h != NULL)
	{
		if(h->str != 0)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		nodes++;
		h = h->next;
	}
	return (nodes);
}
