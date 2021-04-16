#include "holberton.h"
#include <stdio.h>

/**
 * main - program that prints the numbers from 1 to 100, followed by a new line.
 * But for multiples of three print Fizz instead of the number and for the 
 * multiples of five print Buzz. For numbers which are multiples of both three 
 * and five print FizzBuzz.
 *
 * Return: voidi
 */
int main(void)
{
	int numeros;

	printf("%d", 1);
	for (numeros = 2; numeros <= 100; numeros++)
	{
		if (numeros % 3 == 0 && numeros % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (numeros % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (numeros % 5 == 0)
		{
			printf(" Buzz");
		}
		else
		{
			printf(" %d", numeros);
		}
	}
	printf("\n");
	return (0);
}
