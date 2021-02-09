#include "holberton.h"

/**
 * _islower - this command find the lowcaser
 *@c: the caracter print
 *
 * Return: int
 */
int _islower(int c)
{


	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
