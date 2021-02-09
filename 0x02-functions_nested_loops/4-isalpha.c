#include "holberton.h"

/**
 * _isalpha - this command find the lowcaser and upcaser
 *@c: the caracter print
 *
 * Return: int
 */
int _isalpha(int c)
{


	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
