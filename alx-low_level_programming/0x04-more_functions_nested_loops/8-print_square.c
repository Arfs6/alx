#include "main.h"

/**
 * print_square - print a square on the screen
 * @size: the size of the square
*/
void print_square(int size)
{
	int i, j;

	j = size;
	while (1)
	{
		if (j <= 0)
		{
			_putchar('\n');
			break;
		}
		for (i = 0; i < size; i++)
		_putchar('#');
		_putchar('\n');
		j--;
		if (j == 0)
		break;
	}
}
