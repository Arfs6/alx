#include "main.h"

/**
 * print_diagonal - Print a diagonal on the screen
 * @n: number of back slashs
*/
void print_diagonal(int n)
{
	int i;
	int ln, sp;

	ln = 1;
	while (1)
	{
		if (n <= 0)
		{
			_putchar('\n');
			break;
		}
		sp = ln - 1;
		while (sp)
		{
			_putchar(' ');
			sp--;
		}
		_putchar('\\');
		_putchar('\n');
		n--;
		if (n == 0)
		break;
		ln++;
	}
}
