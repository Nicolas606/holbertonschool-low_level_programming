#include "lists.h"

/**
 * free_list -function that frees a list_t list.
 *
 * @head: linked list.
 *
 *
 *
 **/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *copy;

	if (head == NULL)
		return;

	while (head != NULL )
	{
		copy = head;
		head = head->next;
		free(copy->prev);
		free(copy);
	}
}
