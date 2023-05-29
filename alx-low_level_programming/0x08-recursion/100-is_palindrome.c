#include "main.h"

/**
 * _strlen_recursion - return length of a string using recursion
 * @s: string to find length
 *
 * Return: length of string
*/
int _strlen_recursion(char *s)
{
	int len;

	if (!*s)
	return (0);
	len = _strlen_recursion(&s[1]) + 1;
	return (len);
}

/**
 * check_palindrome - check if the string is a palindrome
 * @str: string to check
 * @start: starting point
 * @stop: stop point
 *
 * Return: 1 if true or 0 if false
*/
int check_palindrome(char *str, int start, int stop)
{
	if (start == 0)
	{
		if (str[start] == str[stop])
			return (1); /* palindrome */
		else
			return (0);
	}
	if (check_palindrome(str, (start - 1), (stop + 1)))
	{
		if (str[start] == str[stop])
			return (1);
		else
			return (0);
	}
	else
			return (0);
}

/**
 * is_palindrome - check for palindromes
 * @s: string to check
 *
 * Return: 1 if true
 * 0 if false
*/
int is_palindrome(char *s)
{
	int len, start, stop;

	len = _strlen_recursion(s);
	if (len % 2)
	stop = len / 2 + 1;
	else
	stop = len / 2;
	start = len / 2 - 1;
	return (check_palindrome(s, start, stop));
}
