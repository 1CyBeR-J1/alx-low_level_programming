#include<stdio.h>

/**
 * main - prints combo of 3 digits without repetition
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int x, y, z;

	for (x = 0; x < 10; x++)
	{
		for (y = x + 1; y < 9; y++)
		{
			for (z = y + 1; z < 10; z++)
			{
				putchar(x + '0');
				putchar(y + '0');
				putchar(z + '0');

				if (x == 7 && y == 8 && z == 9)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
