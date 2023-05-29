#include "main.h"

/**
 * _strlen - Return the length of a string
 * @s: Find it's length
 *
 * Return: String length
*/
int _strlen(char *s)
{
	int len = 0;
	int i;

	for (i = 0; s[i]; i++)
		len++;
	return (len);
}
