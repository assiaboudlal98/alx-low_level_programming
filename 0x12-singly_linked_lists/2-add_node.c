#include "lists.h"

/**
 * add_node - adds a node to the strt of the list
 * @head: address of pointer to head node
 * @str: str field of node
 * Return: size of list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *first_head = malloc(sizeof(list_t));

	if (!head || first_head)
		return (NULL);
	if (str)
	{
		first_head->str = strdup(str);
		if (!first_head->str)
		{
			free(first_head);
			return (NULL);
		}
		first_head->len = _strlen(first_head->str);
	}

	first_head->next = *head;
	*head = first_head;
	return (first_head);
}
