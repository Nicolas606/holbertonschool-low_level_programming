#include "lists.h"

/**
 * add_nodeint_end- function that adds a new node at the end of a list_t list.
 *
 * @head: Pointer to list header.
 * @n: the integer to print.
 *
 * Return: The address of the new element or NULL if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *copia = *head;


	if (head == 0)
		return (0);

	new = malloc(sizeof(listint_t));
	if (new == 0)
	{
		free(new);
		return (0);
	}

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (copia->next != NULL)
		copia = copia->next;

	copia->next = new;

	return (new);
}
