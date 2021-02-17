#include "holberton.h"

/**
 * _strcpy -  function that copies the string pointed to by src, including
 * the terminating null byte (\0), to the buffer pointed to by dest
 * @dest: variable that the exercise gives us
 * @src: variable that the exercise give us
 * Return: int
 */
char *_strcpy(char *dest, char *src)
{
	char *p = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (p);
}
