#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * add_node - function that adds a new node at the
 * beginning of a list
 * @head: double pointer to a list_t linked list
 * @str: string to be copied
 *
 * Return: the address of the new element, or NULL if it failed
 */


list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	if (head && str)
	{
		temp = malloc(sizeof(list_t));
		if (!temp)
			return (NULL);

		temp->str = strdup(str);
		temp->len = _strlen(str);
		temp->next = *head;

		*head = temp;
	}
	return (temp);
}

/**
 * _strlen - finds length of string
 * @s: the string to be calc
 *
 * Return: the length
 */

int _strlen(const char *s)
{
	int i = 0;

	while (*s++)
		i++;

	return (i);
}
