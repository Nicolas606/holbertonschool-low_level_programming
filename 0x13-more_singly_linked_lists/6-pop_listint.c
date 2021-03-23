#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t linked
 * list, and returns the head node’s data (n).
 *
 * @head: Pointer to list header.
 *
 * Return:  the head node’s data (n).
 */

int pop_listint(listint_t **head)
{
	listint_t *copia = *head;
	int data;

	if (head == NULL)
		return (0);

	data = copia->n;
	free(copia);
	*head = copia->next;

	return (data);
}
