#include "lists.h"

/**
 * free_listint -function that frees a list_t list.
 *
 * @head: linked list.
 *
 *
 **/

void free_listint(listint_t *head)
{
	if (head == NULL)
		return;

	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
}
