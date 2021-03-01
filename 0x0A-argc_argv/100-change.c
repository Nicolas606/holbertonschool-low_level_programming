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
	int coins[] = {25, 10, 5, 2, 1};
	int suma = 0;
	int total_coins = 0;
	int i;
	int cents = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}


	for (i = 0; i < 5; i++)
	{
		while (suma < cents)
		{
			if (suma + coins[i] <= cents)
			{
				suma += coins[i];
				total_coins += 1;
			}

			else
			break;
		}
	}

	printf("%d\n", total_coins);
	return (0);
}
