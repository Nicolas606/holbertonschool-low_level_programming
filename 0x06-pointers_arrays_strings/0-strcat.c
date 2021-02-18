#include "holberton.h"

/**
 * _strcat-function that concatenates two strings.
 * @dest: variable that the exercise gives us
 * @src: variable that the exercise gives us
 *
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	char *i;
	char *p;

	for (i = dest; *i != '\0'; i++)
		;

	for (p = src; *p != '\0'; p++, i++)
		*i = *p;

	*p = '\0';

	return (dest);
}
