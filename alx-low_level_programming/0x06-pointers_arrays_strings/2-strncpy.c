#include "main.h"

/**
 * _strncpy - copy n number of char in src to dest
 * @dest: Destination string
 * @src: the string to be copied
 * @n: number of char to copy
 *
 * Return: dest.
*/
char *_strncpy(char *dest, char *src, int n)
{
	int flag, j;

	j = 0;
	flag = 0;
	while (j < n)
	{
		if (flag)
		dest[j] = '\0';
		else
		dest[j] = src[j];
		if (src[j] == '\0')
		flag = 1;
		j++;
	}
	return (dest);
}
