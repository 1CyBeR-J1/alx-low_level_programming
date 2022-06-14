#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - programi that adds positive numbers
 * @argc: numbers of arguments
 * @argv: Array of pointers
 *
 * Return: If one of the number contains symbols that
 *         are not digit return 1.
 */

int main(int argc, char *argv[])
{
	int sum = 0, i, j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (isdigit(argv[i][j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
	}

	for (sum = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
