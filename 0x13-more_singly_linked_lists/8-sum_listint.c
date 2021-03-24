#include "lists.h"

/**
 * sum_listint -function that returns the sum of all the data (n) of a
 * listint_t linked list.
 *
 * @head: pointer to list header.
 *
 * Return: returns the sum of all the data (n) of a listint_t linked list
 */

int sum_listint(listint_t *head)
{
	int sum;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}

	return (sum);
}
