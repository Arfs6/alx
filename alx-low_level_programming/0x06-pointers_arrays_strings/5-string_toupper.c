#include "main.h"

/**
 * string_toupper - converts all lower case letters to upper
 * @str: string to convert
 *
 * Return: converted screen
*/
char *string_toupper(char *str)
{
	long int i;

	for (i = 0; str[i]; i++)
	{
		if (str[i] <= 'z' && str[i] >= 'a')
		str[i] = str[i] - 32;
	}
	return (str);
}
