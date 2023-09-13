#include "function_pointers.h"

/**
 * int_index - return index place
 * @array:  array
 * @size: array's size
 * @cmp: pointer to function of one of the 3 in main
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (a = 0; i < size; a++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
