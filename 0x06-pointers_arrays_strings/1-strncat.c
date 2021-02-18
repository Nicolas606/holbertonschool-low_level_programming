#include "holberton.h"

/**
 * _strncat -function that concatenates two strings.
 * @dest: Destination Matrix.
 * @src: chain for annexation.
 * @n: maximum number of characters for append.
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, s, d;

	s = 0;
	for (i = 0; src[i] != '\0'; i++)
		s++;

	d = 0;
	for (i = 0; dest[i] != '\0'; i++)
		d++;

	if (n > s)
		n = s;

	for (i = 0; i < n; i++)
		dest[d + i] = src[i];

	dest[d + i] = '\0';

	return (dest);
}
