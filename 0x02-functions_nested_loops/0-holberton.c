#include "holberton.h"

/**
 * main - is where the program initializes
 *
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int main(void)
{
	char frase[] = "Holberton";
	int a;

	for (a = 0 ; a < 9 ; a++)
	{
		_putchar(frase[a]);
	}
	_putchar('\n');
	return (0);
}
