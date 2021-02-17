#include "holberton.h"

/**
 * rev_string - function that reverses a string
 * @s: variable that the exercise gives us
 *
 * Return: void
 */
void rev_string(char *s)
{
	int length = 0;
	int rev;

	while (*(s + length) != '\0')
	{
		length++;
	}

	for (rev = (length - 1); rev >= 0; rev--)
	{
		_putchar(*(s + rev));
	}
	_putchar('\n');
}
