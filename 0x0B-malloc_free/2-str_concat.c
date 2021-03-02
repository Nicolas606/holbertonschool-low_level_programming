#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space in
 *  memory, which contains a copy of the string given as a parameter.
 *
 * @str: String that we are going to copy.
 *
 *
 *
 * Return: s
 *
 */

char *str_concat(char *s1, char *s2)
{
  int i;
  int j;
  int lengths1 = 0;
  int lengths2 = 0;
  char *s;

  while (s1[lengths1])
      lengths1++;

  while (s2[lengths2])
      lengths2++;

  
  s = malloc(sizeof(char) * (lengths1 + lengths2 + 1));

  for (i = 0; i <= lengths1; i++)
    *(s + i) = *(s1 + i);

  for (i = 0, j= lengths1; i <= lengths2; i++, j++) 
    *(s + j) = *(s2 + i);


  return (s);
}
