#include<stdio.h>

/**
 * main - prints 2 poossible digits frpm 0 to 99
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int w, x, y, z;

	for (w = 0; w <= 98; w++)
	{
		for (x = w + 1; x <= 99; x++)
		{
			for (y = x + 1; y <= 98; y++)
			{
				for (z = y + 1; y <= 97; z++)
				{
					putchar(w + '0');
					putchar(x + '0');
					putchar(' ');
					putchar(y + '0');
					putchar(z + '0');
					if (w == 97 && x == 99 && y == 98 && z == 99)
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
