#include "holberton.h"

/**
 * print_sign - this command print the sign 
 *@c: the caracter print
 *
 * Return: int
 */
int print_sign(int n)
{


	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
