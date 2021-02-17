#include "holberton.h"
#include <stdio.h>

/**
 * puts2 - function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: variable that the exercise gives us
 *
 * Return: int
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1) ; i++)
	{
		printf("%d, ", *a);
		a = a + 1;
	}
	printf("%d", *a);	
	printf("\n");

}
