#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space in
 *  memory, which contains a copy of the string given as a parameter.
 *
 * @str: String that we are going to copy.
 *
 *
 *
 * Return: s
 *
 */

char *_strdup(char *str)
{
	int i;
	int length = 0;
	char *s;

	if (str == 0)
		return (0);

	while (str[length])
		length++;

	s = malloc(sizeof(char) * length + 1);

	for (i = 0; i <= length; i++)
		*(s + i) = *(str + i);

	*(s + i) = '\0';

	return (s);
}
