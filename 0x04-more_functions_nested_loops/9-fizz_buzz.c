#include "holberton.h"
#include <stdio.h>

/**
 * main - print the number form 1 to 100
 *
 *
 * Return: voidi
 */
int main(void)
{
	int numeros = 100;

	for (numeros = 1; numeros <= 100; numeros++)
	{
		if (numeros % 3 == 0 && numeros % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (numeros % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (numeros % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", numeros);
		}
	}
	printf("\n");
	return (0);
}
