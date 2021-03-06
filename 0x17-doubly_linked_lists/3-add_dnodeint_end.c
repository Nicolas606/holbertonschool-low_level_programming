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
	dlistint_t *new, *copy;


	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		new->prev = NULL;
		return (new);
	}

	copy = *head;

while (copy->next != NULL)
	copy = copy->next;

	new->prev = copy;
	copy->next = new;

	return (new);
}
