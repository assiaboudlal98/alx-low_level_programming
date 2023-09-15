#include "variadic_functions.h"

/**
 * prints_strings - prints strings, followed by a new line.
 * @separator: the string separator
 * @n: the numbers of arguments
 * @...: the integers to print
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	int i = n;
	char *str;
	va_list jt;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(jt, n);
	while (i--)
		printf("%s%s", (str = va_arg(jt, char *)) ? str : "(nil)",
			i ? (separator ? separator : "") : "\n");
	va_end(jt);
}
