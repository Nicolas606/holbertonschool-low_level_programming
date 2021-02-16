#include "holberton.h"

/**
 * _strlen - function that swaps the values of two integers
 * @s: variable that the exercise gives us
 *
 * Return: int
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s = s + 1;
	}
	return (length);
}
