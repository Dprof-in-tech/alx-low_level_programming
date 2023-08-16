#include "dog.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - FUnction to free all memory alloc to dog
 * @d: dog structure to free memory
 *
 * Return: Always 0 success
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
