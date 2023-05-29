#include "main.h"

/**
* cap_string - capitalize all words
* @str: string to capittalize
*
* Return: Capitalized string
*/
char *cap_string(char *str)
{
	int flag, i, j;
	char sprs[] = " \n\t,;.!?\"(){}";

	for (i = 0; str[i]; i++)
	{
		flag = 0;
		for (j = 0; sprs[j]; j++)
		{
			if (str[i] == sprs[j])
			flag = 1;
		}
		if (flag && str[i + 1] <= 122 && str[i + 1] >= 97)
		str[i + 1] = str[i + 1] - 32;
	}
	return (str);
}
