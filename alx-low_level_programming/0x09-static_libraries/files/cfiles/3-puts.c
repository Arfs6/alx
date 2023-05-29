#include "main.h"

/**
 * _puts - Print the string passed to std output
 * @s: string to be printed
*/
void _puts(char *s)
{
	long int i;

	for (i = 0; s[i]; i++)
	_putchar(s[i]);
	_putchar('\n');
}
