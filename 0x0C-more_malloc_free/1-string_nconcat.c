#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - function to concatenate two strings
 * @s1: input string
 * @s2: input string
 * @n: multiplicant
 *
 * Return: Always 0 success
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, str_len1, str_len2;
	char *string;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	str_len1 = strlen(s1);
	str_len2 = strlen(s2);

	if (n >= str_len2)
		n = str_len2;

	string = malloc(sizeof(char) * (str_len2 + n + 1));
	if (string == NULL)
		return (NULL);

	for (i = 0; i < str_len1; i++)
		string[i] = s1[i];

	for (i = 0; i < n; i++)
		string[str_len1 + i] = s2[i];

	string[str_len1 + n] = '\0';

	return (string);
}
