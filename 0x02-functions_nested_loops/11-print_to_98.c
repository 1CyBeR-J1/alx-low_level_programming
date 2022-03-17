#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints natural number to 98
 * @n: number passed
 */

void print_to_98(int n)
{
	for (n <= 0; n <= 98; n++)
	{
		_putchar(n + '0');
		_putchar(',');
		_putchar(' ');
	}
	for (n >= 98; n >= 98; n--)
	{
		_putchar(n + '0');
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
}
