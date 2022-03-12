#include<stdio.h>

/**
 * main - print combination of 2 possible numbers
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i = 0;
	int j = 0;

	while (i < 10 && j < 10)
	{
		putchar(i + '0');
	}
		if (i != j)
		{
			putchar(j + '0');
			putchar(',');
			putchar(' ');
			j++;
		}
	i++;
	putchar('\n');
	return (0);
}
