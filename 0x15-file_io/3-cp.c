#include "main.h"

/**
 * first_file - Print error message if can't read file
 * @file: Name of the file that can't be read
 */
void first_file(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
	exit(98);
}

/**
 * second_file - Print error message if can't write to file
 * @file: Name of the file that can't be write to
 */
void second_file(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
	exit(99);
}

/**
 * close_error - Print error message if file can't close
 * @fd: File descriptor of the file
 */
void close_error(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}

/**
  * main - a program that copies the content of a file to another file.
  * @argc: Number of arguments received
  * @argv: Array of arguments received
  *
  * Return: 0 on success
  */
int main(int argc, char *argv[])
{
	int file1, file2, file1rd, file2wr, closed;
	char buffer[BUFSIZE];
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (argv[1] == NULL)
		first_file(argv[1]);
	if (argv[2] == NULL)
		second_file(argv[2]);
	file1 = open(argv[1], O_RDONLY);
	if (file1 == -1)
		first_file(argv[1]);
	file2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, mode);
	if (file2 == -1)
		second_file(argv[2]);
	file1rd = read(file1, buffer, BUFSIZE);
	if (file1rd == -1)
		first_file(argv[1]);
	while (file1rd > 0)
	{
		file2wr = write(file2, buffer, file1rd);
		if (file2wr != file1rd)
			second_file(argv[2]);
		file1rd = read(file1, buffer, BUFSIZE);
		if (file1rd == -1)
			first_file(argv[1]);
	}
	closed = close(file1);
	if (closed == -1)
		close_error(file1);
	closed = close(file2);
	if (closed == -1)
		close_error(file2);
	return (0);
}

