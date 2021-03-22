#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 *
 * @head: Pointer to list header.
 * @str: The string to duplicate.
 *
 * Return: The address of the new element or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int length = 0;

	if (head == 0)
		return (0);

	new = malloc(sizeof(list_t));
	if (new == 0)
	{
		return (0);
	}

	new->str = strdup(str);
	if (new->str == 0)
	{
		return (0);
	}

	while (str[length])
		length++;

	new->len = length;
	new->next = *head;

	*head = new;

	return (new);
}
