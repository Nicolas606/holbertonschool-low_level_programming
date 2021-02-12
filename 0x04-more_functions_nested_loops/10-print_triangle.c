#include "holberton.h"

/**
 * print_triangle - pritn the triangle in the terminal
 *@size: number of times it prints #
 *
 * Return: void
 */

void print_triangle(int size)
{
	int f, c, e;

	for (f = 1; f <= size; f++)
	{
		for (e = 1; e <= (size - f); e++)
		{
			_putchar(' ');
		}
		for (c = 1; c <= f; c++)
		{
			_putchar('#');
		}
		 _putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
