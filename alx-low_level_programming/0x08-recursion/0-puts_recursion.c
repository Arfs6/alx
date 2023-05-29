#include "main.h"

/**
 * _puts_recursion - print a string with recursion
 * @s: string to print
 * only _putchar can be used
*/
void _puts_recursion(char *s)
{
	if (!*s)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(&s[1]);
}
