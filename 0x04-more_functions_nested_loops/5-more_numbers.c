#include "holberton.h"

/**
 * more_numbers - this command print the numbers except 2 and 4
 *
 *
 * Return: int
 */
void more_numbers(void)
{
	char number[] = "01234567891011121314";
	int f, c;

	for (f = 0; f <= 9; f++)
	{
		for (c = 0; c < 21; c++)
		{
			_putchar(number[c]);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
