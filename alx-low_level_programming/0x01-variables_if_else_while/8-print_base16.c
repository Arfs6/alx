#include <stdio.h>

/**
 * main - print int using putchar
 *
 * Return: 0
*/
int main(void)
{
	char i = 10;
	char num = 0;

	while (num < i)
	{
		putchar(num % 10 + '0');
		num++;
	}
	i = 'g';
num = 'a';
	while (num < i)
	{
	putchar(num);
	num++;
	}
	putchar('\n');
	return (0);
}
