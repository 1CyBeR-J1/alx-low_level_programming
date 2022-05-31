#include "main.h"

/**
 * reverse_array -  function that reverses the content of an array of integers
 * @a: an array
 * @n: number of elements of the array
 * Return: result
 */

void reverse_array(int *a, int n)
{
	int i = 0, j;

	while (i < n)
	{
		n--;
		j = a[i];
		a[i] = a[j];
		a[j] = j;
		i++;
	}
}
