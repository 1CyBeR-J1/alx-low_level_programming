#include<stdio.h>

/**
 * main - prints lower case letter in hexadecimal
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	int i;
	char ltr;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	for (ltr = 'a'; ltr <= 'f'; ltr++)
	{
		putchar(ltr);
	}
	putchar('\n');
	return (0);
}
