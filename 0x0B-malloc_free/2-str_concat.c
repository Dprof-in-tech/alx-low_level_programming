#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Function to concatenate two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: Conatenated string value
 */

char *str_concat(char *s1, char *s2)
{
	char *result;
	unsigned int i, str_len1, str_len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	str_len1 = 0;
	str_len2 = 0;

	while (s1[str_len1] != '\0')
	{
		str_len1++;
	}

	while (s2[str_len2] != '\0')
	{
		str_len2++;
	}

	result = malloc(sizeof(char) * ((str_len1 + str_len2) + 1));
	if (result == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= str_len1; i++)
	{
		result[i] = s1[i];
	}

	for (i = 0; i <= str_len2; i++)
	{
		result[i + str_len1] = s2[i];
	}

	result[str_len1 + str_len2] = '\0';

	return (result);
}
