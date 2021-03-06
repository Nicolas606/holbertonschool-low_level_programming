#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning of a list_t
 * list.
 *
 * @head: Pointer to list header.
 * @n: the integer to print.
 * Return: The address of the new element or NULL if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == 0)
		return (0);

	new = malloc(sizeof(listint_t));
	if (new == 0)
	{
		return (0);
	}

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
