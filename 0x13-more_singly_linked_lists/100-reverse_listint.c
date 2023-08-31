#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint - Function to reverse linked list
 * @head: list head
 *
 * Return: ALways 0 success
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *current = *head, *next_temp;

	while (current != NULL)
	{
		next_temp = current->next;
		current->next = prev;
		prev = current;
		current = next_temp;
	}

	*head = prev;
	return (*head);
}
