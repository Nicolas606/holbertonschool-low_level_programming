#include <stdio.h>

/**
 * main -  prints the name of the file it was compiled from, followed by
 * a new line.
 *
 * Return: 0
 **/
int main(void)
{
  printf("%S\n", __FILE__);
  return (0);
}