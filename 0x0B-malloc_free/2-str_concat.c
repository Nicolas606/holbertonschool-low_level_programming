#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings.
 *
 * @s1: variable where we are going to concatenate.
 * @s2: variable that we are going to concatenate.
 *
 *
 *
 * Return: s
 *
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	int lengths1 = 0;
	int lengths2 = 0;
	char *s;
	char *space = "";

	if (s1 == NULL)
		s1 = space;

	if (s2 == NULL)
		s2 = space;


	while (s1[lengths1])
		lengths1++;

	while (s2[lengths2])
		lengths2++;

	s = malloc(sizeof(char) * (lengths1 + lengths2 + 1));

	for (i = 0; i <= lengths1; i++)
		*(s + i) = *(s1 + i);

	for (i = 0, j = lengths1; i <= lengths2; i++, j++)
		*(s + j) = *(s2 + i);

	return (s);
}
