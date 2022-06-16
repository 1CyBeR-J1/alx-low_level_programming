#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: array
 * @size: size of array
 *
 * Return: a pointer
 */


void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *s;
	char *sa;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	s = malloc(nmemb * size);

	if (s == NULL)
		return (NULL);

	sa = s;

	for (i = 0; i < (nmemb * size); i++)
		sa[i] = '\0';

	return (s);
}
