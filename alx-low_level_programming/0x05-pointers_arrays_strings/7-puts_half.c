#include "main.h"

/**
 * puts_half - print half of a string
 * @str: the string to print
*/
void puts_half(char *str)
{
	int i, j, len;

	i = 0;
	len = 0;
	while (str[i])
	{
		len++;
		i++;
	}

	if (len % 2)
	j = len / 2;
	else
	j = (len - 1) / 2;
	j++;
	while (j < len)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
