#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int size, i, *s;

	if (min > max)
		return (NULL);

	size = ((max + 1) - min);

	s = malloc(sizeof(int) * size);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		s[i] = min++;

	return (s);
}
