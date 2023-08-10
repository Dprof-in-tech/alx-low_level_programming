#include <stdlib.h>
#include "main.h"

/**
 * count_words - Count the number of words in a string
 * @str: Input string
 *
 * Return: Number of words
 */
int count_words(char *str)
{
	int word_count = 0, is_new_word = 1;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
			is_new_word = 1;
		else if (is_new_word)
		{
			word_count++;
			is_new_word = 0;
		}
	}

	return (word_count);
}

/**
 * strtow - Split a string into words
 * @str: Input string
 *
 * Return: Pointer to an array of strings or NULL on failure
 */
char **strtow(char *str)
{
	char **word_array, *word;
	int i, words = 0, c = 0, start = 0, end;

	if (str == NULL || *str == '\0')
		return (NULL);

	words = count_words(str);
	if (words == 0)
		return (NULL);

	word_array = (char **)malloc(sizeof(char *) * (words + 1));
	if (word_array == NULL)
		return (NULL);

	for (i = 0; i <= words; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				word = (char *)malloc(sizeof(char) * (c + 1));
				if (word == NULL)
					return (NULL);

				while (start < end)
					*word++ = str[start++];
				*word = '\0';

				word_array[i - 1] = word - c;
				c = 0;
			}
		}
		else if (c++ == 0)
		{
			start = i;
		}
	}

	word_array[words] = NULL;
	return (word_array);
}
