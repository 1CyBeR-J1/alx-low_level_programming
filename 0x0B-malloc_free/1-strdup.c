#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly
 * allocated space in memory, which contains a copy of
 * the string given as a parameter.
 * @str: string
 *
 * Return: pointer to the duplicate string
 *
 */

char *_strdup(char *str)
{
	char *dup;
	unsigned int i = 0, j = 0;

	if (str == 0)
		return (NULL);

	for (; i < str[i]; i++)
		j++;

	dup = malloc(sizeof(char) * (j + 1));

	if (dup == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		dup[i] = str[i];

	dup[j] = '\0';

	return (dup);
}
