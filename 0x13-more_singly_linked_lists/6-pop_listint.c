#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pop_listint - Function to delete node
 * @head - List head
 *
 * Return: Always 0 success
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int str;

	if (*head == NULL)
		return (0);

	ptr = *head;
	*head = (*head)->next;
	str = (ptr)->n;

	free(ptr);

	return (str);
}
