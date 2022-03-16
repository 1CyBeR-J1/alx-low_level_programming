#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char letter[9] = "_putchar\n";
	int i;
		for (i = 0; i < 9; i++)
		{
			_putchar(letter[i]);
		}
	return (0);
}
