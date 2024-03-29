#include "lists.h"

/**
 * add_nodeint - function that adds a new node at
 * the beginning of a listint_t list.
 * @head: head pointer
 * @n: integer to be added
 *
 * Return: he address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
		printf("NULL");

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
