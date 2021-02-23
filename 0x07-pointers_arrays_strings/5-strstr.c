#include <unistd.h>
#include "holberton.h"

/**
 * _strstr - function that locates a substring.
 * @haystack: This is the main C string to be scanned.
 * @needle: This is the small string to be searched with-in haystack string
 *
 *
 * Return: haystack
 *
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;

	for(; haystack[i]; i++)
	{
		if (haystack[i] == needle[j])
		{
			while(needle[j] && needle[j] == haystack[i])
			{
				i++;
				j++;
			}
		}

		if(needle[j] == '\0')
		{
			i = i-j;
			return (haystack + i);
		}
	}
	return ('\0');
}
