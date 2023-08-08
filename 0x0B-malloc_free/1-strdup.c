#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - FUnction to create duplicate array
 * @str: original input string array
 *
 * Return: new string array
 */

char *_strdup(char *str)
{
	char *new_str;
	unsigned int str_len, i;

	if (str == NULL)
	{
		return (NULL);
	}

	str_len = 0;
	while (str[str_len] != '\0')
	{
		str_len++;
	}

	new_str = malloc(sizeof(char) * (str_len + 1));
	if (new_str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= str_len; i++)
	{
		new_str[i] = str[i];
	}

	return (new_str);
}
