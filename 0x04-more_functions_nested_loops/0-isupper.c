#include "main.h"

/**
 *_isupper - check if c is upper
 *
 * @c: char to check
 *
 * Return: 1 if its uppercase, otherwise its 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
