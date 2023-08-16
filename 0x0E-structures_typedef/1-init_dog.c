#include "dog.h"
#include <stddef.h>

/**
 * init_dog - function to initialize dog structure
 * @d: dog structure
 * @name: dogname
 * @age: dog age
 * @owner: dog owner
 *
 * Return: ALways 0 success
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
