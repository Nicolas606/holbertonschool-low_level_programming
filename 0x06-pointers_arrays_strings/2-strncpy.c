#include "holberton.h"

/**
 * _strncpy - function that copies a string.
 * @dest: point in the destination array to store the content of the copy.
 * @src: the string to copy.
 * @n: the number of characters copied from the font.
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int length = 0;

	for (i = 0; src[i] ; i++)
		length++;

	for (i = 0; i < length && i < n; i++)
		dest[i] = src[i];

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
