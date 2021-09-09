#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: the hash table you want to add or update the key/value to
 * @key: is the key
 * @value: is the value associated with the key.
 * Return: pointer to the newly created hash table
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *head, *new;
	unsigned long int posicion = 0;

	if (ht == NULL || key == NULL || key[0] == '\0' || value == NULL)
		return (0);

	posicion = key_index((const unsigned char *)key, ht->size);

	head = ht->array[posicion];

	while (head)
	{
		if (strcmp(key, head->key) == 0)
		{
			free(head->value);
			head->value = strdup(value);
			return (1);
		}
		head = head->next;
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);

	new->value = strdup(value);
	new->key = strdup(key);
	new->next = head;
	ht->array[posicion] = new;
	return (1);
}
