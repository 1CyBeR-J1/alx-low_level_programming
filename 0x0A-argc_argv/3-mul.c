#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 * @argc: Number of arguments
 * @argv: Array of pointers
 *
 * Return: if prog recieve 2 arguments return 0
 *         if prog does not receive 2 arguments return 1
 */

int main(int argc, char *argv[])
{
	int i, j, res;

	if (argc != 3)
	{
		printf("Error\n");

		return (1);
	}

	i = atoi(argv[1]);
	j = atoi(argv[2]);
	res = i * j;

	printf("%d\n", res);

	return (0);
}
