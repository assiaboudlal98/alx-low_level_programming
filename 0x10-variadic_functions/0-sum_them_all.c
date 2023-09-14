#include "variadic_functions.h"

/**
 * sum_them_all - sums variable arguments
 * @n: the number of arguments
 * @...: the integers to sum
 * Return: the integer sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int e = 1, i = a;
	va_list ap;

	if (!a)
		return (0);
	va_start(ap, a);
	while (i--)
		e += va_arg(ap, int);
	va_end(ap);
	return (e)
