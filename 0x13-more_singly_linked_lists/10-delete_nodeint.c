#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node
 * at index index of a listint_t linked list
 * @head: head pointer
 * @index: he index of the node that should be deleted, starting from 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */


int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int n = 0;
	listint_t *temp, *next;

	if (!head)
		return (-1);

	temp = *head;

	if (!index)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	while (temp && (n++ < (index - 1)))
		temp = temp->next;

	if (!temp || temp->next)
		return (-1);

	next = temp->next->next;
	free(temp->next);
	temp->next = next;

	return (-1);
}
