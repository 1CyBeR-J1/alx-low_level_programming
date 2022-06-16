#include "main.h"
#include <stdlib.h>

/**
 * _strlen - check string length
 * @s: string to be checked
 *
 * Return: result
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}


/**
 * string_nconcat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: size
 *
 * Return: a pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	int nn, len, i, j;

	nn = n;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	if (nn < 0)
		return (NULL);

	if (nn >= _strlen(s2))
		n = _strlen(s2);

	len = _strlen(s1) + nn + 1;

	a = malloc(sizeof(a) * len);

	if (a == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		a[i] = s1[i];

	for (j = 0; s2[j] != '\0'; j++)
		a[i + j] = s2[j];
	a[i + j] = '\0';

	return (a);
}
