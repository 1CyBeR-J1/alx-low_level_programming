#include "lists.h"

/*
 * print_dlistint - prints all the elements of a list
 * @h : pointer to the head
 *
 * Return: the number of nodes in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t n_nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (n_nodes);
}
