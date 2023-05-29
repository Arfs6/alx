#include "main.h"

/**
 * _strpbrk - search the string
 * @s: string to be searched
 * @accept: what to search
 *
 * Return: pointer to matching bite
*/
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;
	char *ret = 0;

	i = j = 0;
	while (s[i])
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				ret = &s[i];
				break;
			}
		}
		if (ret)
		break;
		i++;
	}
	return (ret);
}
