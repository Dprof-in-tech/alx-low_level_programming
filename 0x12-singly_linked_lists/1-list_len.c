#include "lists.h"
#include "stdio.h"
#include <stddef.h>

/**
 * list_len - Prints the length of a linked list
 * @h: Head of linked list
 *
 * Return: length of linked list
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *current_node = h;

	while (current_node != NULL)
	{
		count += 1;
		current_node = current_node->next;
	}
	return (count);
}
