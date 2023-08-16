#include <string.h>
#include <stddef.h>
#include <stdlib.h>
#include "dog.h"
#include <stdio.h>

/**
 * *new_dog - Function to create a new dog structure
 * @name: new dog name
 * @age: new dog age
 * @owner: new dog owner
 *
 * Return: new dog structure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		free(new_dog);
		return (NULL);

	new_dog->name = malloc(strlen(name) + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	strcpy(new_dog->name, name);

	new_dog->owner = malloc(strlen(owner) + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	strcpy(new_dog->owner, owner);

	new_dog->age = age;

	return (new_dog);
}
