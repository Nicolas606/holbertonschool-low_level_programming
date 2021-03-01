#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point.
 * @argc: The number of command line arguments and The size of the argv array.
 * @argv: An array containing the program command line arguments and An array.
 * of size argc.
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;

	return (0);
}
