#include "lists.h"

/**
 * add_dnodeint_end -function that adds a new node at the end of a dlistint_t
 * list.
 *
 * @head: Pointer to list header.
 * @n: Number to print
 *
 * Return: the address of the new element, or NULL if it failed
 *
 **/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *copy = *head;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	if (*head == NULL)
		{
			*head = new;
			new->prev = NULL;
			new->n = n;
			new->next = NULL;
			return (new);
		}

while (copy->next != NULL)
	copy = copy->next;

	new->prev = copy;
	new->n = n;
	copy->next = new;

	return (new);
}
