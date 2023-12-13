#include "search_algos.h"

int min(size_t a, size_t b)

/**
 * jump_search - searches for a value in a sorted array
 * of integers using the Jump search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located
 * -1, if value is not present or array is NULL
 */

int jump_search(int *array, size_t size, int value)
{
	size_t step, low, high;

	if (!array || size == 0)
		return (-1);
	step = sqrt(size);
	for (high = 0; high < size && array[high] < value;
		low = high, high += step)
	{
		printf("Value checked array[%lu] = [%d]\n",
			high, array[high]);
	}
	printf("Value found between indexes [%d] and [%d]\n", low, high);

	for (; low <= min(high, size - 1); low++)
	{
		printf("Value checked array[%d] = [%d]\n", low, array[low]);
		if (array[low] == value)
			return (low);
	}
	return (-1);
}
