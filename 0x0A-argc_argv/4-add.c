#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - program that adds positive numbers
 * @argc: numbers of arguments
 * @argv: Array of pointers
 *
 * Return: If one of the number contains symbols that
 *         are not digit return 1.
 */

int main(int argc, char *argv[])
{
	int a, b, sum = 0;

	if (argc == 0)
		printf("0\n");

	if (isdigit(argv[a][b]) == 00)
	{
		printf("Error\n");

		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	sum += (a + b);

	printf("%d\n", sum);

	return (0);
}
