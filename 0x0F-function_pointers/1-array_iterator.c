#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given as
 * a parameter on each element of an array
 * @array: the array
 * @size: size of the array
 * @action: pointer to a function
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action != NULL && array == 0)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
