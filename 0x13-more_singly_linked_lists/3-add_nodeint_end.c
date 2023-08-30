#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * add_nodeint - Function to add node at end of list
 * @head: list head
 * @n: input node
 *
 * Return: New node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *fresh_node, *current;

	fresh_node = malloc(sizeof(struct listint_s));
	if (fresh_node == NULL)
		return (NULL);

	fresh_node->n = n;
	fresh_node->next = NULL;

	if (*head == NULL)
	{
		*head = fresh_node;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}

		current->next = fresh_node;
	}

	return (fresh_node);
}
