#include "holberton.h"

/**
 * rev_string - function that reverses a string
 * @s: variable that the exercise gives us
 *
 * Return: void
 */
void rev_string(char *s)
{
	int memory = 0;
	int i;
	int j;

	while (s[memory] != '\0')
	{
		memory++;
	}

	for (i = 0 ; i <= memory; i++)
	{
		j = *(s + i);
		*(s + i) = *(s + memory - 1);
		*(s + memory - 1) = j;
		memory--;
	}
}
