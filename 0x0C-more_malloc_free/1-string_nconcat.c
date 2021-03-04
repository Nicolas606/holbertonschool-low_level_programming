#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat- Write a function that concatenates two strings.
 *
 * @s1: First string.
 * @s2: Second string.
 * @n: First n bytes of s2.
 *
 *
 * Return: concatenar.
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int length1 = 0;
	int length2 = 0;
	char *concatenar;
	unsigned int i, j;

	if (s1 == 0)
		s1 = "";

	if (s2 == 0)
		s2 = "";

	for (i = 0; s1[i]; i++)
		length1++;

	for (j = 0; *(s2 + j) != '\0'; j++)
		length2++;

	concatenar = malloc(sizeof(char) * (length1 + length2 + 1));

	if (concatenar == 0)
		return (NULL);

	for (i = 0; s1[i]; i++)
		concatenar[i] = s1[i];

	for (j = 0; *(s2 + j) != '\0' && j < n; j++)
	{
		concatenar[i] = s2[j];
		i++;
	}

	return (concatenar);
}
