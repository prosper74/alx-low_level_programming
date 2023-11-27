#include "main.h"

/**
* print_elf_header - entry point for function print_elf_header
* @header: pointer to header
*/

void print_elf_header(Elf64_Ehdr *header)
{
int i;

printf("ELF Header:\n");
printf("  Magic:   ");
for (i = 0; i < EI_NIDENT; i++)

	printf("%02x ", header->e_ident[i]);
printf("\n");
printf("  Class: %s\n", header->e_ident[EI_CLASS] ==
								ELFCLASS32
							? "ELF32"
							: "ELF64");
printf("  Data:%s\n", header->e_ident[EI_DATA] == ELFDATA2LSB
							? "2's complement, little endian"
							: "2's complement, big endian");
printf("  Version:%d (current)\n", header->e_ident[EI_VERSION]);
printf("  OS/ABI: %s\n", header->e_ident[EI_OSABI] ==
ELFOSABI_SYSV ? "UNIX - System V" : "UNIX - Other");
printf("  ABI Version: %d\n", header->e_ident[EI_ABIVERSION]);
printf("  Type: %s\n", header->e_type == ET_NONE
? "NONE (None)" : header->e_type == ET_REL ? "REL (Relocatable file)"
: header->e_type == ET_EXEC  ? "EXEC (Executable file)"
: header->e_type == ET_DYN   ? "DYN (Shared object file)"
																							: header->e_type == ET_CORE  ? "CORE (Core file)"
																														: "Unknown");
printf("  Entry point address:               0x%lx\n", header->e_entry);
}

/**
* main - entry point
* @argc: command line arguments
* @argv: pointer to header
*
* Return: 0 on success, -1 on failure
*/
int main(int argc, char *argv[])
{
int fd;

Elf64_Ehdr header;

if (argc != 2)
{
	fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
	exit(98);
}

fd = open(argv[1], O_RDONLY);
if (fd == -1)
{
	fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
	exit(98);
}

if (read(fd, &header, sizeof(header)) != sizeof(header))
{
	fprintf(stderr, "Error: Can't read ELF header from file %s\n", argv[1]);
	exit(98);
}

if (header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1] != ELFMAG1
|| header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3)
{
	fprintf(stderr, "Error: %s is not an ELF file\n", argv[1]);
	exit(98);
}

print_elf_header(&header);

if (close(fd) == -1)
{
	fprintf(stderr, "Error: Can't close fd %d\n", fd);
	exit(100);
}

exit(EXIT_SUCCESS);
}

