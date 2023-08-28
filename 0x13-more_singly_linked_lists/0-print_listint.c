#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_listint - FUnction to print all elements of linked list
 * @h: input list head
 *
 * Return: Always success 0
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);

		h = h->next;
		count++;
	}
	return (count);
}
