#include <stdio.h>

/**
 * print_to_98 - print numbers from n to 98
 * @n: Number to start from
*/
void print_to_98(int n)
{
	while (1)
	{
		printf("%i", n);
		if (n == 98)
		break;
		printf(", ");
		if (n > 98)
		n--;
		else
		n++;
	}
	putchar('\n');
}
