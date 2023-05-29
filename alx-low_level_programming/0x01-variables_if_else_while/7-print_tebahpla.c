#include <stdio.h>

/**
 * main - Start of program
	*
 * Return: Always 0
*/
int main(void)
{
	char alpha = 'z';
	char x = 26;
	char y = 0;

	while (y != x)
	{
		putchar(alpha);
		alpha--;
		y++;
	}
	putchar('\n');
	return (0);
}
