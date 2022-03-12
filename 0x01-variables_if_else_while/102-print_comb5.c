#include<stdio.h>

/**
 * main - prints 2 poossible digits frpm 0 to 99
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int w, x, y, z;

	for (w = 0; w <= 9; w++)
	{
		for (x = 0; x <= 9; x++)
		{
			for (y = 0; y <= 9; y++)
			{
				for (z = 1; y <= 9; z++)
				{
					putchar(w + '0');
					putchar(x + '0');
					putchar(' ');
					putchar(y + '0');
					putchar(z + '0');

					if (w == 9 && x == 8 && y == 9 && z == 9)
					{
						break;
					}
					putchar (',');
					putchar (' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
