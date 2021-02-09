#include "holberton.h"

/**
*_abs - this command print the sign
 *@c: the caracter print
 *
 * Return: int
 */
int _abs(int c)
{

	if (c >= 0)
	{
		return (c);
	}
	else
	{
		return (c * -1);
	}
	return (0);
}
