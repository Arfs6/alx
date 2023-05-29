#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenate all arguments
 * @ac: argument count
 * @av: argument strings
 *
 * Return: pointer to concatenated string
 * NULL if fails or ac = 0
*/
char *argstostr(int ac, char **av)
{
	int len = 0, idx = 0, i, j;
	char *str, *tmp;

	if (!ac || !*av)
		return (NULL);

	for (i = 0; i < ac; ++i)
	{
		tmp = *(av + i);
		for (j = 0; *(tmp + j); ++j)
			len++;
		len++; /* new line character */
	}
	str = malloc(sizeof(char) * (len + 1));/* + null character */
	if (!str)
		return (NULL); /* insufficient memory */

	/* concatenating! */
	idx = 0;
	for (i = 0; i < ac; ++i)
	{
		tmp = *(av + i);
		for (j = 0; *(tmp + j); ++j, ++idx)
			*(str + idx) = *(tmp + j);
		*(str + idx) = '\n';
		++idx;
	}
	*(str + len) = '\0';

	return (str);
}
