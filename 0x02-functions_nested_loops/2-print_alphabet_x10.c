#include "main.h"

/**
 * print_alphabet_x10 -prints alphabets in lower case 10 times
 *
 */

void print_alphabet_x10(void)
{
	char alp;
	int count = 1;

	while (count <= 10)
	{
		for (alp = 'a'; alp <= 'z'; alp++)
		{
			_putchar(alp);
		}
		count++;
	}
	_putchar('\n');
}
