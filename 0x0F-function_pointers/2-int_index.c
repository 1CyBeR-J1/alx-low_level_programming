#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: the array
 * @size: the number of elements in the array
 * @cmp: pointer to a the func to be used to compare values
 *
 * Return: index of the first element for which cmp does not return 0
 *         if no element match, return -1
 *         if size <= 0, return -1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (cmp != NULL && array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}

	return (-1);
}
