#include<stdio.h>

/**
 * main - print combination of 2 possible numbers
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;
	int j;

	for  (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j != i)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
