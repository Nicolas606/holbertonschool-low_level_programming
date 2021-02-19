#include "holberton.h"

/**
 * _strcmp - Function that compares two strings.
 * @s1: The first string to be compared.
 * @s2: Compare the second string.
 *
 * Return: char
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	if (s1[i] == s2[i])
		return (0);

	else
	{
		for (i = 0; s1[i] && s2[i]; i++)
		{
			if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		}
	}
	return (s1[i] - s2[i]);
}
