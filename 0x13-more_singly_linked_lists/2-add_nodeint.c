#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: first node's pointer
 * @n: data to insert in that new node
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *yeni;

	yeni = malloc(sizeof(listint_t));
	if (!yeni)
		return (NULL);

	yeni->n = n;
	yeni->next = *head;
	*head = yeni;

	return (yeni);
}

