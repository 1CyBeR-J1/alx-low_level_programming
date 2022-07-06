#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - perform the operation
 * @argc: argument counter
 * @argv: argument value
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	int a, b, c;
	char o;

	int (*fun)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	o =  *argv[2];

	fun = get_op_func(argv[2]);

	if (fun == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((o == '/' || o == '%') && b == 0)
	{
		printf("Error\n");
		return (100);
	}

	c = fun(a, b);
	printf("%d\n", c);

	return (0);
}
