#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - function that concatenates two strings.
 *
 * @width: columns the matrix
 * @height: rows the matrix
 *
 * Return: s
 *
 */

int **alloc_grid(int width, int height)
{
  int i, j;
  int **s;

  if (width <= 0 || height <= 0)
    return (0);

  s = malloc(sizeof(int *) * height);

  if (s == 0)
    return (0);

  for(i = 0; i < height; i++)
      {  *(s + i)= malloc(sizeof(int) * width);

            if(*(s + i) == 0)
            {
              for(j = 0; j <= i; j++)
              {
                free(*(s + j));
              }
              free(s);
            }

        for (j = 0; j < width; j++)
        {
          s[i][j] = 0;
        }
      }

  return (s);

}