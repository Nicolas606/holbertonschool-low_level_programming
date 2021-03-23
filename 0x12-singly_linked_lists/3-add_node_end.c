#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list_t list.
 *
 * @head: Pointer to list header.
 * @str: The string to duplicate.
 *
 * Return: The address of the new element or NULL if it failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *copia = *head;
	unsigned int length = 0;

	if (head == 0)
		return (0);

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return (0);
	}

	new->str = strdup(str);
	if (new->str == 0)
	{
		free(new);
		return (0);
	}

	while (str[length])
		length++;

	new->len = length;
	new->next = NULL;

	if (*head == NULL)
		{
			*head = new;
			return(new);
		}

		while (copia->next != NULL)
				copia = copia->next;

	copia->next = new;

	return (new);

	}
