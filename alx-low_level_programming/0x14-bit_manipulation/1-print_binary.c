#include "main.h"
#include <stdio.h>

/**
 * print_binary - print binary of a number to stdout
 * @n: number
 */
void print_binary(unsigned long int n)
{
	int flag, i;
	unsigned long int temp;

	flag = i = 0;
	temp = 0;
	for (i = 63; i > 0; --i)
	{
		temp = n >> i;
		temp &= 1;
/*		printf("\ntemp = %lu\n", temp);*/
		if (temp && !flag)
			flag = 1;
		if (flag)
			_putchar(temp + '0');
	}
	temp = n;
	temp &= 1;
	_putchar(temp + '0');
}
