#include "lists.h"

/**
 * insert_dnodeint_at_index -Write a function that inserts a new node at a given
 * position.
 *
 * @h: pointer to list header.
 * @idx: is the index of the list where the new node should be added
 * @n: Number to add 
 *
 * Return:  the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *copy, *new;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	if (*h == NULL)
	{
		new->prev = NULL;
		new->n = n;
		new->next = NULL;
		*h = new;
		return (new);
	}

	copy = *h;
	for (i = 0; i < idx; i++)
	{
		copy = copy->next;
	}
	new->next = copy;
	new->n = n;
	new->prev = copy->prev;
	
	copy->prev->next = new; 
	copy->prev = new;

	return (new);
}
