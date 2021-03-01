#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argc: The number of command line arguments and The size of the argv array.
 * @argv: An array containing the program command line arguments and An array
 * of size argc.
 *
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}
