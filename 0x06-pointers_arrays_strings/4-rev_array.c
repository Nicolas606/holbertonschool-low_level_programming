#include "holberton.h"

/**
 * reverse_array - function that reverses the content of an array of integers.
 *
 * @a: Array
 * @n: number the elements of array
 *
 * Return: char
 */
void reverse_array(int *a, int n)
{
	int i, temporary;

	for (i = 0; i < n; i++)
	{
		temporary = a[n - 1];
		a[n - 1] = a[i];
		a[i] = temporary;
		n--;
	}
}
