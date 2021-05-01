#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns the nth node of a dlistint_t
 * linked list.
 *
 * @head: pointer to list header.
 * @index: is the index of the node, starting at 0.
 *
 * Return: returns the nth node of a listint_t linked list.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (0);

	for (i = 0; i < index; i++)
		head = head->next;

	return (head);
}
