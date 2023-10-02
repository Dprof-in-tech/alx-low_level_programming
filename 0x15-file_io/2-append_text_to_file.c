#include "main.h"
#include <stdio.h>
/**
 * append_text_to_file - Function to append text to file when opened
 * @filename: name of file to open
 * @text_content: text to append
 *
 * Return: the appended file
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, bytes_written;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		bytes_written = write(file, text_content, strlen(text_content));
		if (bytes_written == -1)
		{
			close(file);
			return (-1);
		}
	}
	close(file);
	return (1);
}
