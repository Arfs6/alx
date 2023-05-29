#include "main.h"

/**
 * _strlen_recursion - return length of a string using recursion
 * @s: string to find length
 *
 * Return: length of string
*/
int _strlen_recursion(char *s)
{
	int len;

	if (!*s)
	return (0);
	len = _strlen_recursion(&s[1]) + 1;
	return (len);
}
