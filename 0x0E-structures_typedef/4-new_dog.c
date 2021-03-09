#include <stdlib.h>
#include "dog.h"

char *copia(char *string);

/**
 * copia - return a copy
 * @string: string
 *
 * Return: char
*/

char *copia(char *string)
{
	char *puntero;
	int length = 0;
	int i;

	for (i = 0; string[i]; i++)
		length++;

	puntero = malloc(length + 1);

	if (puntero == 0)
		return (NULL);

	for (i = 0; i <= length; i++)
		puntero[i] = string[i];

	return (puntero);
}

/**
* *new_dog -  creates a new dog.
*
* @name: string whit the dog's name.
* @age: integer with the age number.
* @owner: string with the name of the dog's owner.
*
* Return: Void.
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *estructura;


	estructura = malloc(sizeof(struct dog));

	if (estructura == 0)
		return (NULL);

	if (copia(name) == 0)
	{
		free(estructura);
		return (NULL);
	}

	if (copia(owner) == 0)
	{
		free(estructura);
		free(copia(name));
		return (NULL);
	}

	estructura->name = copia(name);
	estructura->age = age;
	estructura->owner = copia(owner);

	return (estructura);
}
