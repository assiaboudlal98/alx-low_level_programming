#include "variadic_functions.h"

/**
 * prints_numbers - prints numbers, followed by a new line.
 * @separator: the string separator
 * @...: the integers to print
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i = n;
	va_list jt;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(jt, n);
	while (i--)
		printf("%d%s", va_arg(ap, int),
				i ? (separator ? separator : "") : "\n");
	va_end(jt);
}
