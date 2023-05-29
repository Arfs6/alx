#include "main.h"

/**
 * print_triangle - print a triangle using #
 * @size: size of triangle
*/
void print_triangle(int size)
{
	int i, sp, ln;

	ln = 1;
	while (1)
	{
		if (size <= 0)
		{
			_putchar('\n');
			break;
		}
		i = ln;
		sp = size - i;
		while (sp)
		{
			_putchar(' ');
			sp--;
		}
		while (i)
		{
			_putchar('#');
			i--;
		}
		_putchar('\n');
		ln++;
		if (ln > size)
		break;
	}
}
