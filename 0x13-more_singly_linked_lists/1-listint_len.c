#include "lists.h"

/**
 * listint_len - function that returns the number of
 * elements in a linked listint_t list.
 * @h: the head pointer
 *
 * Return: the number of element in list
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *temp;
	unsigned int count = 0;

	temp = h;
	while (temp)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
