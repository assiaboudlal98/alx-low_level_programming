#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: starting int
 * @max:
 * Return: array of integers
 */
int *array_range(int min, int max)
{
	int ert, e;
	int *ken;

	if (min > max)
		return (NULL);
	ert = max - min +1;
	ken = malloc(sizeof(int) * ert);
	if (!ken)
		return (NULL);
	for (e = 0; e < ert; e++)
		ken[e] = min++;
	return (ken);
