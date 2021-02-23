#include <unistd.h>
#include "holberton.h"

/**
 * _memcpy- function that copies memory area
 * @des: memory space where you drink 
 * @src: memory space that is taken
 * @n: function copies number the bytes
 *
 * Return: s
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
