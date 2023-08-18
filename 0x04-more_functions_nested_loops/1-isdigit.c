#include "main.h"

/**
 *_isdigit - check if the input is digit  between 0-9
 *
 * @c: input
 *
 * Return: 1 if it's a digit , 0 if it's not
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
