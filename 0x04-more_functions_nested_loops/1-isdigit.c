#include "holberton.h"

/**
 * _isdigit - this command find the numbers
 *@c: the caracter print
 *
 * Return: int
 */
int _isdigit(int c)
{


	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
