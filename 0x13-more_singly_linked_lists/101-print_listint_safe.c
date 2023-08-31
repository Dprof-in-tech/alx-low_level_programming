#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - Function to print linked list
 * @head: list head
 *
 * Return: Always 0 success
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current = head, *loop = NULL;

	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;

		if (current->next == loop)
		{
			if (loop == NULL)
			{
				loop = current->next;
			}
			else if (loop == current->next)
			{
				printf("-> [%p] %d\n", (void *)current->next, current->next->n);
				break;
			}
		}
		current = current->next;
	}
	return (count);
}
