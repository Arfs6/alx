#include "main.h"

/**
* _strncat - concactenate two strings
* @src: String to concactinate
* @dest: concactenate here
* @n: number of char to concactinate to to dest
*
* Return: concatenated string
*/
char *_strncat(char *dest, char *src, int n)
{
	int len, i, j;

	len = 0;
	for (i = 0; dest[i]; i++)
	len++;
	j = 0;
	while (j < n)
	{
		dest[len] = src[j];
		if (!(src[j]))
		break;
		else if (j >= n)
		break;
		j++;
		len++;
	}
	return (dest);
}
