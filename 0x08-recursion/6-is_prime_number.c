#include "holberton.h"

/**
 * _is_prime_number - function that returns 1 if the input integer is a
 * primenumber,otherwise return 0.
 * @n: This is the floating point value
 *
 *
 *
 * Return:  natural square root of a number.
 *
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (is_prime_number_aux(n, 2));
}

/**
 * is_prime_number_aux - Function that calculates if n is integer.
 * @n: This is the floating point value
 * @i: Number to increment
 *
 *
 * Return: 1
 *
 */
int is_prime_number_aux(int n, int i)
{
	if (i > (n / 2))
		return (1);

	if (n % i == 0)
		return (0);

	return (is_prime_number_aux(n, i + 1));
}
