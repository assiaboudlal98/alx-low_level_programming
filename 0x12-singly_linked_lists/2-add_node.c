#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node in the beginning of a linked list
 * @head: double pointer to  list's list_t
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *first;
	unsigned int len = 0;

	while (str[len])
	len++;

	first = malloc(sizeof(list_t));
	if (!first)
	return (NULL);

	first->str = strdup(str);
	first->len = len;
	first->next = (*head);
	(*head) = first;

	return (*head);
}
