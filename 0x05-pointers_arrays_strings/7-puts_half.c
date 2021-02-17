#include "holberton.h"

/**
 * puts_half - print a string to stdout.
 * @str: string to be printed in reverse.
 *
 * Return: void.
 */

void puts_half(char *str)
{
	int j = 0;
	int i;

	while (*(str + j) != '\0')
	{
		j++;
	}

	for (i = (j + 1) / 2; i < j; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}

