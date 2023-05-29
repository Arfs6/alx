#include "main.h"

/**
 * write_number - prints a number
 * @n: the number to write
*/
void write_number(int n)
{
	if (n / 10)
	write_number(n / 10);
	_putchar(n % 10 + '0');
}

/**
 * more_numbers - print numbers from 0-9 10X
*/
void more_numbers(void)
{
	int num;
	int i;
	int j;

	i = 10;
	while (i--)
	{
		j = 0;
		num = 0;
		while (j < 15)
		{
			write_number(num);
			num++;
			j++;
		}
			_putchar('\n');
	}
}
