#include "main.h"

/**
 * _find_sqrt - find square root
 * @n: number & int
 * @start: starting poin
 *
 * Return: square root
*/
int _find_sqrt(int n, int start)
{
	if (start * start == n)
	return (start);
	else if (start >= n)
	return (-1);
	return (_find_sqrt(n, (start + 1)));
}

/**
 * _sqrt_recursion - find square root using recursion
 * @n: number & int
 *
 * Return: square root
 * -1 if no square root
*/
int _sqrt_recursion(int n)
{
	if ((n == 0) || (n == 1))
	return (n);
	else if ((n < 0) || (n <= 3))
	return (-1);

	return (_find_sqrt(n, 1));
}
