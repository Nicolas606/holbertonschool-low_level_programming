#include "dog.h"
#include <stdlib.h>

/**
* init_dog - initialize a variable of type struct dog.
*
* @d: The adress (pointer) variable to initializate.
* @name: string whit the dog's name.
* @age: integer with the age number.
* @owner: string with the name of the dog's owner.
*
* Return: Void.
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
  if (d != 0)
  {
    (*d).name = name;
    d->age = age;
    d->owner = owner;
  }
}