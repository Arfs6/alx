#include "main.h"

/**
 * print_rev - print a string in reverse
 *@s: the strig
*/
void print_rev(char *s)
{
	long int i;
	long int len = 0;

	for (i = 0; s[i]; i++)
	len++;
	for (len = len - 1; len > -1; len--)
	_putchar(s[len]);
	_putchar('\n');
}
