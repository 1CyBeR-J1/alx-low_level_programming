#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure (file can not be created,
 * file can not be written, write “fails”, etc…)
 * if filename is NULL return -1
 */


int create_file(const char *filename, char *text_content)
{
	int fd;
	int len = 0, i;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_APPEND | O_TRUNC, 00600);

	if (fd < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[len])
			len++;
		i = write(fd, text_content, len);
		if (len != i)
			return (-1);
	}

	close(fd);
	return (1);
}
