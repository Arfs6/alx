#include "main.h"

/**
 * print_line - print n number of lines
 * @n: number of lines
*/
void print_line(int n)
{
	while (1)
	{
		if (n <= 0)
		{
			_putchar('\n');
			break;
		}
		_putchar('_');
		n--;
	}
}
