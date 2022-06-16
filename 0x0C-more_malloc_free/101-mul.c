#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * isdigit - check if string is a digit
 * @s: the string to be checked
 *
 * Return: 0 if true, 1 if false
 */

int _isdigit(char *s)
{
	while (*s)
	{
		if (*s < 48 || *s > 57)
			return (0);
		s++;
	}
	return (1);
}


/**
 * main - program that multiplies two positive numbers
 * @argc: n arguments
 * @argv: args
 *
 * Return: product result
 */


int main(int argc, char *argv[])
{
	int i;

	if (argc != 3)
	{
		for (i = 0; ERR_MSG[i] != '\0'; i++)
			_putchar(ERR_MSG[i]);

		_putchar(10);
		exit(98);
	}

	if (_isdigit(argv[1]) == 0)
		printf("%s\n", argv[1]);

	return (0);
}
