#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array, using malloc.
 *
 * @nmemb: Number of elementes to allocate.
 * @size: Size bytes
 *
 *
 *
 * Return: calloc.
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *calloc1;

	if (nmemb == 0 || size == 0)
		return (NULL);

	calloc1 = malloc(nmemb * size);

	if (calloc1 == 0)
		return (0);

	for (i = 0; i < nmemb * size; i++)
		*(calloc1 + i) = 0;

	return (calloc1);
}
