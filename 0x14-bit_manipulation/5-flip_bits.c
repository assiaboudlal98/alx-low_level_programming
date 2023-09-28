#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int d, is = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (d = 63; d >= 0; d--)
	{
		current = exclusive >> d;
		if (current & 1)
			is++;
	}

	return (is);
}
