#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 * and sets heads to NULL
 * @head: head pointer
 *
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *curnode;

	while (head)
	{
		curnode = (*head)->next;
		free(*head);
		*head = curnode;
	}
	head = NULL;
}
