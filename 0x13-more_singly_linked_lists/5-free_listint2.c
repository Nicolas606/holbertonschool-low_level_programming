#include "lists.h"

/**
 * free_listint2 -function that frees a list_t list.
 *
 * @head: linked list.
 *
 *
 *
 **/

void free_listint2(listint_t **head)
{
	listint_t *copia = *head;

	if (copia == NULL)
		return;

	while (copia != NULL)
	{
		free(copia);
		copia = copia->next;
	}
	*head = NULL;
}
