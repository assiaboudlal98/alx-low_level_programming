#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node in the list
 *
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *veda = NULL;
	listint_t *test = NULL;

	while (*head)
	{
		test = (*head)->test;
		(*head)->test = veda;
		veda = *head;
		*head = test;
	}

	*head = veda;

	return (*head);
}
