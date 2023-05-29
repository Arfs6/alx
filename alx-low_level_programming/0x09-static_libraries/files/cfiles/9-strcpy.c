#include "main.h"

/**
 * _strcpy - copy string in src to dest
 * @src: the string to copy
 * @dest: destination pointer
 *
 * Return: The copied string
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (1)
	{
		dest[i] = src[i];
		if (src[i])
		i++;
		else
		break;
	}
	return (dest);
}
