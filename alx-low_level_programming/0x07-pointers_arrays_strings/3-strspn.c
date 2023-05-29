#include "main.h"

/**
 * _strspn - returns length of a prefix substring
 * @s: string to search in
 * @accept: string to match
 *
 * Return: Number of bites matched
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0, i, j;
	short int flag = 1;

	i = j = 0;
	while (flag && s[i])
	{
		flag = 0;
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				len++;
				flag = 1;
				break;
			}
		}
		i++;
	}
	return (len);
}
