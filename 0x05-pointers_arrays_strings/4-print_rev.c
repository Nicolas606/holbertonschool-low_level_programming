#include "holberton.h"

/**
 * print_rev - function that prints a string, in reverse
 * @s: variable that the exercise gives us
 *
 * Return: void
 */
void print_rev(char *s)
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
