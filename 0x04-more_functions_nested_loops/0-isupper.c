#include "holberton.h"

/**
 * _isupper - this command find the lowcaser
 *@c: the caracter print
 *
 * Return: int
 */
int _isupper(int c)
{


	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
