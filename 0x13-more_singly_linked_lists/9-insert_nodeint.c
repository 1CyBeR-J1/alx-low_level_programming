#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a
 * new node at a given position.
 * @head: head pointer
 *
 * @idx: the index of the list where the new node should be added
 * starting from 0
 *
 * @n: number of nodes
 *
 * Return: the address of the new node, or NULL if it failed
 * return NULL when not possible to add new node at index
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp = *head;
	unsigned int i = 0;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;

	if (!idx)
	{
		new->next = temp;
		*head = new;
		return (new);
	}

	while (i++ < (idx - 1))
	{
		if (!temp || !(temp->next))
			return (NULL);

		temp = temp->next;
	}

	new->next = temp->next;
	temp->next = new;

	return (new);
}
