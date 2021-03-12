#include <stdarg.h>
#include <stdio.h>

/**
 * print_all- function that prints anything.
 *
 * @format:  list of types of arguments.
 *
 *
 */

void print_all(const char *const format, ...)
{
	int i = 0;
	char *space = "", *string;
	va_list print_types;

	va_start(print_types, format);

	while (format != '\0' && format[i] != '\0')
	{
		switch (format[i])
		{
		case 'c':
			printf("%s%c", space, va_arg(print_types, int));
			break;
		case 'i':
			printf("%s%d", space, va_arg(print_types, int));
			break;
		case 'f':
			printf("%s%f", space, va_arg(print_types, double));
			break;
		case 's':
			string = va_arg(print_types, char *);
			if (string == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s%s", space, string);
			break;
		default:
			i++;
			continue;
		}
		space = ", ";
		i++;
	}
	printf("\n");
	va_end(print_types);
}
