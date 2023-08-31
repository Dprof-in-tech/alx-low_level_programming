#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_node - Function to create new node
 * @n: input
 *
 * Return: Always 0 success
 */

listint_t *create_node(int n)
{
	listint_t *new_node;
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	return (new_node);
}

/**
 * insert_node_at_index - Function to insert node at index
 * @head: list head
 * @idx: input index
 * @n: input
 *
 * Return: inserted node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int current_index = 0;
	listint_t *current, *prev, *new_node;
	new_node = create_node(n);

	if (new_node == NULL)
		return (NULL);

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	current = *head;
	prev = NULL;
	
	while (current != NULL)
	{
		if (current_index == idx)
		{
			prev->next = new_node;
			new_node->next = current;
			return (new_node);
		}

		prev = current;
		current = current->next;
		current_index++;
	}
	return (NULL);
}
