#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatinate two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to concatinated string (success)
 * NULL if unsuccessful
*/
char *str_concat(char *s1, char *s2)
{
	char *s1_s2;
	int s1_len = 0, s2_len = 0, len, i, j;

	if (!s1)
	s1	= "";
	for (s1_len = 0; s1[s1_len]; ++s1_len)
		;
	if (!s2)
		s2 = "";
	for (s2_len = 0; s2[s2_len]; ++s2_len)
		;
	s2_len++;
	len = s1_len + s2_len;
	s1_s2 = malloc(sizeof(char) * (len + 0));

	if (!s1_s2)
		return (0);

	/* concactinating */
	for (i = 0; s1[i]; ++i)
		s1_s2[i] = s1[i];
	for (j = 0; s2[j]; ++i, ++j)
		s1_s2[i] = s2[j];
	s1_s2[len] = '\0';

	return (s1_s2);
}
