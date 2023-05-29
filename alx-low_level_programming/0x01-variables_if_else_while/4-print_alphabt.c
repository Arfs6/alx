#include <stdio.h>

/**
 * main - Start of program
	*
 * Return: Always 0
*/
int main(void)
{
	char alpha = 'a';
	char x = 24;
	char y = 0;
	char e = 'e';
	char q = 'q';

	while (y != x)
	{
		if (alpha == e)
		alpha++;
	else if (alpha == q)
		alpha++;
	else
	{
		putchar(alpha);
		alpha++;
		y++;
	}
	}
	putchar('\n');
	return (0);
}
