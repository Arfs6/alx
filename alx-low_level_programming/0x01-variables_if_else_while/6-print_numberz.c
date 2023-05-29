#include <stdio.h>

/**
 * main - print int using putchar
 *
 * Return: 0
*/
int main(void)
{
	int num = 0;
	int i = 10;

	while (num < i)
	{
		putchar(num % 10 + '0');
		num++;
	}
	putchar('\n');
	return (0);
}
