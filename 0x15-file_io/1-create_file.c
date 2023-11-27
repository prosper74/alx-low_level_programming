#include "main.h"

/**
* create_file - Function that creates a file.
* @filename:  is the name of the file to be read.
* @text_content:  is a NULL terminated string to write to the file.
*
* Return: 1 on success and -1 on failure.
* If the file already exists, it is truncated.
* If filename is NULL, the function returns -1.
* If text_content is NULL, an empty file is created.
* The created file has permissions rw-------
*/

int create_file(const char *filename, char *text_content)
{
int fd, len = 0;

if (filename == NULL)
	return (-1);

fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
if (fd == -1)
	return (-1);

if (text_content != NULL)
{
	while (text_content[len])
	len++;
	if (write(fd, text_content, len) != len)
	{
	close(fd);
	return (-1);
	}
}

close(fd);
return (1);
}

