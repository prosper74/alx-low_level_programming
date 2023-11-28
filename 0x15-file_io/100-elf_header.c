#include "main.h"

/**
* check_magic - entry point for function print_elf_header
* @e_ident: pointer to header
*/

void check_magic(unsigned char *e_ident)
{
int i;

for (i = 0; i < 4; i++)
{
	if (e_ident[i] != 127 && e_ident[i] != 'E' &&
		e_ident[i] != 'L' && e_ident[i] != 'F')
	exit(98);
}
}

/**
* print_magic - entry point for function print_elf_header
* @e_ident: pointer to header
*/
void print_magic(unsigned char *e_ident)
{
int i;

for (i = 0; i < EI_NIDENT; i++)
{
	printf("%02x", e_ident[i]);
	if (i != EI_NIDENT - 1)
	printf(" ");
}

printf("\n");
}

/**
* print_class - entry point for function print_elf_header
* @e_ident: pointer to header
*/
void print_class(unsigned char *e_ident)
{
printf("Class: ");
switch (e_ident[EI_CLASS])
{
case ELFCLASS32:
	printf("ELF32\n");
	break;
case ELFCLASS64:
	printf("ELF64\n");
	break;
default:
	printf("<unknown: %x>\n", e_ident[EI_CLASS]);
}
}

/**
* main - entry point for function print_elf_header
* @argc: command line arguments
* @argv: command line arguments
* Return: 0 on success
*/
int main(int argc, char **argv)
{

int fd = open(argv[1], O_RDONLY);

Elf64_Ehdr *header = malloc(sizeof(Elf64_Ehdr));
read(fd, header, sizeof(Elf64_Ehdr));

if (argc != 2)
{
	printf("Usage: %s <filename>\n", argv[0]);
	return (1);
}

check_magic(header->e_ident);
print_magic(header->e_ident);
print_class(header->e_ident);

free(header);
close(fd);

return (0);
}

