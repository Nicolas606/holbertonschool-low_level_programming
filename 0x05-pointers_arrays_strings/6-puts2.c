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
	int i = 0, j;

	while (str[i] != '\0')
		i++;

	for (j = 0; j <= i - 1; j = j + 2)
		_putchar(str[j]);

	_putchar('\n');
}
