#include "main.h"
#include <stdio.h>

/**
 * main - Fizz for multiples of 3, Buzz for multiple of 5 FizzBuzz for 3 and 5
 *
 *
 * Return: Always 0
 */
int main(void)
{
	int i = 1;

	while (i < 101)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}

		if (i != 100)
		{
		printf(" ");
		}
		i++;
	}
	printf("\n");
	return (0);
}
