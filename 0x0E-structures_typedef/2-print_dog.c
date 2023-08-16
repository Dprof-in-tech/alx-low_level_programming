#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * print_dog - function to print strruct dog
 * @d: struct dog pointer
 *
 * Return: Always 0 success
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		printf("%s\n", "");

	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}
	
	printf("Age: %f\n", d->age);

	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}
}
