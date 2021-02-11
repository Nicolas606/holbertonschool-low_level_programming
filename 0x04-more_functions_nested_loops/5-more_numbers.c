#include "holberton.h"

/**
 * more_numbers - this command print the numbers from 0 to 14
 *
 *
 * Return: int
 */
void more_numbers(void)
{
	int f, c;

	for (f = 0; f <= 9; f++)
	{
		for (c = 0; c < 15; c++)
		{
			_putchar((c % 10) + 48);
			_putchar((c / 10) + 48);
		}
		_putchar('\n');
	}
}
