#include "main.h"

/**
 * rot13 -function that encodes a string using rot13
 * @s: string to be encoded
 * Return: result of the encoded string
 *
 */

char *rot13(char *s)
{
	int i, j;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
		for (j = 0; j < 52; j++)
			if (s[i] == a[j])
			{
				s[i] == b[j];
				break;
			}
	return (s);
}