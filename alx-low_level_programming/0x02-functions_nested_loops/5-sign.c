#include "main.h"

/**
 * print_sign - Print the sign of a number
 *
 * @n: number to be checked
 * Return: 1 if n > 0
 * 0 if n == 0
 * -1 if n < 0
*/
int print_sign(int n)
{
	int ret;

	if (n > 0)
	{
		_putchar('+');
		ret = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		ret = 0;
	}
	else if (n < 0)
	{
		_putchar('-');
		ret = -1;
	}
	return (ret);
}
