#include "holberton.h"

 /**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: This is the floating point value
 *
 *
 *
 * Return:  natural square root of a number.
 *
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (0);

	return (_sqrt_recursion_2(n, 0));
}

/**
 * _sqrt_recursion_2 - Function that calculates if n is integer.
 * @n: This is the floating point value
 * @i: Number to increment
 *
 *
 * Return: 1
 *
 */
int _sqrt_recursion_2(int n, int i)
{
	if (n == (i * i))
		return (i);

	if (n < (i * i))
		return (-1);

	else
		return (_sqrt_recursion_2(n, i + 1));

}

