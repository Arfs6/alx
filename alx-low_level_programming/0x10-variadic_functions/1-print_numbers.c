#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - print numbers passed
 * @separator: string to print between numbers
 * @n: number of optional arguments
 * @...: optional arguments
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list list;

	va_start(list, n);
	for (i = 0; i < n; ++i)
	{
		printf("%i", va_arg(list, int));
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
