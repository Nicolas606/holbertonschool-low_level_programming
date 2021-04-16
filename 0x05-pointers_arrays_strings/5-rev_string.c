#include "holberton.h"

/**
 * rev_string - function that reverses a string
 * @s: variable that the exercise gives us
 *
 * Return: void
 */
void rev_string(char *s)
{
	int w = 0, i;
	char j;

	while (s[w] != '\0')
	{
		w++;
	}

	for (i = 0 ; i < w ; i++)
	{
		j = *(s + i);
		*(s + i) = *(s + w - 1);
		*(s + w - 1) = j;
		w--;
	}
}
