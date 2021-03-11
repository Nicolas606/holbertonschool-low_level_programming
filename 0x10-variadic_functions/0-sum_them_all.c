#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all- function that returns the sum of all its parameters.
 *
 * @n: number the
 *
 * Return: suma
 *
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int suma = 0;
	va_list ap;

	if (n == 0)
		return (0);

	va_start(ap, n);

	for (i = 0; i < n; i++)
		suma += va_arg(ap, int);

	va_end(ap);

	return (suma);
}
