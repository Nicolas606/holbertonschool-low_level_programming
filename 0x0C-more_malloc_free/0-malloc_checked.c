#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc.
 *
 * @b: size of memory that needs to be accommodated in malloc.
 *
 *
 * Return: s
 *
 */
void *malloc_checked(unsigned int b)
{
	void *memory;

	memory = malloc(b);

	if (memory == 0)
		exit(98);

	return (memory);
}

