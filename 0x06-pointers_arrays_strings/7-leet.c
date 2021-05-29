#include "holberton.h"

/**
 * leet -function that encodes a string into 1337.
 * @str: the string.
 *
 * Return: string changed.
 */

char *leet(char *str)
{
	int i, j;
	char letter[] = "aAeEoOtTlL";
	char number[] = "4433007711";

	for (i = 0; str[i]; i++)
	{
		for (j = 0; letter[j]; j++)
		{
			if (str[i == letter[j]])
			{
				str[i] = number[j];
				break;
			}
		}
	}
	return(str);
}
