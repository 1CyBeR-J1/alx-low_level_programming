#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: is the name of the file
 * @text_content: the NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 *         if filename is NULL return -1
 *         1 if the file exists
 *         -1 if the file does not exist
 *         -1 if you do not have the required permissions to write the file
 */


int append_text_to_file(const char *filename, char *text_content)
{
	int fd, a, b = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[b])
			b++;
		a = write(fd, text_content, b);

		if (a != b)
			return (-1);
	}

	close(fd);

	return (1);
}
