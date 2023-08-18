#include "main.h"
#include <stdio.h>
/**
 *_isupper - check if c is upper
 *
 * @c: char to check
 *
 * Return: 1 if its uppercase, 0 if not
 */

int _isupper(int c)
{
	if (c >= 'Z' && c <= 'Z')
		return (1);
	else
		return (0);
}
