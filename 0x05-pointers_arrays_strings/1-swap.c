#include "holberton.h"

/**
 * swap_int - function that swaps the values of two integers
 * @a: variable that the exercise gives us
 * @b: variable that the exercise gives us
 * Return: int
 */
void swap_int(int *a, int *b)
{
	int c = *b;

	*b = *a;
	*a = c;
}
