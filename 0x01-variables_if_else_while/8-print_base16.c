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
	int n = 48, a = 97;

	while (n < 58)
	{
		putchar(n);
		n++;
	}
	while (a < 103)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
