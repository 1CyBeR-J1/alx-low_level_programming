#include "lists.h"

/**
 * add_nodeint_end - function that adds a new
 * node at the end of a listint_t list.
 * @head: head pointer
 * @n: number to be added to the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */


listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *temp;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		printf("NULL");
	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
		*head = newnode;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newnode;
	}
	return (newnode);
}
