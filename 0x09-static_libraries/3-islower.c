#include "main.h"

/**
 * _islower - checks for lower case character
 *
 * @c: characters to be checked
 *
 * Return: 1 on success, otherwise 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
