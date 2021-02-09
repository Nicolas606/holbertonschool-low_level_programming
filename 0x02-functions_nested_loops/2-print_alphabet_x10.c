#include "holberton.h"

/**
 * print_alphabetx10 : this command print the alphabet 10 times
 * 
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int a = 0;

	while(a < 10)
	{
		int b = 97;

		while(b < 123)
		{
			_putchar(b);	
			b++;
		}
	
		_putchar('\n');
		a++;
	}
}
