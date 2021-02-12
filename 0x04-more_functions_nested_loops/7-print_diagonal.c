#include "holberton.h"

/**
 * print_diagonal - print the vertical line 
 * @n:the numbers of print \
 *
 * Return: void.
 */
void print_diagonal(int n)
{
	int f, c;

	for (f = 1; f <= n; f++)
	{
		for (c = 1; c < f; c++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
