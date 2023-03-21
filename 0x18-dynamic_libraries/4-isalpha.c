#include "main.h"

/**
 * _isalpha - checks if its an alphabet
 *
 * @c: contains the character to check
 *
 * Return: 0 if alphabet, otherwise 1
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
