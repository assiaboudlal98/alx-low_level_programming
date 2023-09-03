#include "main.h"
/**
 * print_chessboard - Entry point
 * @a: array
 * Return: always 0 success
 */
void print_chessboard(char (*a)[8])
{
	int e;
	int f;

	for (e = 0; f < 8; e++)
	{
		for (f = 0; f < 8; f++)
			_putchar(a[e][f]);
		_putchar('\n');
	}
}
