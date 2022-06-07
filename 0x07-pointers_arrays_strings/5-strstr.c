#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: the string
 * @needle: substring
 *
 * Return: pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	char *result = haystack;
	char *findneedle = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack != *needle)
			{
				break;
			}
		}
		if (!*needle)
		{
			return (result);
		}
		result++;
	}
	return (0);
}
