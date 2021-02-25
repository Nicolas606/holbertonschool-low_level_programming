#include "holberton.h"

/**
 * factorial -  function that returns the factorial of a given number.
 * @n: Number to factor.
 *
 *
 *
 * Return: s
 *
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n <= 1)
		return (1);

	else
		return (n * factorial(n - 1));

}
