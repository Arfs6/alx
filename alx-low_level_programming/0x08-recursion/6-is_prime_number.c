#include "main.h"

/**
 * _find_prime - find prime factor
 * @n: number
 * @i: number to start checking from
 *
 * Return: 1 if prime number
 * 0 if not prime number
*/
int _find_prime(int n, int i)
{
	if (i == 1)
	return (1);
	if (n % i)
	return (_find_prime(n, --i));
	return (0);
}

/**
 * is_prime_number - check if it is a prime number
 * @n: number to check
 *
 * Return: 1 if true and 0 if false
*/
int is_prime_number(int n)
{
	if (n <= 1)
	return (0);
	return (_find_prime(n, (n - 1)));
}
