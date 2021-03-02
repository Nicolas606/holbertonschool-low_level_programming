#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array- function that creates an array of chars, and initializes
 * it with a specific char.
 * @size: amount of memory to reserve
 * @c: caracter to recive
 *
 *
 * Return: s
 *
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size <= 0)
		return (0);

	s = malloc(sizeof(char) * size);

	for (i = 0; i <= size; i++)
		*(s + i) = c;


	*(s + i) = '\0';

	return (s);

}
