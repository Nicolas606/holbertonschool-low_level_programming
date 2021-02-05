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
	int l = 97;

	while (l < 123)
	{
		if (l != 101 && l != 113)
		{
			putchar(l);
		}

		l++;
	}
	putchar('\n');
	return (0);
}
