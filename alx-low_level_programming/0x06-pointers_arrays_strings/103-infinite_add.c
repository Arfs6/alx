#include "main.h"
#include <stdio.h>


/**
 * find_len - find the length of a string
 * @str: the string
 *
 * Return: length of the string.
*/
int find_len(char *str)
{
	int len, i;

	len = i = 0;
	while (str[i])
	{
		len++;
		i++;
	}
	return (len);
}

int main(void)
{
int len;
char str[] = "hello";
len = find_len(str);
printf("%d\n", len);
}
