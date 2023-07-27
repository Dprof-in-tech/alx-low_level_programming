#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: The destination string, where the source will be appended
 * @src: The source string, which will be appended to the destination
 *
 * Return: Pointer to the destination string (dest)
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr != '\0') {
		ptr++;
	}

	while (*src != '\0') {
		*ptr++ = *src++;
	}

	*ptr = '\0';

	return dest;
}
