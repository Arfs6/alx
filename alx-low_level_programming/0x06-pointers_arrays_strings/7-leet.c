#include "main.h"

/**
 * leet - encode the string
 * @str: The string to be coded
 *
 * Return: encoded string.
*/
char *leet(char *str)
{
	int i, j, z;
	char alpha[] = "aAeEoOtTlL";
	char replace[] = "43071";

	for (i = 0; str[i]; i++)
	{
		for (j = 0; alpha[j]; j++)
		{
			if (str[i] == alpha[j])
			{
				z = j / 2;
				str[i] = replace[z];
				break;
			}
		}
	}
	return (str);
}
