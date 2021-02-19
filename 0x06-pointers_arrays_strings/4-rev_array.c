#include "holberton.h"

/**
 * string_toupper - function that changes all lowercase letters of a
 * string to uppercase.
 * @p: variable that we enter as a string
 *
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
