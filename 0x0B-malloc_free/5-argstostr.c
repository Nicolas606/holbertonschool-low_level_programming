#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - function that concatenates all the arguments of your program.
 * created by your alloc_grid function.
 *
 * @ac: number of arguments.
 * @av: array of argument.
 *
 * Return: s
 *
 */

char *argstostr(int ac, char **av)
{
int *s;
int i, j;
int length = 0;

if(ac == 0 || av == 0)
return (0);

for (i = 0; i < ac; i++)
{
  for (j = 0; av[i][j]; j++)
  {
      length++;
  }
}

s = malloc(sizeof(char) * (length + ac + 1));

if (s == 0)
  return (0);









return (s);
}