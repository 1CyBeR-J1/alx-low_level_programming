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
		for (j = i + 1; j < 9; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
