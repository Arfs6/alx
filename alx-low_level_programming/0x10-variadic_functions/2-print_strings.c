#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - print strings passed
 * @separator: what to print between strings
 * @n: number of strings passed
 * @...: optional number of strings
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list list;
	char *str;

	va_start(list, n);
	for (i = 0; i < n; ++i)
	{
		str = va_arg(list, char *);
		printf("%s", (str ? str : "(nil)"));
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
