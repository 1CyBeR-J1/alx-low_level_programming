#include<stdio.h>

/**
 * main - prints 2 poossible digits frpm 0 to 99
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			putchar(x + '0');
			putchar(y + '0');
			putchar(' ');
			putchar(x + '0');
			putchar(y + '0');

			if (x == 98 && y == 99)
			{
				break;
			}
			putchar(' ');
			putchar(',');
		}
	}
	putchar('\n');
	return (0);
}
