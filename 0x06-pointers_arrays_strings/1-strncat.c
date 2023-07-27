#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @dest: The destination string, where the source will be appended
 * @src: The source string, which will be appended to the destination
 *
 * Return: Pointer to the destination string (dest)
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*ptr != '\0') {
		ptr++;
	}

	while (*src != '\0' && n > 0) {
		*ptr++ = *src++;
		n--;
	}

	*ptr = '\0';

	return dest;
}
