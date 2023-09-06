#include "main.h"
#include <errno.h>

/**
 * main -  Function to print stabdard error
 * @argc: input arg
 * @argv: input array
 *
 * Return: Always success 0
 */

int main(int argc, char *argv[])
{
	int source_file, recieving_file;
	ssize_t bytes_read, bytes_written;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	source_file = open(argv[1], O_RDONLY);
	if (source_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	recieving_file = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (recieving_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[1]);
		exit(99);
	}

	while ((bytes_read = read(source_file, buffer, sizeof(buffer))))
	{
		bytes_written = write(recieving_file, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Write did not write the number of bytes\n");
			exit(99);
		}
	}

	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (close(source_file) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", source_file);
		exit(100);
	}

	if (close(recieving_file) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", recieving_file);
		exit(100);
	}
	return (0);
}
