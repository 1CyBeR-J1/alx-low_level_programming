#include "main.h"

/**
 * rev_string - reverse strong
 * @s: string to reverse
 *
 */
void rev_string(char *s)
{
	int len, i, j;
	char v1, v2;

	for (len = 0; s[len] != '\0'; len++)
	{
	}

	i = 0;
	j = len - 1;

	while (j > i)
	{
		v1 = s[i];
		v2 = s[j];
		s[i] = v2;
		s[j] = v1;
		j--;
		i++;
	}
}
