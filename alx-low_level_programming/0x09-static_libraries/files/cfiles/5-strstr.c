#include "main.h"

/**
 * _strstr - locate the substring
 * @haystack: string to be searched
 * @needle: substring:
 *
 * Return: pointer to the begining of the substring
 * NULL if no substring
*/
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j, temp;
	short int flag = 1;
	char *ret = 0;

	for (i = 0; haystack[i]; i++)
	{
		temp = i;
		for (j = 0; needle[j]; j++)
		{
			flag = 0;
			if (haystack[temp] == needle[j])
			flag = 1;
			else
			{
				flag = 0;
				break;
			}
			temp++;
		}
		if (flag)
		{
			ret = &haystack[i];
			break;
		}
	}
	return (ret);
}
