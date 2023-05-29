#include "main.h"

/**
 * print_number - print numbers with _putchar
 * @n: the number to be printed
*/
void print_number(int n)
{
	if (n < 0)
	{
		/* change to positive if negative and print - */
		n = n * -1;
		_putchar('-');
	}
	if (n / 10)
	print_number(n / 10); /* recursion! */
	_putchar(n % 10 + '0');
}
