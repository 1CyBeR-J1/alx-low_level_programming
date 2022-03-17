#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints natural number to 98
 * @n: number passed
 *
 * Return: Always 0 (success)
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else

	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("%d\n", n);
}
