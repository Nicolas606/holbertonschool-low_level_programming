#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *gcc = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	write(2, gcc, 52);
	return (1);
}
