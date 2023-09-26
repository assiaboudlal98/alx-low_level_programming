#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int d;
	listint_t *yeni;
	listint_t *time = *head;

	yeni = malloc(sizeof(listint_t));
	if (!yeni || !head)
		return (NULL);

	yeni->n = n;
	yeni->next = NULL;

	if (idx == 0)
	{
		yeni->next = *head;
		*head = yeni;
		return (yeni);
	}

	for (d = 0; time && d < idx; d++)
	{
		if (d == idx - 1)
		{
			yeni->next = time->next;
			time->next = yeni;
			return (yeni);
		}
		else
			time = time->next;
	}

	return (NULL);
}
