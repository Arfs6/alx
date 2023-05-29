#include <stdio.h>
#include <stdlib.h>
#include "main.h"

#define in 1
#define out 0

/**
 * get_num_word- get number of words
 * @string: string to check
 *
 * Return: number of words
*/
int get_num_words(char *str)
{
	int num_words, len = 0, i;
	short int word;

	for (len = 0; str[len]; ++len)
		;
	len++; /* null character */

	for (i = 0; i < len; ++i)
	{
		if (i == 0)
		{
			if (str[i] == ' ')
				word = out;
			else
				word = in;
			continue;
		}
		if ((str[i] == ' ' || str[i] == '\0') && word)
		{
			word = out;
			num_words++;
		}
		else if (!(str[i] == ' ' || str[i] == '\0') && !word)
		{
			word = in;
		}
	}
	return (num_words);
}

/**
 * create_word - create an array of words from a string
 * @str: string to check
 * @tab: memory to store array
 * @start: starting point in str
 * @stop: stop point
 *
 * Return: void
*/
void create_word(char **tab, char *str, int num_words, int start, int stop)
{
int j = 0;

	*(tab + num_words) = malloc(sizeof(char) * (stop - start + 1));
	printf("malloc\n");
//	for (j = 0; start < stop; ++j, ++start)
//	for (j = 0; j <= 100; ++start, ++j)
			while (start < stop)
	{
		tab[num_words][j] = 'c';//*(str + start);
		printf("%i = %c\nnum_words = %i\n", j, tab[num_words][j], num_words);
		start++;
		j++;
		if (start == stop)
			break;
	}
	*(*(tab + num_words) + j) = '\0';
}

/**
 * strtow - convert argument to array of words
 * @str: string to convert
 *
 * Return: Array of words
 * NULL if invalid string or insufficient memory
*/
char **strtow(char *str)
{
	int start, stop, len = 0, num_words = 0, i;
	short int word;
	char **tab;

	if (!(str || *str))
		return (0);/* invalid string */

	num_words = get_num_words(str);
	if (!num_words)
		return (NULL);
	printf("num_words %i\n", num_words);
	tab = malloc(sizeof(char *) * (num_words + 1));
	if (!tab)
		return (NULL); /* insufficient memory */

	for (len = 0; str[len]; ++len)
		;
	num_words = 0;
		printf("%i\n", len);
	for (i = 0; i < len; ++i)
	{
	printf("%i\n", i);
		if (i == 0)
		{
			if (str[i] == ' ')
				word = out;
			else
				word = in;
			continue;
		}
		if ((str[i] == ' ' || str[i] == '\0') && word)
		{
			word = out;
			stop = i;
		}
		else if (!(str[i] == ' ' || str[i] == '\0') && !word)
		{
			word = in;
			start = i;
		}
		if (stop)
		{
			printf("create word\n");
			create_word(tab, str, num_words, start, stop);
			num_words++;
		}
	}
	*(tab + num_words) = NULL;

	return (tab);
}

