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
	int k;
	unsigned int rest;

	rest = 0;

	for (i = 0; s[i]; i++)
		{
			for (j = 0; accept[j]; j++)
			{
				if (s[i] == accept[j])
				{
					k = 1;
					rest++;
					break;
				}
				else
					k = 0;
			}
			if (k == 0)
				break;
		}
		return (rest);
}
