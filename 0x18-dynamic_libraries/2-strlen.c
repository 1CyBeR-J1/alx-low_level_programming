#include "main.h"

/**
 * _strlen - gets length of a string
 * @s: the string
 * Return: length of string
 */

int _strlen(char *s)
{
	int str = 0;

	while (*s != '\0')
	{
		str++;
		s++;
	}

	return (str);
}
