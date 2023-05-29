#include "main.h"
/**
 * print_alphabet_x10 - print all alphabets in lower case ten times
 *
 * Return: always 0 (success)
*/
void print_alphabet_x10(void)
{
	char alpha;
	int i;
	int j = 0;

	while (j < 10)
{
		i = 0;
		alpha = 'a';
		while (i < 26)
		{
			_putchar(alpha);
			alpha++;
			i++;
		}
		_putchar('\n');
		j++;
	}
}
