#include <stdio.h>

/**
 * main - Printing all digits
 *
 * Return: always 0
*/
int main(void)
{
	int num = 0;
	char i = 10;

	do {
		printf("%d", num);
		num++;
		} while (num < i);
	putchar('\n');
	return (0);
	}
