#include "holberton.h"

/**
 * print_numbers - this command find the lowcaser
 *
 *
 * Return: int
 */
void print_numbers(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
