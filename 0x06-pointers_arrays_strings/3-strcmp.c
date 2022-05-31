#include "main.h"

/**
 * _strcmp - function that compare two strings
 * @s1: first string
 * @s2: second string
 * Return: result
 */

int _strcmp(char *s1, char *s2)
{
	int result = 0;

	while (*s1 == *s2 && *s1 != '\0)
	{
		s1++;
		s2++;
	}
	
	if(s1 != s2)
		result = *s1 - *s2;
	return (result);
}
