#include <stddef.h>
#include "main.h"

/**
 * _strchr - serch a string for a character
 * @s: string to search
 * @c: character to be searched
 *
 * Return: pointer of the character
*/
char *_strchr(char *s, char c)
{
	unsigned int i = 0;
	char *chr;

	chr = NULL;
	while (s[i])
	{
		if (s[i] == c)
		{
			chr = &s[i];
			break;
		}
		i++;
	}
	return (chr);
}
