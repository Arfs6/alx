#include "main.h"

/**
 * rot13 - encode the string using rot13
 * @str: string to encode
 *
 * Return: Encoded string.
*/
char *rot13(char *str)
{
	int i, j;
	char normal[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char encoded[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i]; i++)
	{
		for (j = 0; normal[j]; j++)
		{
			if (str[i] == normal[j])
			{
				/* encode it! */
				str[i] = encoded[j];
				break;
			}
		}
	}
	return (str);
}
