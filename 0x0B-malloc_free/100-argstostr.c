#include "main.h"
#include <stdlib.h>

/**
 * argstostr - function that concatenates all the arguments of your program
 * @ac: number of argument
 * @av: the array
 *
 * Return: concantenated arguments
 */

char *argstostr(int ac, char **av)
{
	char *s;
	int a, b, c, size = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
			size++;
		size++;
	}

	s = malloc(sizeof(char) * (size + 1));

	if (s == NULL)
		return (NULL);

	c = 0;

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
		{
			s[c] = av[a][b];
			c++;
		}
		s[c] = '\n';
		c++;
	}

	return (s);
}
