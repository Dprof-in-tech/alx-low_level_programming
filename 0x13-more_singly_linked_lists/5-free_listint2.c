#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint2 - Function to free list meemory
 * @head: List head
 *
 * Return: ALways success 0
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	while (*head != NULL)
	{
		ptr = *head;

		*head = (*head)->next;

		free(ptr);
	}
}
