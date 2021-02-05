#include <stdio.h>
/* more headers goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */
int main(void)
{
	int li = 48;

	while (li < 58)
	{
		int co = 48;

		while (co < 58)
		{
			putchar(li);
			putchar(co);
			if (li != 57 || co != 57)
			{
				putchar(44);
				putchar(32);
			}
			co++;
		}

		li++;
	}
	putchar(10);
	return (0);
}
