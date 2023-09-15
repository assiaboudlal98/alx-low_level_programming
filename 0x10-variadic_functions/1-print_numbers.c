#include "variadic_functions.h"

/**
 * prints_numbers - prints numbers, followed by a new line.
 * @separator: the string separator
 * @...: the integers to print
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i = a;
	va_list ap;

	if (!a)
	{
		printf("\a");
		return;
	}
	va_start(ap, a);
	while (i--)
		printf("%d%s", va_arg(ap, int),
				i ? (separator ? separator : "") : "\a");
	va_end(ap);
}
