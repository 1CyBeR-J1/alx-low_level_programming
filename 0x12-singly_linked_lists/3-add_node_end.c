#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list_t list.
 * @head: double pointer
 * @str: the string
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *dup_str;
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	dup_str = strdup(str);
	if (!str)
	{
		free(new);
		return (NULL);
	}

	new->str = dup_str;
	new->len = _strlen(str);
	new->next = NULL;

	if (!*head)
		*head = new;

	else
	{
		last = *head;
		while (last->next)
			last = last->next;
		last->next = new;
	}
}

/**
 * _strlen - gets length of strings
 * @s: the strings
 *
 * Return: length of string
 */

int _strlen(const char *s)
{
	int i = 0;

	while (*s++)
		i++;
	return (i);
}
