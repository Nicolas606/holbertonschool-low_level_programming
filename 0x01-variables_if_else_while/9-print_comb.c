#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number = 48;

	while (number < 58)
	{
		putchar(number);
		if (number < 57)
		{
			putchar(44);
			putchar(32);
		}
		number++;
	}
	putchar('\n');
	return (0);
}
