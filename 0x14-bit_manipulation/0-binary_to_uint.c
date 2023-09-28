#include "main.h"

/**
 * binary_to_uint - converts a binary number string to unsingned int
 * @b: the binary number as a string
 *
 * Return: the unsigned int fore of b
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int name = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		name = name * 2 + (*b++ - '0');
	}
	return (name);
}
