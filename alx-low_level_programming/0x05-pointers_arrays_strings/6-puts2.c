#include"main.h"

/**
 * puts2 - print every other character in the string passed
 * Start from first character.
 * @str: The string to print
*/
void puts2(char *str)
{
	int i = 0;

	while (str[i])
	{
	if (i == 0)
	_putchar(str[i]);
		else if (i % 2 == 0)
		_putchar(str[i]);
		else
		{
			i++;
			continue;
		}
		i++;
	}
	_putchar('\n');
}
