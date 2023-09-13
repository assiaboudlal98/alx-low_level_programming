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
	int i = 1;

	if (array && size && cmp)
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	return (-1);
}
