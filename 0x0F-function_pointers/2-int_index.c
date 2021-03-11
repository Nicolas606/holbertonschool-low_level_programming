#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator- function that executes a function given as a parameter
 * on each element of an array.
 * @array: memory space where you drink
 * @size: memory space that is taken
 * @action: function copies number the bytes
 *
 *
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if(array == 0 || size <= 0 || cmp == 0)
		return(-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
