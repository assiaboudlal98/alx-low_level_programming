#include "main.h"

/**
 * check if c is upper otherwise it's 0
 *
 * @c: input for alphabet
 *
 * Return: 1 if its uppercase , otherwise its 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
