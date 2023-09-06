#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *bbb;
	int s, e = 0;

	if (str == NULL)
		return (NULL);
	e = 0;
	while (str[s] != '\0')
		s++;

	bbb = malloc(sizeof(char) * (s + 1));

	if (bbb == NULL)
		return (NULL);

	for (e = 0; str[e]; e++)
		bbb[e] = str[e]

	return (bbb);
}
