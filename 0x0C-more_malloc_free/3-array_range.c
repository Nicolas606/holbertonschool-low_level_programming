#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers.
 *
 * @min: minimal size.
 * @max: maximum size.
 *
 *
 *
 * Return: range
 *
 */
int *array_range(int min, int max)
{
	int i;
	int *range;

	if (min > max)
		return (NULL);

	range = malloc(sizeof(int) * (max - min + 1));

	if (range == 0)
		return (0);

	for (i = 0; min <= max; i++)
	{
		*(range + i) = min;
		min++;
	}

	return (range);
}
