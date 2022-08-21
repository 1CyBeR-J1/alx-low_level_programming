#include "lists.h"

/**
 * sum_listint -  function that returns the sum of all the
 * data (n) of a listint_t linked list.
 * @head: head pointer
 *
 * Return: the sum of data in a list,if list is empty, return 0
 */


int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
