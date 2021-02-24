#include <unistd.h>
#include "holberton.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: This is the C string to be scanned
 * @accept: This is the C string containing the characters to match.
 *
 *
 * Return: s
 *
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			return (s + i);
		}
	}
	return ('\0');
}
