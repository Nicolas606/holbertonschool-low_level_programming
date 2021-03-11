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

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array != 0 || size != 0 || action != 0)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
