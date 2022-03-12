#include<stdio.h>

/**
 * main - prints all alphabets except e and q
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char alp[24] = "abcdfghijklmnoprstuvwxyz";
	int i;

	for (i = 0; i < 24; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
