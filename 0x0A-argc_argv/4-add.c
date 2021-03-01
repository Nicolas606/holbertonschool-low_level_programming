#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

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
	int i, j, suma;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j]; j++)
			{
				if (isdigit(argv[i][j]))
					continue;

				else
				{
					printf("Error\n");
					return (1);
				}
			}
			suma += atoi(argv[i]);
		}
	}

	printf("%d\n", suma);
	return (0);
}

