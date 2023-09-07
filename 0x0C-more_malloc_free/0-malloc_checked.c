#include "main.h"

/**
 * *malloc_checked - allocates memory using and exit if failed
 * @b: int
 * Return: pointer to the array initialized of NULL
 */

void *malloc_checked(unsigned int b)
{
	int *a = malloc(b);

	if (a == 0)
		exit(98);

	return (a);
}
