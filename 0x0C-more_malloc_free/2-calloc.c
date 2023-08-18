#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * _calloc - FUnction to allocate memory byte by byte
 * @nmemb: input size
 * @size: input size
 *
 * Return: Always 0 success
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *str;
	unsigned int total_size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;
	str = malloc(total_size);
	if (str)
	{
		memset(str, 0, total_size);
	}

	return (str);
}
