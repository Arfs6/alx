#include "main.h"

/**
 * _puts - Print the string passed to std output
 * @str: string to be printed
*/
void _puts(char *str)
{
	long int i;

	for (i = 0; str[i]; i++)
	_putchar(str[i]);
	_putchar('\n');
}
