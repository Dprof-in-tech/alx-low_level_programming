#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * *add_node - FUnction to add node to head of list
 * @head: Head of linked list
 * @str: input node
 *
 * Return: New node
 */

list_t *add_node(list_t **head, const char *str)
{
	int len = 0;
	list_t *new_node = malloc(sizeof(list_t));

	if (str == NULL)
		return (NULL);

	if (new_node == NULL)
		return (NULL);

	while (str[len])
	{
		len++;
	}
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = len;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
