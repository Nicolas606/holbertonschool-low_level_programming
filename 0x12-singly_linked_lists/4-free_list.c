#include "lists.h"

/**
 * free_list -function that frees a list_t list.
 *
 * @head: linked list.
 *
 *
 *
 **/

void free_list(list_t *head)
{
	list_t *copia;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		copia = head;
		head = head->next;
		free(copia->str);
		free(copia);
	}
}
