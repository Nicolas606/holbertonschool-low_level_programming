#include "holberton.h"

/**
 * cap_string - function that capitalizes all words of a string.
 * @str: the string.
 *
 * Return: string changed.
 */

char *cap_string(char *str)
{
	int i = 0, j = 0;
	char *separators = "\t\n,;.!?\"(){}";

	if (str[0] >= 97 && str[0] <= 122)
		str[0] = str[0] - 32;

	while (str[i])
	{
		while (separators[j])
		{
			if (str[i] == separators[j] && str[i + 1] != '\0')
			{
				if (str[i + 1] >= 97 && str[i + 1] <= 122)
				{
					str[i + 1] = str[i + 1] - 32;
				}
				break;
			}
			j++;
		}
		i++;
	}
	return (str);
}
