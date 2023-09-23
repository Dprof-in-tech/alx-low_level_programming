#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - Function to read text file and write to stdout
 * @filename: name of input file
 * @letters: number of letters in file
 *
 * Return: The file contents to stdout
 */

size_t read_textfile(const char *filename, size_t letters)
{
	int file, bytes_reads, bytes_written;
	char *buffer;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	buffer = malloc(letters);
	if (buffer == NULL)
	{
		close(file);
		return (0);
	}

	bytes_reads = read(file, buffer, letters);

	if (bytes_reads == -1)
	{
		close(file);
		free(buffer);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buffer, bytes_reads);
	if (bytes_written == -1 || (size_t)bytes_written != (size_t)bytes_reads)
	{
		close(file);
		free(buffer);
		return (0);
	}

	close(file);
	free(buffer);
	return (bytes_written);
}
