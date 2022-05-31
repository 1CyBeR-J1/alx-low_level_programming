#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @s: string to endoce
 * Return: the encoded string
 *
 */

char *leet(char *s)
{
	int i = 0, j, k;

	char a[] = "oOlLeEaAtT";
	char b[] = "0011334477";

	while (s[i] != '\0')
	{
		j = 0;
		k = 0;
		while (a[j] != '\0')
		{
			if (s[i] == a[j])
			{
				k = j;
				s[i] = b[k];
			}
			j++;
		}
		i++;
	}
	return (s);
}
