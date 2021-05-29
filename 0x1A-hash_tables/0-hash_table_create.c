#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table.
 * @size: size of the array
 * Return: pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = NULL;

	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return(NULL);

	new_table->size = size;
	new_table->array = calloc(size, sizeof(hash_node_t *));

	if (new_table->array == NULL)
		return (NULL);

	return (new_table);
}