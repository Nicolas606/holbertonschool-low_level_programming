#include "holberton.h"
#include <stdio.h>
/**
*print_to_98 - this command add the two numbers
 *@n: return fuction
 *
 * Return: int
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
	else
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	printf("98\n");
}
