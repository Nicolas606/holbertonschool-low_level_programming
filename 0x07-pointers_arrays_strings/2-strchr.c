#include <unistd.h>
#include "holberton.h"

/**
 * _strchr - function that locates a character in a string.
 * @s: the string to be retrieved
 * @c: the character to search for
 *
 *
 * Return: s
 *
 */
char *_strchr(char *s, char c)
{
	int i;
	int j;

	for (j = 0; s[j]; j++)
		;

	for (i = 0; i <= j ; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
