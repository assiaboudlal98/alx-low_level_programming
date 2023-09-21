#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ref;
	list_t *time = *head;
	unsigned int len = 0;

	while (str[len])
	len++;

	ref = malloc(sizeof(list_t));
	if (!ref)
	return (NULL);

	ref->str = strdup(str);
	ref->len = len;
	ref->next = NULL;

	if (*head == NULL)
	{
		*head = ref;
		return (ref);
	}
	
	while (time->next)
	time = time->next;

	time->next = ref;

	return (ref);
}
