#include "holberton.h"
/**
*print_last_digit - this command print the last digit
 *@a: return fuvtion
 *
 * Return: int
 */
int print_last_digit(int a)
{
	int ud = (a % 10);

	if (a < 0)
	{
		ud = ud * -1;
	}
	_putchar(ud + 48);
	return (ud);
}
