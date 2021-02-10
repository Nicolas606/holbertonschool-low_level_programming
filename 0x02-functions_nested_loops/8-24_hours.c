#include "holberton.h"

/**
*jack_bauer - this command print the sign
 *
 *
 * Return: int
 */
void jack_bauer(void)
{
	int a, b;

	for (a = 0; a < 25; a++)
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
