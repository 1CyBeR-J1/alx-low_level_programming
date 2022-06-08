#include "main.h"

/**
 * _sqrt - calculates natural square root
 * @n: number
 * @b: counter
 *
 * Return: the natural square of n
 */

int _sqrt(int n, int b)
{
	if (b * b > n)
		return (-1);
	else if (b * b == n)
		return (b);
	return (_sqrt(n, b + 1));
}



/**
 * _sqrt_recursion - function that returns the
 * natural square root of a number
 * @n: number
 *
 * Return: natural square root
 */


int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(n, 0));
}
