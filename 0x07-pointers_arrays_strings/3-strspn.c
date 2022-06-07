#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: string
 * @accept:
 * substring
 *
 * Return: bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int result = 0;
	int b, getchr;

	while (*s)
	{
		for (b = 0; accept[b]; b++)
		{
			getchr = 0;
			if (*s == accept[b])
			{
				result++;
				getchr = 1;
				break;
			}
		}
		if (!getchr)
			break;
		s++;
	}
	return (result);
}
