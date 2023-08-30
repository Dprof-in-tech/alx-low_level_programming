#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_nodeint_at_index - Function to get nth node of a list
 * @head: List head
 * @index: node to get
 *
 * Return: Always success 0
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int current_index = 0;

	while (head != NULL)
	{
		if (current_index == index)
		{
			return (head);
		}

		head = head->next;
		current_index = current_index + 1;
	}
	return (NULL);
}
