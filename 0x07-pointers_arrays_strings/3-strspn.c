#include <unistd.h>
#include "holberton.h"

/**
 * _strspn - function that locates a character in a string.
 * @s: string to be scanned
 * @accept: string containing the characters to match.
 *
 *
 * Return: rest
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	unsigned int rest;

	rest = 0;

	/*if (s[i] || accept[j])
		return (rest);

	else
	{*/
		for (i = 0; s[i]; i++)
		{
			for (j = 0; accept[j]; j++)
			{
				if (s[i] == accept[j])
					rest++;
			}
		}
	
	return (rest);
}

