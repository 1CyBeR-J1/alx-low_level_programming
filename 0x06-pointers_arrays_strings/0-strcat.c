#include "main.h"

/**
 * _strcat -concatenates two strings.
 * @src: string
 * @dest: string
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
