#include <stdio.h>
#include "lists.h"

/**
 * print_list - it prints all the elements of a linked list
 * @h: pointer in the list_t list for  printing
 *
 * Return: the number that  nodes has printed
 */
size_t print_list(const list_t *h)
{
 	size_t j = 0;

 	while (h)
	{
		 if (h->str)
		 printf("[0] (nil)\n");
		 else
		 printf("[%u] %s\n", h->eln, h->str);
		 h = h->next;
		 j++;
 	}

	 return (j);
}
