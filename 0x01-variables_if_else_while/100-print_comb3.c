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
		if (i != j)
		{
			putchar(i + '0');
			putchar(j + '0');
			putchar(',');
			putchar(' ');
			i++;
			j++;
		}
	}
	return (0);
}
