#include "holberton.h"

/**
*print_last_digit - this command print the last digit
 *
 *
 * Return: int
 */
int print_last_digit(int)
{
	int a, b;

	for (a = 0; a < 24; a++)
	{
		for (b = 0; b <= 59 ; b++)
		{
			_putchar((a / 10) + 48);
			_putchar((a % 10) + 48);
			_putchar(':');
			_putchar((b / 10) + 48);
			_putchar((b % 10) + 48);
			_putchar('\n');
		}
	}
}
