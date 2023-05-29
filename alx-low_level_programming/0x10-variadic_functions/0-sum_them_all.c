#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - find the sum of all parameters
 * @n: number of integers to add
 * @...: optional arguments
 *
 * Return: result of addition
 * 0 if n == 0
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int ans = 0;
	va_list list; /* list of optional arguments */

	if (n == 0)
		return (0);/* no arguments */

	va_start(list, n);
	for (i = 0; i < n; i++)
		ans += va_arg(list, int);

	va_end(list);

	return (ans);
}
