#include "main.h"

/**
 * main - Entry Point
 *
 * Return: Always 0 (success)
 */

void print_alphabet(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		_putchar(alp);
	}
	_putchar('\n');
}
