#include "main.h"

/**
* _strcat - concactenate two strings
* @src: String to concactinate
* @dest: concactenate here
*
* Return: concatenated string
*/
char *_strcat(char *dest, char *src)
{
	int len, i, j;

	len = 0;
	for (i = 0; dest[i]; i++)
	len++;
	for (j = 0; src[j]; j++, len++)
	dest[len] = src[j];
	dest[len] = '\0';
	return (dest);
}
