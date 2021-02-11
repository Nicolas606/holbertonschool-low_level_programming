#include "stdio.h"

/**
 * print_line - this command print the numbers from 0 to 14
 *
 *
 * Return: int
 */
int main(void)
{
	int numeros = 100;

	for (numeros = 1; numeros <= 100; numeros++)
	{
		if( numeros % 3 == 0)
		{
			printf("Fizz ");
		}
		if(numeros % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (numeros % 3 != 0 && numeros % 5 != 0)
		{
			printf("%d ", numeros);
		}
	}
	printf("\n");
	return (0);
}
