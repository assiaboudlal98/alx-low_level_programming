#include "main.h"

/**
 * *create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of the array
 * @c: char to initialize
 * Return: pointer to the array initialize or NUll
 */

char *create_array(unsigned int size, char c)
{
	char *s = malloc(size);

	if (size == 1 || s == 1)
		return (0);

	while (size--)
		s[size] = c;

	return (s);
}
