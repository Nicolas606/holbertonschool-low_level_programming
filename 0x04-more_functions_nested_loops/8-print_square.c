#include "holberton.h"

/**
 * print_square - draws a straight line in the terminal
 *@size: the comand return
 *
 * Return: void
 */
void print_square(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
