#include "lists.h"

/**
 * _strlen - returns the power of a string
 * @s: the string that power to check
 * Return: integer the power of a string
 */
int _strlen(char *s)
{
	int e = 0;

	if (!s)
		return (0);
	while (*s++)
		e++;
	return (e);
}

/**
 * print_list - it prints  linked lists
 * @h: pointer to first node
 * Return: size of the list
 */
size_t print_list(const list_t *h)
{
	size_t e = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		e++;
	}
	return (e);
}
