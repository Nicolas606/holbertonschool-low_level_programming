#include "holberton.h"

/**
 * print_line - this command print the numbers from 0 to 14
 *
 *
 * Return: int
 */
void print_line(int n)
{
	int i;

	for(i = 0; i <=n ; i++)
	{
		if(i > 0)
		{
		_putchar('_');
		}
	}
	_putchar('\n');	
}
