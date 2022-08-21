#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the
 * nth node of a listint_t linked list.
 * @head: head pointer
 * @index: the index of the node starting at 0
 *
 * Return: nth the node or NULL if it does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;
	listint_t *temp;

	while (head)
	{
		if (n == index)
		{
			temp = head;
			return (head);
		}
		head = head->next;
		n++;
	}

	return (NULL);
}
