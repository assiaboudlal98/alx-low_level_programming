#include "function_poiters.h"

/**
 * int_index - searches for integer
 * @array: the int array
 * @size: array's size
 * @cmp: compare function
 * Return: integer's index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a = 0;

	if (array && size && cmp)
		while (a < size)
		{
			if (cmp(array[a]))
				return (a);
			a++;
		}
	return (-1);
}
