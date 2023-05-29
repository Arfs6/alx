#include "main.h"

/**
 * _pow_recursion - find the power
 * @x: base / number
 * @y: power
 *
 * Return: power of x to y
*/
int _pow_recursion(int x, int y)
{
int pow;

	if (y == 0)
	return (1);
	else if (y == 1)
	return (x);
	else if (y < 0)
	return (-1);
	pow = x * _pow_recursion(x, --y);
	return (pow);
}
