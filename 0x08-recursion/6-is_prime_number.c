#include "main.h"

/**
 * is_prime_number - function that returns 1 if the
 * input integer is a prime number, otherwise return 0
 * @n: number
 *
 * Return: result
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if (n == 2)
		return (1);
	return (getNPrim(n, 2));
}


/**
 * getNPrim - get if it's 0 or 1
 * @n: number
 * @i: counter
 *
 * Return: result
 */

int getNPrim(int n, int i)
{
	if (n == i)
		return (1);
	if (n % i == 0)
		return (0);
	return (getNPrim(n, i + 1));
}
