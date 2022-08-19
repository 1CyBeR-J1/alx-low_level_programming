#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - function that frees a list_t list.
 * head: pointer
 *
 * Return: nothing
 */


void free_list(list_t *head)
{
	list_t *current, *next;

	current = head;

	while (!current)
	{
		next = current->next;
		free(current);
		current = next;
	}
	head = NULL;
}
