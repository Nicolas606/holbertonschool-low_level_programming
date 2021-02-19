#include "holberton.h"

/**
 * _string_toupper - function that changes all lowercase letters of a 
 * string to uppercase.
 * @p: variable that we enter as a string
 *
 *
 * Return: char
 */
char *string_toupper(char *p)
{
	int i = 0;

	for (i = 0; p[i]; i++)
	{
		if (p[i] >= 97 && p[i] <= 122)
			p[i] = p[i] - 32;
	}
	return (p);
}
