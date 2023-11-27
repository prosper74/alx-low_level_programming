#include "main.h"

/**
 * read_textfile - Function that reads a text file and
 * prints it to the POSIX standard output.
 * @filename:  is the name of the file to be read.
 * @letters: is the number of letters to be read and printed.
 *
 * Return: the actual number of letters it could read and print.
 * If the file cannot be opened or read, returns 0.
 * If filename is NULL, returns 0.
 * If write fails or does not write the expected amount of bytes, returns 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor, letters_printed, letters_read, file_closed;
	char *file_buffer;

	file_descriptor = letters_printed = letters_read = 0;
	file_buffer = malloc(letters * sizeof(char));
	if (filename == NULL)
		return (0);

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);

	letters_read = read(file_descriptor, file_buffer, letters);
	if (letters_read == -1)
		return (0);

	letters_printed = write(STDOUT_FILENO, file_buffer, letters_read);
	if (letters_printed == -1)
		return (0);

	file_closed = close(file_descriptor);
	if (file_closed == -1)
		return (0);

	free(file_buffer);
	return (letters_read);
}

