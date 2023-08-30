#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint - Function to free list memory
 * @head: list head
 *
 * Return: Always 0 success
 */

void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;

		free(ptr);
	}
}
