#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates two strings
 * @dest: a string
 * @src: a string
 * @n: an int
 * Return: resulting dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = strlen(dest);
	int j = 0;

	while (j < n && *src)
	{
		dest[i + j] = *src;
		src++;
		i++;
	}
	dest[i + j] = '\0';
	return (dest);
}
