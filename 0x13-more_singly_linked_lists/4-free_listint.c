#include "lists.h"

/**
 * free_listint - function that frees a listint_t list.
 * @head: head pointer
 *
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *curnode;

	while (curnode)
	{
		curnode = head->next;
		free(head);
		head = curnode;
	}
}
