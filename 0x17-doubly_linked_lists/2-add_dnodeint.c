#include "lists.h"

/**
 * dlistint_len - unction that returns the number of elements in a linked
 * dlistint_t list.
 *
 * @h: Pointer to list header.
 *
 * Return: Size of linked list
 *
 **/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return(NULL);

	new->prev = NULL;
	new->n = n;
	new->next = *head;

	if (*head != NULL)
		(*head)->prev = new;

	*head = new;

	return(new);
}
