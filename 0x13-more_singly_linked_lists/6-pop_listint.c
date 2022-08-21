#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t
 * @head: head pointer
 *
 * Return: head node’s data (n), if empty then 0.
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (!*head)
		return (0);

	temp = *head;
	*head = (*head)->next;
	n = temp->n;

	free(temp);

	return (n);
}
