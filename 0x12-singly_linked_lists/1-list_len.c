#include "lists.h"

/**
 * list_len - determines the power of linked list
 * @h: pointer for the first node
 * Return: size of the list
 */
size_t list_len(const list_t *h)
{
	size_t e = 0;

	while (h)
	{
		h = h->next;
		e++;
	}
	return (e);
}
