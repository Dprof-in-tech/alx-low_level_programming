#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * add_nodeint - Function to add node at beginning of list
 * @head: list head
 * @n: input node
 *
 * Return: added node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *fresh_node;

	fresh_node =malloc(sizeof(struct listint_s));
	if (fresh_node == NULL)
		return (NULL);

	fresh_node->n = n;
	fresh_node->next = *head;
	*head = fresh_node;

	return (fresh_node);
}
