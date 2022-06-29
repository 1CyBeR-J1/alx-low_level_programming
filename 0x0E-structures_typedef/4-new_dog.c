#include <stdlib.h>
#include "dog.h"
int _strlen(char *s);
char *_strcpy(char *x, char *y);


/**
 * new_dog - function that creates a new dog
 * @name: pointer to name of dog
 * @age: age of dog
 * @owner: pointer to owner of dog
 *
 * Return: result of function
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_d;

	new_d = malloc(sizeof(dog_t));

	if (new_d == NULL)
		return (NULL);

	if (name == NULL)
		new_d->name = NULL;

	else
	{
		new_d->name = malloc(_strlen(name) + 1);
		if (new_d->name == NULL)
		{
			free(new_d);
			return (NULL);
		}
		new_d->name = _strcpy(new_d->name, name);
	}

	if (owner == NULL)
		new_d->owner = NULL;

	else
	{
		new_d->owner = malloc(_strlen(owner) + 1);
		if (new_d->owner == NULL)
		{
			free(new_d->name);
			free(new_d);
			return (NULL);
		}
		new_d->owner = _strcpy(new_d->owner, owner);
	}
	new_d->age = age;
	return (new_d);
}

/**
 * _strlen - length of string
 * @s: string to be calculated
 *
 * Return: result
 */

int _strlen(char *s)
{
	int i = 0;

	for (i = 0; s[i]; i++)
		;
	return (i);
}


/**
 * _strcpy - copies from y to x
 * @x: pointer to destination of string
 * @y: pointer to string to be copied
 *
 * Return: pointer to result
 */

char *_strcpy(char *x, char *y)
{
	char *a = x;

	while (*y)
		*a++ = *y++;
	*a = '\0';
	return (x);
}
