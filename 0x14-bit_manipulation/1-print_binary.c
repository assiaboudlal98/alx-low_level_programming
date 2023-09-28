#include "main.h"

/**
 * print_binary - it prints a number like a binary string
 * @n: the number for printing
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int slow = sizeof(n) * 8, printed = 0;

	while (slow)
	{
		if (n & 1L << --slow)
		{
			_putchar('1');
			printed++;
		}
		else if (printed)
			_putchar('0');
	}
	if (!printed)
		_putchar('0');
}
