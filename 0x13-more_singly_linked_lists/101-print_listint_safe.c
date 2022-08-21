#include "lists.h"

/**
 * free_listint_safe - function that frees a listint_t list.
 * @h: header pointer
 *
 * Return: the size of the list that was free’d
 */


size_t free_listint_safe(listint_t **h)
{
	size_t i = 0;
	const listint_t *tmp, *node;

	node = *h;
	while (node != NULL)
	{
		printf("[%p] %d\n", (void *)node, node->n);
		tmp = node;
		node = node->next;
		i++;

		if (tmp <= node)
		{
			printf("-> [%p] %d\n", (void *)node, node->n);
			break;
		}
	}

	return (i);
}
