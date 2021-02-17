#include "holberton.h"
#include <stdio.h>

/**
 * print_array -  function that prints n elements of an array of integers,
 * followed by a new line.
 * @a: variable that the exercise gives us
 * @n: variable that the exercise give us
 * Return: int
 */
void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
	{
		printf("\n");
	}
	else
	{
		for (i = 0; i < (n - 1) ; i++)
		{
			printf("%d, ", *a);
			a = a + 1;
		}
	}
	printf("%d", *a);
	printf("\n");
}
