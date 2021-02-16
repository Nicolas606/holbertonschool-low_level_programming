#include "holberton.h"

/**
 * _puts - function that prints a string, followed by a new line, to stdout
 * @str: variable that the exercise gives us
 *
 * Return: int
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
