#include "holberton.h"

/**
 * print_numbers - function that swaps the values of two integers
 * @*a: 
 * @*b:
 * Return: int
 */
void swap_int(int *a, int *b)
{
	int c = *b;
	
	*b = *a;
	*a = c;
}
