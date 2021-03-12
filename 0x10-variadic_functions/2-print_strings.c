#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings- function that prints strings, followed by a new line.
 *
 * @separator: argument that separates
 * @n: number of the string.
 *
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *j;
	va_list lista;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(lista, n);

	for (i = 0; i < n - 1; i++)
	{
		j = va_arg(lista, char *);

		if (j != NULL)
			printf("%s", j);

		else
			printf("(nil)");

		if (separator != NULL)
			printf("%s", separator);
	}

	j = va_arg(lista, char*);

	printf("%s\n", (j != NULL) ? j : "(nil)");
}
