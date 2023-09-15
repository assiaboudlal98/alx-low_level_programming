#include "variadic_functions.h"

/**
 * prints_strings - prints strings with separator
 * @separator: the string separator
 * @n: the number of arguments
 * @...: the strings to print
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
