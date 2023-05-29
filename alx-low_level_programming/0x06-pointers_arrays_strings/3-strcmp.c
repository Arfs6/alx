#include "main.h"
/**
 * _strcmp - check if the strings passed are equal
 * @s1: First string
 * @s2: second string
 *
 * Return: difference between s1 and s2
 * or 0 if they are equal
*/
int _strcmp(char *s1, char *s2)
{
	int ret, i;

	i = 0;
	while (1)
	{
		ret = s1[i] - s2[i];
		if (ret)
		break;
		else if (!(s1[i] && s2[i]))
		break;
		i++;
	}
	return (ret);
}
