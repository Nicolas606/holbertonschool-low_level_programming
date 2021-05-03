#include "lists.h"

/**
 * free_dlistint -function that frees a list_t list.
 *
 * @head: linked list.
 *
 **/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *copy;

	if (head != NULL)
	{
		copy = head;
		while (copy != NULL && copy->next != NULL)
		{
			copy = copy->next;
			free(copy->prev);
		}
		free(copy);
	}
}
