#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Function to free memory allocated to a list
 * @head: linked list head
 *
 * Return: Always 0 success
 */

void free_list(list_t *head)
{
	list_t *current_node;

	while (head != NULL)
	{
		current_node = head;
		head = head->next;
		free(current_node->str);
		free(current_node);
	}
}
