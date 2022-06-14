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
	int num, digit, sum = 0;

	for (num = 1; num < argc; num++)
	{
		for (digit = 0; argv[num][digit]; digit++)
		{
			if (argv[num][digit] < '0' || argv[num][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[num]);
	}

	printf("%d\n", sum);

	return (0);
}
