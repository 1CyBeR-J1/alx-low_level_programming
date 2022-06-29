#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to
 * a 2 dimensional array of integers
 * @width: first interger
 * @height: second integer
 *
 * Return: double pointer
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **b;

	if (width <= 0 || height <= 0)
		return (NULL);

	b = (int **)malloc(sizeof(int *) * height);
	if (b == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		b[i] = (int *)malloc(sizeof(int) * width);
		if (b[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(b[j]);
			free(b);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			b[i][j] = 0;
		}
	}
	return (b);
}