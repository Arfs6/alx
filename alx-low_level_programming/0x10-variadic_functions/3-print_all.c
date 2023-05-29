#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_all - print all valid arguments passed
 * @format: string containing format
 * @...: optional number of arguments
*/
void print_all(const char * const format, ...)
{
	int j, k;
	char *str, *separator;
	va_list list;

	j = k = 0;
	separator = ", ";
	va_start(list, format);

	while (format && format[k])
		k++;

	while (format && format[j])
	{
		if (j == k - 1)
			separator = "";
		switch (format[j])
		{
			case 'c':
				printf("%c%s", va_arg(list, int), separator);
				break;
			case 'i':
				printf("%d%s", va_arg(list, int), separator);
				break;
			case 'f':
				printf("%f%s", va_arg(list, double), separator);
				break;
			case 's':
			{
				str = va_arg(list, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", str, separator);
				break;
			}
		}
			j++;
	}
	va_end(list);
	printf("\n");
}
