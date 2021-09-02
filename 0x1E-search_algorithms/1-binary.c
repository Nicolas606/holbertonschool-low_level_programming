#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm.
 * @array: a pointer to the first element of the array to search in.
 * @size: the number of elements in array.
 * @value: value is the value to search for.
 * Return: the first index where value is located.
 */
int binary_search(int *array, size_t size, int value)
{
    int i, low = 0, r = size - 1, mid = (low + r) / 2;

    if (array == NULL)
        return (-1);

    while (low <= r)
    {
        printf("Searching in array: ");
        for (i = low; i <= r - 1; i++)
            printf("%d, ", array[i]);
        printf("%d\n", array[i]);

        if (value == array[mid])
            return (mid);
        else if (value < array[mid])
            r = mid - 1;
        else
            low = mid + 1;
        mid = (low + r) / 2;
    }
    return (-1);
}
