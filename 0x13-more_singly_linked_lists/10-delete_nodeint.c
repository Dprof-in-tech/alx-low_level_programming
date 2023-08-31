#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tem, *current, *prev;
	unsigned int current_index = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		tem = *head;
		*head = (*head)->next;
		free(tem);
		return (1);
	}

	current = *head;
	prev = NULL;
	current_index = 0;

	while (current != NULL && current_index < index)
	{
		prev = current;
		current = current->next;
		current_index++;
	}

	if (current == NULL)
		return (-1);

	prev->next = current->next;
	free(current);
	return (1);
}
