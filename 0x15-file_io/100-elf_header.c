#include "main.h"
#include <elf.h>

/**
 * print_elf_header - Function to print elf header
 * @Elf64_Ehdr: input arg
 * @header: input array
 *
 * Return: Always 0 success
 */

void print_elf_header_info(Elf64_Ehdr *header)
{
	int i;
	printf("Magic:   ");
	for (i = 0; i < EI_NIDENT; i++) {
        printf("%02x ", header->e_ident[i]);
    }
    printf("\n");

    printf("Class:                             %s\n", header->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
    printf("Data:                              %s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little-endian" : "Unknown");
    printf("Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
    printf("OS/ABI:                            %d\n", header->e_ident[EI_OSABI]);
    printf("ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
    printf("Type:                              %s\n", header->e_type == ET_EXEC ? "EXEC (Executable file)" : "Other");
    printf("Entry point address:               0x%lx\n", (unsigned long)header->e_entry);
}


/**
 * main - Function to print elf header
 * @argc: nput arg
 * @argv: input array
 *
 * Return: Always 0 success
 */

int main(int argc, char *argv[])
{
	int fd;
	Elf64_Ehdr header;
	ssize_t bytes_read;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: elf_header elf_filename\n");
		return (98);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		fprintf(stderr, "Error: Cannot open ELF file %s\n", argv[1]);
		return (98);
	}

	bytes_read = read(fd, &header, sizeof(Elf64_Ehdr));
	if (bytes_read != sizeof(Elf64_Ehdr))
	{
		fprintf(stderr, "Error: Cannot read ELF header from file %s\n", argv[1]);
		close(fd);
		return (98);
	}

	if (header.e_ident[EI_MAG0] != ELFMAG0 ||
	header.e_ident[EI_MAG1] != ELFMAG1 ||
	header.e_ident[EI_MAG2] != ELFMAG2 ||
	header.e_ident[EI_MAG3] != ELFMAG3)
	{
		fprintf(stderr, "Error: Not a valid ELF file: %s\n", argv[1]);
		close(fd);
		return (98);
	}

	print_elf_header_info(&header);
	close(fd);
	return (0);
}
