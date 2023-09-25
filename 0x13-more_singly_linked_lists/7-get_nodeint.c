#include "lists.h"

/**
 * get_nodeint_at_index - returns a node in a certain index in a linked list
 * @head: first node in the linked list
 * @index: index of the node for returning
 *
 * Return: pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *time = head;

	while (time && d < index)
	{
		time = time->next;
		i++;
	}

	return (time ? time : NULL);
}
