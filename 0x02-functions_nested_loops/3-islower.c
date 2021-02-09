#include "holberton.h"

/**
 * _islower - this command find the lowcaser
 *
 *
 * Return: int
 */
int _islower(int c)
{


	if ( c >= 'a' && c <= 'z' )
	{
		return(1);
	}
	else 
	{
		return(0);
	}
}
