#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

dog_t *new_dog(char *name, float age, char *owner)
{
  dog_t *estructura;
  int i, j;
  int length_name, length_owner;
  char *copia_name;
  char *copia_owner;

  estructura = malloc(sizeof(struct dog));//espacio para la estructura

  if(estructura == 0)
    return (NULL);

  for (i = 0; name[i]; i++)
      length_name++;

  for (j = 0; owner[j]; j++)
      length_owner++;

  copia_name = malloc(length_name + 1 );//espacio para el nombre

  if ( copia_name == 0)
  {
    free (estructura);
    return(NULL);
  }

  copia_owner = malloc(length_owner + 1);//espacio para el owner

  if ( copia_name == 0)
  {
    free (estructura);
    free (copia_name);
    return(NULL);
  }

  for(i = 0; i <= length_name ; i++ )//copiar el nombre en copia_name
    copia_name[i] = name[i];

  for (j = 0; j <= length_owner; j++)//copar el owner en copia_owner
    copia_owner[j] = owner[j];

  estructura->name = copia_name;
  estructura->age = age;
  estructura->owner = copia_owner;

  return  (estructura);

}
