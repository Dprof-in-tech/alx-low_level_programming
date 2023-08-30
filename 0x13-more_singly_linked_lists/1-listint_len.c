#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * listint_len - Function to print lenght of a linked list
 * @h: Head of list
 *
 * Return: Length of list
 */

size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len = len + 1;
		h = h->next;
	}

	return (len);
}
