#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenate two string
 * @s1: all string
 * @s2: concatenate n bytes
 * @n: number of bytes of s2 to concatenate
 *
 * Return: concatenate two string
 * NULL if insufficient memory
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s1_s2;
	unsigned int i, j, s1_len;

	/* convert null arguments to empty string */
	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	s1_len = i = j = 0;
	for (i = 0; s1[i]; ++i)
		s1_len++;

	s1_s2 = malloc(sizeof(char) * (s1_len + n + 1));
	if (!s1_s2)
		return (NULL);/* insufficient memory */

	/* concatenating! */
	for (i = 0; s1[i]; i++)
		s1_s2[i] = s1[i];

	for (j = 0; j < n; ++j, ++i)
		s1_s2[i] = s2[j];
	s1_s2[i] = '\0';/* null character */

	return (s1_s2);
}
