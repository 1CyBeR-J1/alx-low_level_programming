#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: the pointer
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t ndes = 0;

	while (h)
	{
		ndes++;
		printf("%d", h->n);
		h = h->next;
		printf("\n");
	}
	return (ndes);
}
