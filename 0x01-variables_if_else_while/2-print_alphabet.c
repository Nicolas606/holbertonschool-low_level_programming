#include<stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int letra;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* your code goes there */

	letra = 97;

	while (letra > 122)
	{
		putchar(letra);
		letra = letra + 1;
	}
	return (0);
}

