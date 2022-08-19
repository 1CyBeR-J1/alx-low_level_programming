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
	list_t *node;
	list_t *tmp;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	node->len = _strlen(str);
	node->str = strdup(str);
	node->next = NULL;

	if (*head == NULL)
		*head = node;
	else
		{
			tmp = *head;
			while (tmp->next != NULL)
				tmp = tmp->next;
			tmp->next = node;
		}
	return (node);
}

/**
 * _strlen - gets length of strings
 * @s: the strings
 *
 * Return: length of string
 */

int _strlen(const char *s)
{
	int i;

	while (s[i] != 0)
		i++;
	return (i);
}
