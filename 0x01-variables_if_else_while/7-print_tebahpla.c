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
	int n = 122;

	while (n > 96)
	{
		putchar(n);
		n = n - 1;
	}
	putchar('\n');
	return (0);
}
