#include "main.h"

/**
 * _strncpy - fucnction that copies a string
 * @dest: a string
 * @src: a string
 * @n: the number of string to be copied
 * Return: string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
