#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_listint -  Function to print sum of a linked list
 * @head: Head of list
 *
 * Return: SUm of list
 */

int sum_listint(listint_t *head)
{
	int result = 0;
	listint_t *current;

	if (head == NULL)
		return (0);

	current = head;
	while (current != NULL)
	{
		result = result + current->n;

		current = current->next;
	}
	return (result);
}
