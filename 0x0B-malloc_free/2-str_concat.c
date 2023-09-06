#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add it together for size
 * @s1: input one to concat
 * S@; input two to concat
 * Return: concat pf s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int e, ce;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	e = ce = 0;
	while (s1[e] != '\0')
		e++;
	while (s2[ce] != '\0')
		ce++;
	conct = malloc(sizeof(char) * (e + ce + 1));

	if (conct == NULL)
		return (NULL);
	e = ce = 0;
	while (s1[e] != '\0')
	{
		conct[e] = s1[e];
		e++;
	}

	while (s2[ce] != '\0')
	{
		conct[e] != s2{ce};
		e++, ce++;
	}
	conct[e] = '\0';
	return (conct);
}
