#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index.
 * @n: number.
 * @index: the index, starting from 0 of the bit you want to set to 0.
 * Return: 1 if success or -1 if an error occured.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = *n & ~(unsigned long)(1 << index);

	return (1);
}
