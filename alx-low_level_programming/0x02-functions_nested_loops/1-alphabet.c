#include "main.h"
/**
 * print_alphabet - print all alphabets in lower case
 *
 * Return: always 0 (success)
*/
void print_alphabet(void)
{
	char alpha = 'a';
	int i = 0;

	while (i < 26)
	{
		_putchar(alpha);
		alpha++;
		i++;
	}
	_putchar('\n');
}
