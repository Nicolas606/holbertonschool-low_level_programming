#include "holberton.h"

/**
 * _pow_recursion - function that returns the value of x raised
 *		to the power of y.
 * @x: This is the floating point base value.
 * @y: This is the floating point power value
 *
 *
 * Return: s
 *
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	else
		return (_pow_recursion(x, y - 1) * x);

}
