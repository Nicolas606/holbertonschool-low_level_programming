#include "holberton.h"

/**
 * puts2 - function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: variable that the exercise gives us
 *
 * Return: int
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str = str + 2;
	}
	_putchar('\n');
}
