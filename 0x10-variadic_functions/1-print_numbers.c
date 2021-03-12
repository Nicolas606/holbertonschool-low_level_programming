#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers- function that prints numbers, followed by a new line.
 *
 * @separator: argument that separates
 * @n: number the
 *
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list lista;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(lista, n);

	for (i = 0; i < n - 1; i++)
	{
		printf("%d", va_arg(lista, int));

		if (separator != NULL)
			printf("%s", separator);
	}

		printf("%d\n", va_arg(lista, int));

		va_end(lista);

}
