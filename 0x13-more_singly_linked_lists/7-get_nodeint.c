# include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a listint_t
 * linked list.
 *
 * @head: pointer to list header.
 * @index: is the index of the node, starting at 0.
 *
 * Return: returns the nth node of a listint_t linked list.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (0);

		for (i = 0; i < index ; i++)
			head = head->next;

		return (head);
}
